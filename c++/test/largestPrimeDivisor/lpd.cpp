#include<iostream>

using namespace std;

int isPrime(int n)
{
	int i,flag=0;
  for(i = 2; i <= n/2; i++)  
  {  
      if(n % i == 0)  
      {   
          flag=1; 
					return 0; 
      }  
  }  
  if (flag==0)  
      return 1;  
  return 0;  
}

int cal(int n)
{
	int i;
	for(i=n/2;i>=2;i--)
	{
		if((n%i==0)&&isPrime(i))
		{
			return i;
		}
	}
	return n;
}

int main()
{
	cout<<"Enter a number to get Largest Prime Divisor :";
	int n;
	cin>>n;
	cout<<endl<<cal(n)<<endl;
}
