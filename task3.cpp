#include<iostream>
using namespace std;
int totalDigits(int);
int main()
{
    int a;
    cout << "Enter a number: ";
    cin >> a;
    int c;
    c = totalDigits(a);
    cout << c;
}
int totalDigits(int a)
{
    int c = 0;
    while(a > 0)
    {
        a = a / 10;
        c = c + 1; 
    }
    return c;
}
