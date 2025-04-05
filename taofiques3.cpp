#include <iostream>
using namespace std;
int main()
{

    // question 3
    int a,c,b = 0;
    cout << "enter the no.";
    cin >> a;
    for (int i = 0; a != 0; i++)
    {
        c = a % 10;
        if (c >= b)
            b = c;
        a = a / 10;
    }
    cout << "the largest digit in the number"<<b;
    return 0;
}
