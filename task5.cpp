#include<iostream>
using namespace std;
int digitSum(int);
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << digitSum(n);
}
int digitSum(int n)
{
    int sum = 0;
    int s;
    while(n > 0)
    {
        s = n % 10;
        sum = s + sum;
        n = n / 10;
    }
    return sum;
}