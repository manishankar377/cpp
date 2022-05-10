#include<iostream>
using namespace std; //this is code for all elements in arr are less than 10
int main()
{
	
	int n=5, arr[] = {11,12,13,14,15}, k=3, b[10],c;
	if(arr[0]<10)
	{
	for(int i=k-1;i>=0;i--)	
	{
		c=c+arr[i];
		c=c*10;	
	}

	for(int j=n-1;j>=k;j--)
	{
		c=c+arr[j];
		c=c*10;
	}
	c=c/10;
	
	for(int l=n-1;l>=0;l--)
	{
		arr[l]=c%10;
		c=c/10;
	//	cout<<arr[l];
	}
	for(int m=0;m<n;m++)
	{
		cout<<arr[m];
	}
}
else
{
		for(int i=k-1;i>=0;i--)	
	{
		c=c+arr[i];
		c=c*100;	
	}
	

/*	for(int j=n-1;j>=k;j--)
	{
		c=c+arr[j];
		c=c*100;
	}*/
//	c=c/10;
	cout<<c;
	/*for(int l=n-1;l>=0;l--)
	{
		arr[l]=c%100;
		c=c/100;
	//	cout<<arr[l];
	}
	for(int m=0;m<n;m++)
	{
		cout<<arr[m];
	}*/
}
	
	

	
}
