#include <iostream>
using namespace std;

void Binary(long long n)
{
    if(n == 0)
        return;
    Binary(n / 2);
    cout << n % 2;
}

int main()
{
    int n;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        long long N;
        cin >> N;

        if(N == 0)
            cout << 0;
        else
            Binary(N);

        cout << endl;
    }

    return 0;
}
