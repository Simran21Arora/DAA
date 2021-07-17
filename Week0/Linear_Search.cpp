#include<iostream>
using namespace std;
int linearSearch(int arr[],int n,int key)
{
	int i,loc=-1,comp=0;
	
	for(i=0;i<n;i++)
	{
		comp++;
		if(arr[i]==key)
		{
			loc=i;
			break;
		}
	}
	cout<<"Total number of comparisons = "<<comp<<endl;
	return loc;
}
int main()
{
	int n,i,ans,t;
	cout<<"Enter number of test cases : ";
	cin>>t;
	
	while(t--)
	{
	cout<<"Enter the number of elements in array : ";
	cin>>n;
	int arr[n];
	
	int key;
	cout<<"Enter key to be found : ";
	cin>>key;
	
	cout<<"Enter elements of array : ";
	
	for(i=0;i<n;i++)
	cin>>arr[i];
	
	ans=linearSearch(arr,n,key);
	if(ans>=0)
		cout<<"Position of element is : "<<ans<<endl;
	else
		cout<<"Element not found"<<endl;
	}

}
