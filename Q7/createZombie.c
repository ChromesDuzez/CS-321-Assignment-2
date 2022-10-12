#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>

int main(void)
{
	pid_t pid;
	
	pid = fork();
	
	if (pid <0)
	{
		fprintf(stderr, "Error\n");
		return -1;
	}
	else if (pid ==0) { //child process
		return 0;
	}
	else //Parent process
	{
	sleep(10);
	printf("\nParent exitting\n");
	return 0;
	}
}


