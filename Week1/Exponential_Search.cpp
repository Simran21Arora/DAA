#include<iostream>
using namespace std;
void linearSearch(int arr[],int i,int n,int key,int comp)
{
	int j;
	for(j=i;j<n;j++)
	{
		comp++;
		if(arr[j]==key)
		{
			cout<<"PRESENT "<<comp<<endl;
			return;
		}
	}
	cout<<"NOT PRESENT "<<comp<<endl;
	return;
}
void exponentialSearch(int arr[],int n,int key)
{
	int comp=0;
	if(arr[0]==key)
	{
		comp++;
		cout<<"PRESENT "<<comp<<endl;
	}
	comp=1;
	
	int i=1;
	
	while(i<n && arr[i]<=key)
	{
		comp++;
		i=i*2;
	}
	
	linearSearch(arr,int(n/2),n,key,comp);
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
		
		exponentialSearch(arr,n,key);
	}
}
