#include<iostream>
using namespace std;
void merge(int arr[],int l,int m,int h)
{
	int temp[h+1];
	int i=l;
	int j=m+1;
	int k=l;	
	while(i<=m && j<=h)
	{
		if(arr[i]<arr[j])
		{
			temp[k++]=arr[i++];
		}
		else
		{
			temp[k++]=arr[j++];
		}
	}
	
	while(i<=m)
	{
		temp[k++]=arr[i++];
	}
	while(j<=h)
	{
		temp[k++]=arr[j++];
	}
	
	for(i=l;i<=h;i++)
	{
		arr[i]=temp[i];
	}
}
void mergeSort(int arr[],int l,int r)
{
	if(l<r)
	{
		int m=(l+r)/2;
		mergeSort(arr,l,m);
		mergeSort(arr,m+1,r);
		merge(arr,l,m,r);
	}
}
bool checkDuplicates(int arr[],int n)
{
	for(int i=0;i<n-1;i++)
	{
		if(arr[i]==arr[i+1])
		{
			return true;
		}
	}
	return false;
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
			
		mergeSort(arr,0,n-1);	
		
		if(checkDuplicates(arr,n))
		{
			cout<<"YES\n";
		}
		else
		{
			cout<<"NO\n";
		}
	}
	return 0;
}
