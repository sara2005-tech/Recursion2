#include <iostream>
using namespace std;

float average(int arr[], int n)
{
    if(n == 1)              // base case
        return arr[0];

    return (arr[n-1] + (n-1) * average(arr, n-1)) / n;
}

int main()
{
    int n;
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    cout << average(arr, n);

    return 0;
}

