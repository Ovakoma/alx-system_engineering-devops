#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>
#include <stdlib.h>

/**
 * infinite_while - runs loop infinitely
 * Return: 0(Success)
 */
int infinite_while(void)
{
    while (1)
    {
        sleep(1);
    }
    return (0);
}


/**
 * main - this program creates 5 zombie processes
 * Return: 0(Success)
 */
int main(void)
{
	int i;
	pid_t child_pid;
	for (i = 0; i < 5; i++)
	{
		child_pid = fork();
		if (child_pid > 0)
		{
			printf("Zombie process created, PID: %d" child_pid);
			sleep(1);
		}
		else
			exit(0);
	}
	infinite_while();
	
	return (EXIT_SUCCESS);
}
