#include<iostream>
#include<math.h>
using namespace std;
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
		cout<<"Enter the difference: ";
		cin>>key;
		
		int count=0;
		
		for(int i=0;i<n;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				if(abs(arr[i]-arr[j])==key)
				count++;
			}
		}
		
		cout<<count<<endl;
	}
	
	return 0;
}
