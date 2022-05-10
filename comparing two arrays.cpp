  #include<iostream>
  using namespace std;
  int main()
  {
 int A[11] = {1,3,2,4,5}, B[11]= {4,3,2,5,1}, N=5;
  
  int temp;
        for(int i=0;i<N;i++)
	{		
		for(int j=i+1;j<N;j++)
		{
			if(A[i]>A[j])
			{
				temp  =A[i];
				A[i]=A[j];
				A[j]=temp;
			}
		}
	} 
	for(int l=0;l<N;l++)
	{
		cout<<A[l];
	}
	     for(int i=0;i<N;i++)
	{		
		for(int j=i+1;j<N;j++)
		{
			if(B[i]>B[j])
			{
				temp  =B[i];
				B[i]=B[j];
				B[j]=temp;
			}
		}
	} 
 	for(int l=0;l<N;l++)
	{
		cout<<B[l];
	}
	

	  /*  if(A==B)
	    {
	        cout<<1;
	    }
	    else
	    {
	        cout<<0;
	    }*/
    }
