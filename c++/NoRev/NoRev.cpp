#include<iostream>
//#include<bits/stdc++.h>

using namespace std;

int revNo(int num){
	int newNo=0;
	while(num!=0){
		int n=num%10;
		newNo=(newNo*10)+n;
		num=num/10;
	}
	return newNo;
}

int main(){
	int num;
	cout<<"Enter a number"<<endl;
	cin>>num;
	int newNo=revNo(num);
	cout<<newNo<<endl;
	return 0;
}

