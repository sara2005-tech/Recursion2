#include <iostream>

using namespace std;
void Max(int arr[],int s,int n)
{
    if(n<arr[s])
        n=arr[s];
    if(s==0)
    {
        cout<<n;
        return;
    }
    Max(arr,s-1,n);
}
int main()
{
    int s,n;
    cin>>s;
    int arr[s];
    for(int i=0; i<s; i++)
    {
        cin>>arr[i];
    }
    n=arr[s-1];
    Max(arr,s-1,n);
    return 0;
}
