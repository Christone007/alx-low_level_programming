#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main()
{
	pid_t childpid;
	int status, i = 5;
	char *argv[] = {"/bin/ls", "-l", "/tmp", NULL};

	while (i--)
	{
		childpid = fork();

		if (childpid == 0)
		{
			printf("\n\nMyPid[%u], Parent[%u]\n", getpid(), getppid());
			if (execve(argv[0], argv, NULL) == -1)
			{
				perror("Error:");
			}
		}
		else
		{
			wait(&status);
		}
	}

	return (0);

}
