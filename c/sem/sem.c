#include<stdio.h>
#include<pthread.h>
#include<stdlib.h>
#include<semaphore.h>

static int glob_var1=0, glob_var2=0;
sem_t sem;

static void *func(void *arg)
{
	printf("Thread %s is started\n",(char*)arg);
	int loop_lim1=10000, loop_lim2=10000, sval;

sem_getvalue(&sem , &sval );
   printf("\n before sem_wait semaphore value = (%d)\n",sval);

	sem_wait(&sem);
	for(int i=0;i<loop_lim1;i++)
	{
		int local_var=glob_var1;
		glob_var1=++local_var;
	}

sem_getvalue(&sem , &sval );
   printf("\n after sem_wait semaphore value = (%d)\n",sval);

	sem_post(&sem);

	printf("Thread %s is ended\n",(char*)arg);
	return NULL;
}

int main()
{
	pthread_t t1,t2,t3;
	pthread_create(&t1, NULL, func, "1");
	pthread_create(&t2, NULL, func, "2");
	pthread_create(&t3, NULL, func, "3");
	if(sem_init(&sem, 0, 2) ==-1)
	{
		perror("Error during sem_init");
		exit(1);
	}
	pthread_join(t1, NULL);
	pthread_join(t2, NULL);
	pthread_join(t3, NULL);
	sem_destroy(&sem);
	printf("%d\n",glob_var1);
	printf("%d\n",glob_var2);
}
