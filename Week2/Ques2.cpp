#include<iostream>
using namespace std;
int find(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
	    	for(int k=j+1;k<n;k++)
			{
				if(arr[i]+arr[j]==arr[k])
				{
	     			cout<<i+1<<","<<j+1<<","<<k+1<<endl;	
					 return 0;		
			    }
			}
		}
	}
	
	cout<<"No sequence found"<<endl;
}
int main()
{
	int t;
	cout<<"Enter number of test cases : ";
	cin>>t;
	
	int n;
	
	while(t--)
	{
		cout<<"Enter the size of the array : ";
		cin>>n;
		
		int arr[n];
		cout<<"Enter the elements of array : ";
		for(int i=0;i<n;i++)
			cin>>arr[i];
			
		find(arr,n);
	}
	
	return 0;
}
