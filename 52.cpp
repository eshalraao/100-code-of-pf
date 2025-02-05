// 5
// 9 4
// 12 8 3
// 14 11 7 2
// 15 13 10 6 1









#include<iostream>
using namespace std;
int main(){
	int n=5;
	int x=n,y,t;
	for(int i=n; i>=1;i--)
	{
		t=x;
		y=i+1;
		for(int j=n;j>=i;j--)
		
			{
				cout<<t<<" ";
				t=t-y;
				y++;
				
			}
			x=x+i-1;
		cout<<endl;
	}
	return 0;
}