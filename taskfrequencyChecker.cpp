#include<iostream>
using namespace std;
int frequencyChecker(int,int);
int main()
{
    int number,digit;
    cout << "Enter Number: ";
    cin >> number;
    cout << "Enter Digits: ";
    cin >> digit;
    cout << frequencyChecker(number,digit);
}
int frequencyChecker(int n,int d)
{
    int counter,c,s;
    counter = 0;
    while(true)
    {
        c = n % 10;
        s = n / 10;
        n = s;
        if(c == d) 
        {
            counter++;
        }
        else if(s == 0)
        {
            return 0;
        }
    }
    return counter;
}