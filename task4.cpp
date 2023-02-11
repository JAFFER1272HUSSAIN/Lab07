#include<iostream>
using namespace std;
int frequencyChecker(int,int);
int main()
{
    int a,b;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    cout << frequencyChecker(a,b);
}
int frequencyChecker(int n,int d)
{
    int c;
    int count = 0;
    while(n > 0)
    {
        c = n % 10;
        if(c == d)
        {
            count = count + 1;
            return count;
        } 
        n = n / 10;
    }
    return 0;
}