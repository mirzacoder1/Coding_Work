#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main()
{
    // int arr[] = {12, 14, 15, 23, 45};
    // printf("%u %u",arr,&arr);
    int a[5] = {5, 1, 15, 20, 25};
    int i = ++a[1];
    int j = a[1]++;
    int m = a[i++];
    printf("%d %d %d", i, j, m);
    return 0;
}