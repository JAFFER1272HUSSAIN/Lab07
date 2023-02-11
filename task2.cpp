#include<iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter  a number to print Fibonacci series upto that number: ";
    cin >> a;
    int n;
    int c = 1;
    int p = 0;
    cout << p << endl << c << endl;
    for (int count = 1; count <= a - 2; count++)
    {   
        n = p + c;
        cout << n << endl;
        p = c;
        c = n; 
    }
}