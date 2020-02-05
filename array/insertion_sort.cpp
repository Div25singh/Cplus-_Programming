#include<iostream>
#include<conio.h>
#include<limits.h>

using namespace std;

int main()
{
	int arr[50],n;
	arr[0]=INT_MIN;
	
	cout<<"enter the lenght of the array";
	cin>>n;
	
	cout<<"enter the array";
	for(int i=0; i<n ; i++)
	{
		cin>>arr[i];
	}
	cout<<"The array is";
	for(int i=0; i<n ;i++)
	{
		cout<<arr[i];
	}
	for(int i=1; i<=(n-1); i++)               //iteration starting from i=1 as 0 is int_min
	{
		int temp=arr[i];                        
		int j=i-1;
		
		while((temp<arr[j]) && (j>=0))
		{
			arr[j+1]=arr[j];
			j=j-1;							//move element forward										
		}										//end of inner loop
		arr[j+1]=temp;
	}												//end of outer loop
	cout<<"the sorted array is \n";
	for(int i=0; i<n ; i++)
	{
		cout<<arr[i]<<"\n";
	}
	
}
