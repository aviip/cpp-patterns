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
        while (j < i)
        {
            cout << " ";
            j++;
        }

        int k = n;
        while (k >= i)
        {
            // cout << "*" ;
            cout << i ;
            k--;
        }

        cout << endl;
        i++;
    }
}