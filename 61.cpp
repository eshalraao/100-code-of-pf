//  A B C D E
//  A B C D
//  A B C
//  A B
//  A

#include<iostream>
using namespace std;
int main (){
	int i,j,k;
	for(int i=4;i>=0;i--)
	{
		for(int k=3;k>=1;k--)
		{
		
		cout<<" ";
	}
	
		for(int j=i;j>=0;j--)
	{
		cout<<char((i-j)+65)<<" ";
	}
	cout<<endl;
}
return 0;
}