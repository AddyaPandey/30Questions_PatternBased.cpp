/*
0
10
010
1010
01010                        solve this pattern
 */

#include <iostream>
using namespace std;
int main()
{ int n;
cin>>n;
    for (int i = 1; i <= n; i++)      //n=5 or 8 or anything 
    {
        int start;
        if (i % 2 == 0) start =1;
        else start =0;

        for(int j=1; j<=i; j++){
            cout<<start;
            start = 1-start;
        }
        cout<<endl;
    } 
    return 0;
}