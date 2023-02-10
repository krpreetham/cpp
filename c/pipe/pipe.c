#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
#include<unistd.h>
#include<string.h>
int fd[2];

void* readmsg(void *arg)
{
	char msg[100]={};
	while(1)
	{
		read(fd[0],msg,5);
		printf("%s \n",msg);
	}
}

int main()
{
	char msg[100];
	int i=1;
	pthread_t t;
	pthread_create(&t,NULL,readmsg,NULL);
	if(pipe(fd)==-1)
	{
		perror("Error in creating pipe");
		exit(1);
	}
	while(1)
	{
		sprintf(msg,"Hello %d ",i++);
		write(fd[1],msg,strlen(msg));
		sleep(1);
	}
	return 0;
}
