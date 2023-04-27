#include <iostream>

using namespace std;

// int main()
// {
//     int n;
//     cin >> n;

//     int i = 1;
//     int count = 1;

//     while (i <= n)
//     {
//         int j = 0;
//         while (j < i)
//         {
//             cout << j + count << " ";
//             j++;
//         }

//         count++;
//         cout << endl;
//         i++;
//     }
// }

int main()
{
    int n;
    cin >> n;

    int i = 1;

    while (i <= n)
    {
        int j = 1;
        int count = i;
        while (j <= i)
        {
            cout << count << " ";
            count++;
            j++;
        }

        cout << endl;
        i++;
    }
}