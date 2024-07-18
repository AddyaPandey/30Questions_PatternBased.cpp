/*

   A
  ABA
 ABCBA
ABCDCBA

 */
#include <iostream>
using namespace std;

int main()
{
    for (char i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5 - i; j++)
        {
            cout << " ";
        }
        char ch = 'A';
        int breakpoint = 2 * i - 1 / 2;
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << ch;
            if (j <= breakpoint) ch++;
            else ch--;
        }
        for (int j = 1; j <= 5 - i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
    return 0;
}