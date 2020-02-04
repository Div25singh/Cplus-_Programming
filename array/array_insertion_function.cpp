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
		index= findpos(arr,n,item); //n=no of elements , arr = array , item= inserted item

		for(i=n+1 ; i>index ;i--) // n+1 because of insertion
		{
			arr[i]=arr[i-1];  // shift elements to create room for new elements
		}
			arr[index]=item;  // item inserted
			n=n+1;  //number of updated elements
			cout<<"want to insert more press (y/n)";
			cin>>ch;	
		}
	
	cout<<"the new array is \n";

	for(i=0; i<n;i++)
	{
		cout<<arr[i];
		cout<<endl;
			
	}
	
	return 0;
}
	int findpos(int arr[], int size, int item) //function to determine the position for new element
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
