#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <stdlib.h>
#include <sys/wait.h>

int main(void)
{
	char *lineptr, *cmdstr;
	size_t m, k = 0, n = 0;
	pid_t child_pid;

	while (1)
	{
		printf("#cisfun$ ");

		m = getline(&lineptr, &n, stdin);
		printf("Count: %ld\n", m);
		
		cmdstr = malloc(m - 1);

		k = 0;
		while (k < m - 1)
		{
			cmdstr[k] = lineptr[k];
			k++;
		}

		char *argv[] = {cmdstr, NULL};

		child_pid = fork();

		if (child_pid == 0)
		{
			printf("lineptr in child: %s", argv[0]);
	
			if (execve(argv[0], argv, NULL) == -1)
			{
				perror("Error: ");
			}
		}
		else
		{
			wait(NULL);
		}
	}

	
}
