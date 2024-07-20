/*

**********
****  ****
***    ***
**      **
*        *
*        *
**      **
***    ***
****  ****
**********

 */
#include <iostream>
using namespace std;

int main()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 1; j <= 5 - i; j++)
        {
            cout << "*";
        }
        for (char ch = 0; ch < 2 * i; ch++)
        {
            cout << " ";
        }
        for (int j = 1; j <= 5 - i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
     int iniS = 7;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        for (char ch = 0; ch <= iniS; ch++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        iniS -= 2;
        cout << endl;
    }
    return 0;
}