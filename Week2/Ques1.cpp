#include<iostream>
using namespace std;
int binarySearch(int arr[],int n,int key,int oc)
{
	int l=0;
	int r=n-1;
	int mid;
	while(l<=r)
	{
		mid=l+(r-l)/2;
		
		if(arr[mid]==key)
		{
			if(oc==0)
			{
				if(mid==0 || arr[mid-1]<key)
				{
					oc=1;
					return mid;
				}
				else
				    r=mid-1;
			}
			else
			{
				if(mid==n-1 || arr[mid+1]>key)
				{
					return mid;
				}
				else
				{
					l=mid+1;
				}
			}
		}
	
		else if(arr[mid]<key)
		l=mid+1;
		
		else 
		r=mid-1;
	}
	return -1;
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
			
		int key;
		cout<<"Enter the key to be found : ";
		cin>>key;
		
		int x=binarySearch(arr,n,key,0);
		
		if(x>=0)
		{
			int y=binarySearch(arr,n,key,1);
			cout<<key<<" - "<<y-x+1<<endl;
		}
		else
		{
			cout<<"Key Not Found"<<endl;
		}
	}
	
	return 0;
}
