#include<iostream>
#include<conio.h>
#include<process.h>

using namespace std;

int findpos(int [],int,int);
int i;
int main()
{
	int arr[50],item,n,index;
	
	cout<<"enter the size of the array - ";
	cin>>n;
	
	cout<<"enter array elements \n";
	for(i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	cout<<"the array elements are: \n";
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<"\n";
	}
	char ch='y';
	while(ch=='y' || ch=='Y')
	{
		cout<<" enter element to be inserted ";
		cin>>item;
	
		if(n==50)
		{
			cout<<"overflow";
			exit(1);
		}
		index= findpos(arr,n,item);

		for(i=n+1 ; i>index ;i--)
		{
			arr[i]=arr[i-1];
		}
			arr[index]=item;
			n=n+1;
			cout<<"want to insert more press y";
			cin>>ch;	
		}
	
	cout<<"the new array is";

	for(i=0; i<n;i++)
	{
		cout<<arr[i];
		cout<<endl;
			
	}
	return 0;
}
	int findpos(int arr[], int size, int item)
	{ int pos,i;
		if(item<arr[0])
		{
			pos=0;
		}
		else
		{
			for(i=0;i<size-1;i++)
			{
				if(arr[i]<=item && item<arr[i+1])
				{
					pos=i+1;
					break;
				}
			}
			if(i==size-1)
			{
				pos=size;
			}
			
		}
		return pos;
	}
