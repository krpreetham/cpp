#include<iostream>
#include<stdlib.h>

using namespace std;

int cal(int no_of_racers,int position[][2])
{
  int *arr = (int *)malloc(sizeof(int)*100);
	int max=0;
	for(int i=0;i<no_of_racers;i++)
	{
		int starting_position=position[i][0];
		int ending_position=position[i][1];
		for(int j=starting_position;j<ending_position;j++)
		{
			arr[j]=arr[j]+1;
			if(arr[j]>max)
			{
				max=arr[j];
			}
		}
	}
	return max;
}

int main()
{
	int no_of_racers=4,position[no_of_racers][2]={{1,3},{2,3},{2,4},{3,5}};
	cout<<cal(no_of_racers,position)<<endl;
	return 0;
}
