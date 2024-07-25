/*

****
*  *
*  *
****         //print this square pattern

 */

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    // Step 1: Focus on the number of rows: 2*n - 1 rows
    for (int i = 0; i < 2*n - 1; i++) {
        // Step 2: Focus on the number of columns: 2*n - 1 columns
        for (int j = 0; j < 2*n - 1; j++) {
            int top = i;
            int bottom = j;
            int right = (2*n - 2) - j;
            int left = (2*n - 2) - i;

            // Step 3: Printing the minimum distance of 4 directions after subtracting it from n
            cout<<(n - min(min(top, bottom), min(left, right)))<<" ";           // As min takes only 2 args at a time
        }
        cout << endl;
    }
    return 0;
}