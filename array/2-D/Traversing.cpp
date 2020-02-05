#include<iostream>
#include<conio.h>

using namespace std;

int main()
{	
	int n ,m;
	int arr[100][100];

	cout<<"enter the array lenght column-wise - ";
	cin>>n;
	cout<<"enter the array lenght row-wise - ";
	cin>>m;
	
	for(int i=0; i<n ; i++)
	{	
		for(int j=0 ; j<m ;j++)
		{
			cin>>arr[i][j];
		}
	}
	cout<<"the array is - \n ";
	for(int i=0; i<n ; i++)
	{	cout<<"\n";
		for(int j=0 ; j<m ;j++)
		{
			cout<<" "<<arr[i][j] *2 ; //multiply by 2
		}
	}
}
