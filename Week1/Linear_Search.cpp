#include<iostream>
using namespace std;
void linearSearch(int arr[],int n,int key)
{
	int i,comp=0;
	
	for(i=0;i<n;i++)
	{
		comp++;
		if(arr[i]==key)
		{
			cout<<"PRESENT "<<comp<<endl;
			return;
		}
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
		
		linearSearch(arr,n,key);
	}
}
