#include <stdio.h>
// #include<stdlib.h>
// #include<string.h>
// #include<math.h>
int linearSearch(int arr[], int size, int element)
{
    for (int i = 0; i < size - 1; i++)
    {
        if (arr[i] == element)
        {
            return i;
        }
    }
    return -1;
}
int BinarySearch(int arr[], int size, int element)
{
    int low = 0, mid, high = size - 1;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == element)
            return mid;
        else if (arr[mid] < high)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 56, 67, 89}, size = sizeof(arr) / sizeof(int), element;
    printf("Enter your searching Number\n");
    scanf("%d", &element);
    int searchIndex = BinarySearch(arr, size, element);
    printf("The index for %d is %d\n", element, searchIndex);

    int Arr[] = {1, 2, 5, 34, 76, 67, 9};
    searchIndex = linearSearch(Arr, size, element);
    printf("The index for %d is %d\n", element, searchIndex);
    return 0;
}