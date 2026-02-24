#include<stdio.h>
int main ()
{
    int arr[] = {2, 4, 6, 8, 10};
    int n = sizeof(arr)/sizeof(arr[0]);

    for (int i = 0; i < n; i++)
    {
    printf("1", arr[i]);
    }

    return 0;

}
