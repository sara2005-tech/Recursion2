#include<iostream>

using namespace std;

void print (int n)
{
cout<<n;
if(n>1)
cout<<" ";
else return ;
print(n-1);

}
int main()
{
    int N;
    cin>>N;
    print(N);
    return 0;
}
