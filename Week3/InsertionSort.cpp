#include<iostream>
using namespace std;
void insertionSort(int arr[],int n)
{
	int i,j,key;
	int c=0,s=0;
	
	for(i=1;i<n;i++)
	{
		key=arr[i];
		j=i-1;
		while(j>=0 && arr[j]>key)
		{
			arr[j+1]=arr[j];
			c++;
			s++;
			j--;
		}
		arr[j+1]=key;
		s++;
	}
	
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<"\nComparisons : "<<c;
	cout<<"\nShifts : "<<s<<endl;
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
			
		insertionSort(arr,n);		
	}
	return 0;
}
