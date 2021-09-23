#include<iostream>
#include<math.h>
using namespace std;
void jumpSearch(int arr[],int n,int key)
{
	float jump=sqrt(n);
	int steps=jump;
	int prev=0;
	int comp=0;
	while(arr[int(min(steps,n)-1)]<key)
	{					
		comp++;
		prev=steps;
		steps+=jump;
		if(prev>=n)
		{
			cout<<"NOT PRESENT "<<comp<<endl;
			return;
		}
	}
	
	while(arr[int(prev)]<key)
	{
		comp++;
		prev+=1;
		if(prev==min(steps,n))
		{
			cout<<"NOT PRESENT "<<comp<<endl;
			return;
		}
	}
	
	if(arr[int(prev)]==key)
	{
		comp++;
		cout<<"PRESENT "<<comp<<endl;
		return;
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
		
		jumpSearch(arr,n,key);
	}
}
