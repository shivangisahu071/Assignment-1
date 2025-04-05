#include <iostream>
using namespace std;
int main()
{

    //question 8
    int n, z = 1;
    cout << "enter the no. of column";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int y = 1; y <= i; y++)
        {
            cout << y;
        }
        for (int y = 1; y <= n - i; y++)
        {
            cout << " ";
        }
        for (int y = (n - i); y >= 1; y--)
        {
            cout << " ";
        }
        for (int y = i; y >= 1; y--)
        {
            cout << y;
        }
        cout << endl;
    }

    return 0;
}
