#include <iostream>
using namespace std;
int main()
{
    int n, count;
    cin >> n;
    cout << endl;
    for (int i = 1; i <= n; i++)
    {
        count = 1;
        for (int j = i; j >= 1; j--)
        {
            for (int k = j; k >= 1; k--)
            {
                cout << count << " ";
            }
            count++;
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}