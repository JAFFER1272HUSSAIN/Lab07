#include<iostream>
using namespace std;
void printTable(int);
int main()
{
    
    int a;
    cout << "Enter a number to print its table: ";
    cin >> a;
    printTable(a);

}
void printTable(int a)
{
    
    for (int n = 1; n <= 10; n++)
    {
        
        cout << a <<  " * " << n << " = " << a * n <<endl;
    }

}