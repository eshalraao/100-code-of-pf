// 1
// 2 2 2
// 3 3 3 3 3 
// 4 4 4 4 4 4 4
// 5 5 5 5 5 5 5 5 5

#include<iostream>
using namespace std;
int main (){
	int n=5;
	int z=1;
	for(int i=0;i<n;i++)
	{
		for(int j=n-1;j>i;j++)
		{
		
		cout<<" ";
	}
	
		for(int k=0;k<z;j++)
	{
		cout<<z-1;
	}
	z+=2;
	cout<<endl;
}
return 0;
}