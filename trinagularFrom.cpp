#include <iostream>
using namespace std;
int main()
{
    int c;
    cin >> c;
    for (int i = 0; i < 10; i++)
    {
        int m = 0, k = 5, n = 8, r = 1;

        for (int i = 1; i <= c; i++)
        {
            for (int i = 1; i <= k; i++)
            {
                cout << '*';
            }
            for (int i = 1; i <= m; i++)
            {
                cout << " ";
            }
            for (int i = 0; i < k; i++)
            {
                cout << '*';
            }
            k--;
            m += 2;
            cout << endl;
        }
        cout << endl;
        for (int i = 1; i <= c; i++)
        {
            for (int i = 1; i <= r; i++)
            {
                cout << '*';
            }
            for (int i = 1; i <= n; i++)
            {
                cout << " ";
            }
            for (int i = 0; i < r; i++)
            {
                cout << '*';
            }
            r++;
            n -= 2;
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}