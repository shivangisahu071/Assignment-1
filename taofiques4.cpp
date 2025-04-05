#include <iostream>
using namespace std;
int main()
{

    //question 4
    int a, x, r, s = 0, i, n;
    cout << "enter the no ";
    cin >> a;
    x = a;
    // now come to binary conversion
    for (i = 1; x >= 2; ++i)
    {
        r = x % 2;
        s = s * 10;
        s = s + r;
        x = x / 2;
    }
    s = s * 10;
    s = s + x;
    n = i;
    int B[n];
    for (int y = 0; y < n; y++)
    {
        B[y] = s % 10;
        s = s / 10;
    }
    cout << "your binary conversion = ";
    for (int y = 0; y < n; y++)
    {
        cout << B[y];
    }
    cout<<endl;
    // now lets see octadecimal conversion
    x = a;
    for (i = 1; x >= 8; ++i)
    {
        r = x % 8;
        s = s * 10;
        s = s + r;
        x = x / 8;
    }
    s = s * 10;
    s = s + x;
    n = i;
    int O[n];
    for (int y = 0; y < n; y++)
    {
        O[y] = s % 10;
        s = s / 10;
    }
    cout << "your binary conversion = ";
    for (int y = 0; y < n; y++)
    {
        cout << O[y];
    }

    return 0;
}
