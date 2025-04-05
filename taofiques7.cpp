#include <iostream>
using namespace std;
int main()
{

    //question 7
    int n, z = 1;
    cout << "enter the no. of column";
    cin >> n;
    for (int i = 1; i < 4; i++)
    {

        for (int y = 0; y < n; y++)
        {
            cout << z;
            if (y < n - 1)
            {
                cout << "*";
            }
            z++;
        }

        cout << endl;
    }

    return 0;
}
