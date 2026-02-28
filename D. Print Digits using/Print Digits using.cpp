#include <iostream>
using namespace std;

void printDigits(long long n)
{
    if(n < 10)
    {
        cout << n << " ";
        return;
    }

    printDigits(n / 10);
    cout << n % 10 << " ";
}

int main()
{
    int T;
    cin >> T;

    for(int i = 0; i < T; i++)
    {
        long long N;
        cin >> N;

        if(N == 0) 
            cout << 0;
        else
            printDigits(N);

        cout << endl;
    }

    return 0;
}

