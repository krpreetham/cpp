#include<iostream>
#include<cstdlib>
#include<bits/stdc++.h>

using namespace std;

class Solution {
   public:
   int dp[505][505];
   int solve(int idx, int time, vector <int>& v)
	 {
      if(idx == v.size()) 
				return 0;
      if(dp[idx][time] != -1)
				return dp[idx][time];
      int ret = INT_MIN;
      ret = max(solve(idx + 1, time, v), v[idx] * time + solve(idx + 1, time + 1, v));
      return dp[idx][time] = ret;
   }
   int maxSatisfaction(vector<int>& v) 
	 {
      memset(dp, -1, sizeof(dp));
      sort(v.begin(), v.end());
      return solve(0, 1, v);
   }
};

int main(){
   Solution ob;
	 int arr[5]={-1,-6,0,6,-7};
   int n = sizeof(arr) / sizeof(arr[0]);
   vector<int> v(arr, arr + n);
   cout << (ob.maxSatisfaction(v))<<endl;
	 return 0;
}




/*int cal(int n,int a[])
{
	int sum=1*a[0],c=2,sum1=0,c1=1;
	for(int i=0;i<n;i++)
	{
		if(a[i]>=0)
		{
			sum1=sum1+(c1*a[i]);
			c1++;
		}
		if((a[i]>=0)&&(i>0))
		{
			sum=sum+(c*a[i]);
			c++;
		}
		
	}
	if(sum>=sum1)
		return sum;
	else
		return sum1; 
}

int cal1(int n,int *dishes)
{
	int total_like_to_time = 0;
    for (int i = 0; i<n; ++i)
    {
        dishes[i] = n;
        int like_to_time = n * i;
        total_like_to_time += like_to_time;
    }
		return total_like_to_time;
}

int main()
{
	int n=7;
	int a[n]={-1,-1,10,5,0,1,-6};
	cout<<cal(n,a)<<endl;
	return 0;
}*/
