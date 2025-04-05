#include <iostream>
using namespace std;
int main()
{

    // question 2
    int a, b, c;
    cout << "enter the first three sides of the triangle";
    cin >> a >> b >> c;
    if (a + b > c && a + c > b && b + c > a)
    {
        if (a == b && b == c)
            cout << "the triangle formed is equilateral";
        else if (a == b || b == c || c == a)
            cout << "the triangle formed is isosceles";
        else
            cout << "the triangle formed is scalene";
    }
    else
        cout << "the triangle cannot be formed";



    return 0;
}

