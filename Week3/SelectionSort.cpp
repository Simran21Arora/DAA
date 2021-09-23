#include<iostream>
using namespace std;
void selectionSort(int arr[],int n)
{
	int i,min_ind,j,min_element,temp;
	int c=0,s=0;
	
	for(int i=0;i<n;i++)
	{
		min_element=arr[i];
		min_ind=i;
		for(j=i+1;j<n;j++)
		{
			if(arr[j]<min_element)
			{

				min_ind=j;
				min_element=arr[j];
			}
			c++;
		}
		s++;
		temp=arr[i];
		arr[i]=arr[min_ind];
		arr[min_ind]=temp;
	}
	
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<"\nComparisons : "<<c;
	cout<<"\nSwaps : "<<s<<endl;
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
			
		selectionSort(arr,n);		
	}
	return 0;
}
