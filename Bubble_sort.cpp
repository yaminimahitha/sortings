#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,swapped;
	int arr[n];
	cout<<"Enter number of elements"<<endl;
	cin>>n;
	cout<<"Enter the elements"<<endl;
	//Reading elements in the array
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	//bubble sort
	for(int i=0;i<n;i++)
	{
		swapped=0;
		for(int j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
					swapped=1;
			//for swapping the values swap function is using
			swap(arr[j],arr[j+1]);
		   }
		}
		if(swapped!=1)
		{
		break;
    	}	
	}
	cout<<"After sorted in order"<<endl;
		for(int i=0;i<n;i++)
		{
			cout<<arr[i]<<" ";
		}   
	return 0;
}
