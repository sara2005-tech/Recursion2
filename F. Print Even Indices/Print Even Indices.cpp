#include <iostream>

using namespace std;
void print(int arr[],int s)
{
    if(s%2==0)
        cout<<arr[s]<<" ";
    if(s==0)
        return;
    print (arr,s-1);
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
    print (arr,s-1);
    return 0;
}
