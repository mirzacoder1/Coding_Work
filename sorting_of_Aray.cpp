/* #include <iostream>
using namespace std;
void selectionSort(int a[], int n)
{
    int i, j, min, temp;
    for (i = 0; i < n; i++)
    {
        min = i;
        for (j = i + 1; j < n; j++)
        {
            if (a[min] < a[j])
            {
                min = j;
                temp = a[i];
                a[i] = a[min];
                a[min] = temp;
            }
        }
    }
}
int main()
{
    int a[] = {1, 4, 2, 67, 34, 23, 56};
    int n = sizeof(a) / sizeof(a[0]);
    int i;
    cout<<"Your Array is:"<<endl;
    for (i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
    selectionSort(a, n);
    cout << "The sorted array is" << endl;
    for (i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;

    return 0;
} */

#include <iostream>
using namespace std;
int main()
{
    int j, i, a[i];
    cin >> i;
    cout << "Enter Your Array" << endl;
    for (j = 0; j < i; j++)
        cin >> a[j];
    cout << "Your given array is:" << endl;
    for (j = 0; j < i; j++)
        cout << a[j] << " ";
    cout << endl;
    cout << "Your sorted array is:" << endl;
    for (j = i-1; j > 0; j--)
        cout << a[j];
    cout << endl;
    return 0;
}