#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	int bsrc(int [],int,int);
	int size;
		cout<<"enter the size of array: ";
	cin>>size;
	int arr[size];
	int i; 
	for(i=0; i<size ;i++)
	{
		cout<<"enter element- "<<i+1<<"\n";
		cin>>arr[i];
	}
	cout<<"The elements are: \n";
	for(i=0 ;i<size;i++ )
	{
		cout<<"->"<<arr[i];
	}
	int item;
	cout<<"\n enter element to be searched for";
	cin>>item;
	int index;
	index=bsrc(arr,size,item);
	if(index== -1)
	{
		cout<<"element not found";
	}
	else 
	cout<<"element found at index - "<<index<<" "<<"position - "<<index+1;
	return 0;
}
	bsrc(int arr[],int size, int item)
	{
	int beg=0;
	int last=size-1;
	int mid; 
	
	
	while(beg<=last)
	{		mid=(beg+last)/2;
			if(item==arr[mid])
			{
			return mid;
			}
			else if(item>arr[mid])
			{
				beg=mid+1;
			}
			else
			{
				last=last-1;
			}
	}
	return -1;
}


