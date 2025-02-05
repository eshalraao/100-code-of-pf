// 5
// 4 4 4
// 3 3 3 3 3
// 2 2 2 2 2 2 2
// 1 1 1 1 1 1 1 1 1

#include<iostream>
using namespace std;
int main (){
	int n=5;
	int z=1;
	for(int i=n;i>=1;i--)
	{
		for(int j=1;j<i;j++)
		{
		
		cout<<" ";
	}
	
		for(int k=1;k<=1;k++)
	{
		cout<<i<<" ";
	}
	z+=2;
	cout<<endl;
}
return 0;
}