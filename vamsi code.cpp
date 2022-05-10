#include<iostream>
using namespace std;
int main()
{
	int a[5];
	int total=0;
	int armour = 5,p;
	int n = 4; //sizeof(a)/sizeof(a[0]);
	
	cout<<"enter array numbers :";
	for(int j=0;j<n;j++)
	{
		cin>>a[j];
	}
	
	for(int k=1;k<n;k++)
	{
		if(a[0]<a[k])
		{
		//	int temp;
			a[0]=a[0]+a[k];
			a[k]= a[0]-a[k];
			a[0]= a[0]-a[k];
			p = k;
		}
	}
	
	
	for(int i=0;i<n;i++)
	{
		total = total +a[i];
	}
	cout<<"maxium number is: "<<a[0]<<"\n";
	cout<<"place is: " <<p+1<<"\n";
	cout<<total-armour+1;
//	cout<<a[4];
}
