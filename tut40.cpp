#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int arr[] = { 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 };
    int n = sizeof(arr) / sizeof(arr[0]);
 

    sort(arr, arr + n);
 

        cout << arr[7] << " ";
 
    return 0;
}