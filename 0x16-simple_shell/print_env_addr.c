#include <stdio.h>
#include <unistd.h>

extern char **environ;

int main(int argc, char **argv, char **env)
{
	(void) argc;
	(void) argv;

	printf("Address of env: %p\nAddress of environ: %p\n", *env, *environ);
	
	return (0);
}
