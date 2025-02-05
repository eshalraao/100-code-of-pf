//  5 5 5 5 5 
//  4 4 4 4
//  3 3 3
//  2 2
//  1

#include<iostream>
using namespace std;
int main (){
	int p_height=5;
	int i,j,k;
	for(int i=p_height;i>=1;i--)
	{
		for(int k=p_height;k>=1;k--)
		{
		
		cout<<"*";
	}
	
		for(int j=i;j>=1;j--)
	{
		cout<<i<<" ";
	}
	cout<<endl;
}
return 0;
}