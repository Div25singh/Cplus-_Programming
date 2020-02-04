#include<iostream>
#include<conio.h>
int small(int [], int); 
//selection sort
using namespace std;
int main()
{	int temp;
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

for(int i=1; i<n;i++)  // there will be n iterations
{
	for(int j=0; j<(n-i); j++)  
	{
		if(arr[j]>arr[j+1])   			//check the adjoining values, if true them swap them
		{
			temp=arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=temp;
		}
	}
}
cout<<"the sorted list is :";
for(int i=0; i<n;i++)
{
	cout<<arr[i];
}
}

