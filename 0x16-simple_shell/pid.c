#include <stdio.h>
#include <unistd.h>

/**
 * main - PID
 *
 * Return: Always 0.
 */
int main(void)
{
    pid_t my_pid;
    pid_t p_pid;

    my_pid = getpid();
    p_pid = getppid();
    
    printf("My PID: %u\n Parent PID: %u\n\n", my_pid, p_pid);
    return (0);
}
