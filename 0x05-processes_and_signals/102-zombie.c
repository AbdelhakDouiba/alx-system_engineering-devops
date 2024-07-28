#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
*main - creat 5 zombie processes
*
*Return: 0 if it success
*/
int main(void)
{
	int i, zombie;

	for (i = 0; i < 5; i++)
	{
		zombie = fork();
		if (zombie)
			printf("Zombie process created, PID: %d\n", zombie);
		else
			exit(0);
	}
	while (1)
	{
		sleep(1);
	}
	return (0);
}
