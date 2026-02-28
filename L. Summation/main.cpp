#include <iostream>

using namespace std;
long long summation (int arr[],int s)
{
    if(s<0)
        return 0;
    return arr[s]+summation (arr,s-1);
}
int main()
{
    int s;
    cin>>s;
    int arr[s];
    for(int i=0; i<s; i++)
    {
        cin>>arr[i];
    }
    cout<<summation (arr,s-1);
    return 0;
}
