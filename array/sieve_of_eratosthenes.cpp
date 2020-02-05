#include <iostream>
#include<math.h>
//find prime by-
// sieve of eratosthenes

using namespace std;
int main()
{
    bool A[100];
    int n;
    cout << "Enter a number: " << endl;
    cin >> n;

    for(int i = 1; i < n; i++)
        A[i] = true;     						//first let each no is prime

    for(int i = 2; i < sqrt(n); i++) 			//then start from 2 and traverse until underroot of number
    {
        if (A[i] == true)						//for every no. until it is not marked out	
        {
            for (int j = i * i; j < n; j+= i)		// traverse j=i*i to n -------> as cut down 2*2 , 3*3 , 4*4 
            {
                A[j] = false;					//and make them false until n is not reached
            }
        }
    }
    
    cout << "The prime numbers below " << n << " are: " << endl;
    
    for(int i = 2; i <n; i++)
    {
        if (A[i] == true) 		//then print all the true values left
        {
            cout << i << " ";
        }
    }

    cout << endl;
    
    return 0;
    
}
