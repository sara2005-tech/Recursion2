#include <iostream>

#include <iostream>
using namespace std;

int countVowels(char str[], int i)
{
    if(str[i] == '\0')
        return 0;

    char c = str[i];

    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
       c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
        return 1 + countVowels(str, i + 1);

    return countVowels(str, i + 1);
}

int main()
{
    char str[200];

    cin.getline(str, 200);

    cout << countVowels(str, 0);

    return 0;
}
