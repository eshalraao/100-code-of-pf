// 1
// 1 2 3
// 1 2 3 4 5 
// 1 2 3 4 5 6 7
// 1 2 3 4 5 6 7 8 9

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
	
		for(int k=1;k<z;k++)
	{
		cout<<k;
	}
	z+=2;
	cout<<endl;
}
return 0;
}