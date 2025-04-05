#include <iostream>
using namespace std;
int main()
{

    // question 6
    int n;
    cout << "enter the no. of rows" << endl;
    cin >> n;
    for (int i = 1; i < n + 1; i++)
    {
        for (int y = 1; y < i + 1; y++)
        {
            cout << 1;
        }
        for (int y = 1; y < i + 1; y++)
        {
            cout << 2;
        }
        for (int y = 1; y < i + 1; y++)
        {
            cout << 3;
        }
        cout << endl;
    }

    return 0;
}
