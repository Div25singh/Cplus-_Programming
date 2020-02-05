#include<iostream>
#include<conio.h>
#include<limits.h>

using namespace std;

int main()
{
	int arr1[50],n;
	int arr2[50],m;
	
	cout<<"enter the lenght of the array 1: \n";
	cin>>n;
	
	cout<<"enter the array: \n";
	for(int i=0; i<n ; i++)
	{
		cin>>arr1[i];
	}
	cout<<"The array is: \n";
	for(int i=0; i<n ;i++)
	{
		cout<<arr1[i]<<"\n";
	}
	cout<<"enter the lenght of the array 2: \n";
	cin>>m;
	
	cout<<"enter the array: \n";
	for(int i=0; i<m ; i++)
	{
		cin>>arr2[i];
	}
	cout<<"The array is: \n";
	for(int i=0; i<m ;i++)
	{
		cout<<arr2[i]<<"\n";
	}
	int merge[100];
	for(int i=0; i<n ; i++)
	{
		merge[i]=arr1[i];
	}
	int size;
	size=m+n;
	
	cout<<"THE MERGED ARRAY IS: ";
	for(int j=n, i=0 ; j<size & i<m ;i++,j++)
	{
		merge[j]=arr2[i];
	}
	for(int i=0; i<size ; i++)
	{
		cout<<merge[i]<<" ";
	}

}
