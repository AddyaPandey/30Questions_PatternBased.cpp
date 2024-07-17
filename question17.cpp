/*

ABCDE
ABCD
ABC
AB
A

 */
#include <iostream>
using namespace std;


int main()
{ int n;
cin>> n;
    for (char i = 1; i <= n; i++)
    {
        for (char j = 'A'; j <= 'A' + n- i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}