#include<iostream>
using namespace std;
int comp=0,inv=0;
void merge(int arr[],int l,int m,int h)
{
	int temp[h+1];
	int i=l;
	int j=m+1;
	int k=l;	
	while(i<=m && j<=h)
	{
		comp++;
		if(arr[i]<arr[j])
		{
			temp[k++]=arr[i++];
		}
		else
		{
			temp[k++]=arr[j++];
			inv+=m+1-i;
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
		
    	for(int i=0;i<n;i++)
     	{
    		cout<<arr[i]<<" ";
    	}
    	
    	cout<<"\nComparison : "<<comp;
    	cout<<"\nInversions : "<<inv<<endl;
    	
    	comp=0;
    	inv=0;
	}
	return 0;
}
