#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        int j = n;
        while (j > i)
        {
            cout << " ";
            j--;
        }

        int k = 1;
        while (k <= i)
        {
            cout << i;
            k++;
        }

        cout << endl;
        i++;
    }
}