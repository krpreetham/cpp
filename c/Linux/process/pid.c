#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/wait.h>

int main()
{
	pid_t id1,id2;
	int status;
	id=fork();
	if(id==-1)
	{
		exit(-1);
	}
	if(id==0)
	{
		printf("In child process - %d \n",getpid());
		printf("Parent process id - %d \n",getppid());
		sleep(20);
		printf("Child process id - %d \n",getpid());
		exit(3);
	}
	else
	{
		printf("Parent before wait id - %d \n",getpid());
		id=wait(&status);
		printf("Parent process after wait id- %d \n",getpid());
		printf("Status - %d\n",status);
	}
	return 0;
}
