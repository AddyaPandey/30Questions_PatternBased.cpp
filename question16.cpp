/*

A
AB
ABC
ABCD
ABCDE

 */
#include <iostream>
using namespace std;

int main()
{
 
    for (char i = 0; i < 5; i++)
    {
        for (char j = 'A'; j <='A'+i; j++)
        {
            cout<< j <<" ";
        }
        cout << endl;
    }
    return 0;
}