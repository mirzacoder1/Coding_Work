#include <iostream>
using namespace std;
int main()
{
    int n, i, j;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    cout << endl;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    cout << endl;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (i == 1 || i == n || j == 1 || j == n)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }

    cout << endl;

    for (i = n; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    cout << endl;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (j <= n - i)
            {
                cout << " ";
            }
            else
            {
                cout << "*";
            }
        }
        cout << endl;
    }

    cout << endl;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    cout << endl;

    for (i = n; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    cout << endl;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    cout << endl;

    for (i = n; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    cout << endl;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i + 1; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    cout << endl;
    int count = 0;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            count++;
            cout << count << " ";
        }
        cout << endl;
    }

    cout << endl;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            if ((i + j) % 2 == 0)
            {
                cout << "1 ";
            }
            else
            {
                cout << "0 ";
            }
        }
        cout << endl;
    }

    cout << endl;

    for (i = 1; i <= n; i++)
    {
        int k = i;
        for (j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (; j <= n; j++)
        {
            cout << k << " ";
            k--;
        }
        k = 1;
        for (; j < n + i; j++)
        {
            k++;
            cout << k << " ";
        }
        for (; j <= 2 * n - 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }

    cout << endl;

    int space = (2 * n - 1) / 2;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= space; j++)
        {
            cout << " ";
        }
        for (j = 1; j <= 2 * i - 1; j++)
        {
            cout << "*";
        }
        cout << endl;
        space--;
    }
    space = 0;
    for (i = n; i >= 1; i--)
    {
        for (j = 1; j <= space; j++)
        {
            cout << " ";
        }
        for (j = 1; j <= 2 * i - 1; j++)
        {
            cout << "*";
        }
        cout << endl;
        space++;
    }

    cout << endl;

    for (i = 1; i <= 3; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (((i + j) % 4 == 0) || ((i == 2) && j % 4 == 0))
            {
                cout << "* ";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    cout << endl;

    int character = 65, num = 1;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            if (i % 2 != 0)
            {
                cout << (char)character<<" ";
                character++;
            }
            else
            {
                cout << num<<" ";
                num++;
            }
        }
        cout << endl;
    }

    cout<<endl;

    return 0;
}