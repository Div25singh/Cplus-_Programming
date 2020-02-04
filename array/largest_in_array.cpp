#include<iostream>
#include<conio.h>
int small(int [], int); 
//selection sort
using namespace std;
int main()
{
	int arr[50],n;
	cout<<"enter the size of array";
	cin>>n;
	cout<<"enter the array elements";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"the array is: \n";
	for(int i=0; i<n ; i++)
	{
		cout<<arr[i]<<"\n";
	}
	int x;
	cout<<"the largest element is - ";
	x= small(arr,n);
	cout<<x;
}

int small(int arr[], int n)
{
	int temp=arr[0];
	for(int i=0;i<n;i++)
	{
		if(temp<arr[i])
		{
			temp=arr[i];
		}
	}
	return temp;
}


