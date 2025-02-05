//  5 4 3 2 1
//  4 3 2 1
//  3 2 1
//  2 1
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
		
		cout<<" ";
	}
	
		for(int j=i;j>=1;j--)
	{
		cout<<j<<" ";
	}
	cout<<endl;
}
return 0;
}