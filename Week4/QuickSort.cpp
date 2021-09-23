#include<iostream>
using namespace std;
int comp=0,sw=0;
int partition(int arr[],int l,int r)
{
	int pivot=arr[r];
	int i,j,temp;
	
	i=l-1;
	for(j=l;j<=r-1;j++)
	{
		comp++;
		if(arr[j]<pivot)
		{
			sw++;
			i++;
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
		}
	}
	sw++;
	temp=arr[i+1];
	arr[i+1]=arr[r];
	arr[r]=temp;
	return i+1;
}
void quickSort(int arr[],int l,int r)
{
	int p;
	if(l<r)
	{
	    p=partition(arr,l,r);
    	quickSort(arr,l,p-1);
    	quickSort(arr,p+1,r);
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
			
		quickSort(arr,0,n-1);	
		
    	for(int i=0;i<n;i++)
     	{
    		cout<<arr[i]<<" ";
    	}
    	
    	cout<<"\nComparison : "<<comp;
    	cout<<"\nSwaps : "<<sw<<endl;
    	
    	comp=0;
    	sw=0;
	}
	return 0;
}
