/* creating an square pattern
        n=5
        * * * * * 
        * * * * *
        * * * * *
        * * * * * 
        * * * * *
*/
#include<iostream>
using namespace std;

int main() {
    int i,j,n;
    cin >> n;
    for(i=1;i<=n;++i) {
        for(j=1;j<=n;j++) {
        cout << "*" << " " ; 
        }
        cout << endl;
    }
}