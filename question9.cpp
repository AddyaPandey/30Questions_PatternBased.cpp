/*
                     solve this pattern
   *********
    *******
     *****
      ***
       *
 */
#include <iostream>
using namespace std;
int main()
{ int n;
cin>>n;
    for (int i = 0; i < n; i++)      //n=5 or 8 or anything
    {
        for (int j = 1; j <= i; j++){
            cout<<" ";
        }
        for (int j = 1; j <= 2*n-(2*i+1); j++){
            cout<<"*";
        }
        for (int j = 1; j <= i; j++){
            cout<<" ";
        }
            cout<<endl;
    } 
    return 0;
}