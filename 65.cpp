// 1
// 3 2 1
// 5 4 3 2 1
// 7 6 5 4 3 2 1
// 9 8 7 6 5 4 3 2 1

#include<iostream>
using namespace std;
int main (){
	int z=1;
	for(int i=0;i<5;i++)
	{
		for(int j=4;j>i;j--)
		{
		
		cout<<" ";
	}
	
		for(int k=z;k>=1;k--)
	{
		cout<<k;
	}
	z+=2;
	cout<<endl;
}
return 0;
}