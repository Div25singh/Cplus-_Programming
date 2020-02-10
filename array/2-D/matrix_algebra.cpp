#include<iostream>
#include<conio.h>
using namespace std;
// matrix addition,sub,multi
int main()
{
	int arr1[100][100];
	int n,m;
	int arr2[100][100];
	int x,y;
	int arr3[100][100];
	int arr4[100][100];
	int arr5[100][100];
	cout<<"enter the row size for matrix 1 \n";
	cin>>n;
	cout<<"enter the column size for matrix 1 \n";
	cin>>m;
	cout<<"enter the values for matrix 1 \n";
	for(int i=0; i<n ;i++)
	{
		for(int j=0; j<m;j++)
		{
			cin>>arr1[i][j];
		}
	}
	
	cout<<"enter the row size for matrix 2 \n";
	cin>>x;
	cout<<"enter the column size for matrix 2 \n";
	cin>>y;
	cout<<"enter the values for matrix 2 \n";
	for(int i=0; i<x ;i++)
	{
		for(int j=0; j<y ;j++)
		{
			cin>>arr2[i][j];
		}
	}
	
	for(int i=0; i<n;i++)
	{
		for(int j=0; j<n ;j++)
		{
			arr3[i][j]=arr1[i][j]+arr2[i][j];
		}
	}
	for(int i=0; i<n;i++)
	{
		for(int j=0; j<n ;j++)
		{
			arr4[i][j]=arr1[i][j]-arr2[i][j];
		}
	}
	
		cout<<" matrix 1 is- ";
	for(int i=0; i<n ;i++)
	{	cout<<"\n";
		for(int j=0; j<m;j++)
		{
			cout<<arr1[i][j];
		}
	}
	cout<<"\n";
	
	
		cout<<" matrix 2 is- ";
	for(int i=0; i<x ;i++)
	{	cout<<"\n";
		for(int j=0; j<y;j++)
		{
			cout<<arr2[i][j];
		}
	}
		cout<<"\n";
		
		if((n==x) && (m==y))
		{
		
	cout<<"the addition of matrix is :\n";

	for(int i=0; i<n ;i++)
	{	cout<<"\n";
		for(int j=0; j<m ;j++)
		{
			cout<<arr3[i][j];
		}
	}	
		cout<<"the subtraction of matrix is :\n";

	for(int i=0; i<n ;i++)
	{	cout<<"\n";
		for(int j=0; j<m ;j++)
		{
			cout<<arr4[i][j];
		}
	}
}
else
cout<<"matrix cannot be added";

if(m==x){
	cout<<"matrix can be multiplied";
	for(int i=0; i<n;i++)
	{
		for(int j=0; j<n ;j++)
		{
			arr5[i][j]=arr1[i][j]*arr2[i][j];
		}
	}
	cout<<"the multiplication of matrix is :\n";

	for(int i=0; i<n ;i++)
	{	cout<<"\n";
		for(int j=0; j<m ;j++)
		{
			cout<<arr5[i][j];
		}
	}	
}
else
cout<<"matix cannot be multiplied";
	
}
