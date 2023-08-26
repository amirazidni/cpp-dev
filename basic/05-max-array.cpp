#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/

int max_of_four(int arr[])
{
    return *max_element(arr, arr + 4);
}
int main()
{
    int intArr[4];
    scanf("%d %d %d %d", &intArr[0], &intArr[1], &intArr[2], &intArr[3]);
    int ans = max_of_four(intArr);
    printf("%d", ans);

    return 0;
}