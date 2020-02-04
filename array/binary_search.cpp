#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	int arr[10],size,x;
	
	cout<<"enter the no of array elements";
	cin>>size;
	
	cout<<"enter the array elements";
	for(int i=0; i<size ; i++)
	{
		cin>>arr[i];
	}
	cout<<"the array is ";
	for(int i=0 ; i<size ;i++)
	{
		cout<<arr[i];
	}
	//performing binary search 
	int beg=0;
	int last=size-1;
	int mid;
	cout<<"enter element to find";
	cin>>x;
	
	int flag=0;
	while(beg<=last)
	{
		mid=(beg+last)/2;
		if(arr[mid]==x)
		{
			flag=1;
			break;
		}
		else if(x>arr[mid])
		{
			beg=mid+1;
		}
		else
		{
			last=last-1;
		}
	}
	if(flag!=0)
	{
		cout<<"element found";
	}
	else
	{
		cout<<"element not found";
	}
}
