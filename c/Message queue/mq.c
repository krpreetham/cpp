#include<stdio.h>
#include<stdlib.h>
#include<sys/ipc.h>
#include<sys/types.h>
#include<sys/msg.h>
#include<mqueue.h>
#include<unistd.h>
#include<pthread.h>
#include<string.h>

struct msgbuff{
	long mtype;
	char msgtext[100];
};

void* readmsg(void *arg)
{
	struct msgbuff rcvmsg;
	int msgid;
	key_t key;

	if((key=ftok("messagefile.txt",5))==-1){
		perror("Key");
		exit(1);
	}

	if((msgid=msgget(key,0664|IPC_CREAT))==-1){
		perror("msgid");
		exit(1);
	}
	while(1)
	{
		if(msgrcv(msgid,&rcvmsg,sizeof(rcvmsg),1,0)==-1)
		{
			perror("msgrcv");
			exit(1);
		}
		printf(" data recevied : %s \n",rcvmsg.msgtext);
	}
}

int main(void)
{
	struct msgbuff sendmsg;
	int msgid;
	key_t key;

	pthread_t t1;

	if((key=ftok("messagefile.txt",5))==-1){
		perror("Key");
		exit(1);
	}

	if((msgid=msgget(key,0664|IPC_CREAT))==-1){
		perror("msgid");
		exit(1);
	}

	sendmsg.mtype=1;

	pthread_create(&t1,NULL,readmsg,NULL);

	while(1)
	{	
		sprintf(sendmsg.msgtext, "Hello");
		msgsnd(msgid,&sendmsg,sizeof(sendmsg),0);
		sleep(5);
	}

	return 0;
}
