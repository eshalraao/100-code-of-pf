//5
//5 4
//5 4 3
//5 4 3 2
//5 4 3 2 1
#include<iostream>
using namespace std;
int main(){
	int n=5;
	for(int i=n;i>=1;i--)
	{
	for(int j=n;j>=i;j--)
	{
	cout<<j<<" ";
}
cout<<endl;
}
return 0;

	
	
	
}