#include<iostream>
#include<conio.h>

using namespace std;

int lsrc(int [],int ,int);
int main()
{
	int arr[50],count=0,n;
	cout<<"enter the size of the array \t";
	cin>>n;
	cout<<"enter the elements of the array \n";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"the array is \n";
	for(int i=0; i<n ; i++)
	{
		cout<<arr[i]<<"\n";
	}
	int x, flag=0;
	
	cout<<"enter the element to be deleted- ";
	cin>>x;
	for(int i=0; i<n;i++)
	{
		if(arr[i]==x)
		{
			for(int j=i ; j<(n-1);j++)//shift up 
			{ 
				arr[j]=arr[j+1];
			}
			count++;
			break;
			
		}	
	}
	if(count==0)
	{
		cout<<"element not found \n";
		}	
		else{
			cout<<"element deleted \n";
			cout<<"the array is \n";
			for(int i=0;i<(n-1);i++)
			{
				cout<<arr[i]<<"\n";
			}
		}
	
}
