//    E D C B A
//    D C B A
//    C B A
//    B A
//   A

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
		cout<<char(j+65)<<" ";
	}
	cout<<endl;
}
return 0;
}