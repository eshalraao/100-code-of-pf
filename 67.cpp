// 5
// 4 5 6
// 3 4 5 6 7
// 2 3 4 5 6 7 8
// 1 2 3 4 5 6 7 8 9

#include<iostream>
using namespace std;
int main (){
	int n=5;
	int z=1;
	int i,j,k;
	for(int i=n;i>=1;i--)
	{
		for(int j=1;j<i;j++)
		{
		
		cout<<" ";
	}
	
		for(int k=0;k<z;k++)
	{
		cout<<(k+j)<<" ";
	}
	z+=2;
	cout<<endl;
}
return 0;
}