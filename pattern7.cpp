/*

 12345
 1234                solve this pattern
 123
 12
 1

 */
#include <iostream>
using namespace std;
int main() {
     int n;
cin>>n;
    
    for( int i=0; i<= n; i++) {
        for ( int j=1; j<=n-i; j++) {

            cout<< j <<" ";
        }
      cout<<endl;
    }
    return 0;
}