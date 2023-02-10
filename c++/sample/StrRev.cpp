#include<iostream>
#include<bits/stdc++.h>

using  namespace std;

vector<string> reverseWord(string s){
	vector<string> str;
	string tmp="";
	for(int i=0;i<s.length();i++){
		if(s[i]==' '){
			str.push_back(tmp);
			tmp="";
		}
		else{
			tmp=tmp+s[i];
		}
	}
	str.push_back(tmp);
	for(int i=str.size()-1;i>=0;i--){
		cout<<str[i]<<" ";
	}
	cout<<endl;
	return str;
}

int main(){
	string s="My name is Preetham";
	vector<string> str=reverseWord(s);
	for(int i=str.size()-1;i>=0;i--){
		cout<<str[i]<<" ";
	}
	cout<<endl;
	return 0;
}
