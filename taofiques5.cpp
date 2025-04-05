#include <iostream>
using namespace std;
int main()
{

    //question 5
     int a,i ;
     cout<<"enter the no. ";
     cin>>a;
     for(i=0; i<=a; i++)
     {
         if(i*i==a)
         {
             cout<<"the no. is prfect square of = "<<i;
             break;
         }
     }
     if(i*i!=a)
     {
         cout<<"the no. is not a prfect square";
     }
    return 0;
}
