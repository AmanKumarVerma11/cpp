// Inverted half Pyramid

#include <iostream>
using namespace std;

int main() {
    int m,i,j;
    cin >> m ;
    for(i=m;i>=1;i--) {
        for(j=1;j<=i;j++) {      // try for(j=i;j>=1;j--)
            cout << j << " " ;
        }
        cout << endl;
    }
}