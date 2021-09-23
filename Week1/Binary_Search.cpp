#include<iostream>
using namespace std;
void binarySearch(int arr[],int n,int key)
{
	int comp=0;
	int l=0;
	int r=n-1;
	int mid;
	while(l<=r)
	{
		comp++;
		mid=l+(r-l)/2;
		
		if(arr[mid]==key)
		{
	    	cout<<"PRESENT "<<comp<<endl;
	    	return;
		}
		
		else if(arr[mid]<key)
		l=mid+1;
		
		else 
		r=mid-1;
	}
	cout<<"NOT PRESENT "<<comp<<endl;
	return;
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
		
		binarySearch(arr,n,key);
	}
}
