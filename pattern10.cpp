#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int i = 1;

    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            char count = 'A' + j + i - 2;
            cout << count << " ";
            j++;
        }

        cout << endl;
        i++;
    }
}