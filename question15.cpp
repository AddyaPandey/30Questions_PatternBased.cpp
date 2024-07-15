/*

EEEEE
DDDDD
CCCCC
BBBBB
AAAAA

 */
#include <iostream>
using namespace std;

int main()
{
 
    for (char i = 'E'; i >= 'A'; i--)
    {
        for (char j = 'E'; j >= 'A'; j--)
        {
            cout<< i <<" ";
        }
        cout << endl;
    }
    return 0;
}