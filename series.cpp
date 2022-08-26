#include <iostream>
#include <cmath>
using namespace std;
bool isPrime(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

void fib(int n)
{
    int t1 = 0, t2 = 1, nextTerm = 0;
    for (int i = 0; i < n; i++)
    {
        cout << t1 << " ";
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
}

int factorial(int n)
{
    int factorial = 1;
    for (int i = 2; i <= n; i++)
    {
        factorial *= i;
    }
    return factorial;
}

int main()
{
    /* Prime Number Code */

    int i, num1, num2;
    cin >> num1 >> num2;
    for (i = num1; i <= num2; i++)
    {
        if (isPrime(i))
        {
            cout << i << " ";
        }
    }
    cout << endl;

    /* Fibbonacci Series Code */

    int num;
    cin >> num;
    fib(num);
    cout << endl;

    /* Factorial Code */

    int integer;
    cin >> integer;
    cout<<factorial(integer)<<endl;

    /* Pascal's Triangle */

    int row;
    cin>>row;
    for (int i = 0; i <= row; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << factorial(i) / (factorial(i - j) * factorial(j) )<< " ";
        }
        cout<<endl;
        
    }
    
    return 0;
}