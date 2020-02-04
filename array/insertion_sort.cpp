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

for(int i=0; i<n-1 ; i++)
{
	int temp=arr[i];
	int pos=i;
	
	for(int j=i+1 ;j<n;j++)
	{
		if(temp>arr[j])			//finding smallest in the array
		{
			temp=arr[j];
			pos=j;
		}
	}
	temp=arr[i];		// replacing smallest with the first in array
	arr[i]=arr[pos];
	arr[pos]=temp;
	
}
cout<<"the sorted list is :";
for(int i=0; i<n;i++)
{
	cout<<arr[i];
}
}

