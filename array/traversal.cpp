#include<iostream>
#include<conio.h>

using namespace std;
//program for traversal in an array -- it involes processing of all array elements
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
	cout<<"Double of all array elements are: \n";
	for(int i=0;i<n;i++)
	{
		arr[i]= arr[i]*2;
		cout<<arr[i]<<"\n";
	}
}
