#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

int main(int argc, char **argv)
{
	struct stat charbuff;
	int k;

	if (argc < 2)
	{
		printf("Usage: %s filename ...\n", argv[0]);
	}

	k = 1;
	while (k < argc)
	{
		printf("%s ", argv[k]);
		if (stat(argv[k], &charbuff) == 0)
		{
			printf("FOUND\n");
		}
		else
		{
			printf("NOT FOUND\n");
		}
		k++;
	}

	return (0);
}
