#include<iostream>

using namespace std;

void cal(int no_of_A,int no_of_B,int q,int arr[][3],int *result)
{
	int strength_A[no_of_A]={0};
	for(int i=0;i<q;i++)
	{
		if(arr[i][0]==1)
		{
			int fish_A=arr[i][1];
			int fish_B=arr[i][2];
			result[fish_B-1]=fish_A;
			strength_A[fish_A-1]++;
		}
		else
		{
			int fish_A1=arr[i][1];
			int fish_A2=arr[i][2];
			if(strength_A[fish_A1-1]>strength_A[fish_A2-1])
			{
				for(int k=0;k<no_of_B;k++)
				{
					if(result[k]==fish_A2)
					{
						result[k]=fish_A1;
					}
				}
				strength_A[fish_A1-1]=strength_A[fish_A1-1]+strength_A[fish_A2-1];
			}
		}
	}
}

int main()
{
	int no_of_A=3,no_of_B=6,q=7,arr[q][3]={{1,1,1},{1,1,2},{1,1,3},{1,2,4},{1,3,5},{1,2,6},{2,1,2}};
	int result[no_of_B]={-1};
	
	cal(no_of_A,no_of_B,q,arr,result);
	for(int i=0;i<no_of_B;i++)
	{
		cout<<result[i]<<" ";
	}
	cout<<endl;
	return 0;
}
