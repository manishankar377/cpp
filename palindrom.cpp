#include<iostream>
using namespace std;
int main()
{
	int x=121, a=0,y=1,n=0;
	int z=121;
	while(x>0)
	{
		a=a+x%10;
		x=x/10;
		a=a*10;
	}
	a=a/10;
	if(a!=z)
	{
	//	return n;
	cout<<"no";
	}
	else
	{
	cout<<"yes";
	}
	//cout<<a;
}
