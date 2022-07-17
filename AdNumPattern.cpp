/* Number Pattern Advanced
        n = 4
        4 4 4 4 4 4 4 
        4 3 3 3 3 3 4
        4 3 2 2 2 3 4
        4 3 2 1 2 3 4
        4 3 2 2 2 3 4
        4 3 3 3 3 3 4
        4 4 4 4 4 4 4
*/

#include <iostream>
using namespace std;
                   
int main() {
    int n;
    cin >> n;
    int i,j;
    for (i = 0; i <2*n-1;i++) {
        for(j=0; j<2*n-1;j++) {
            int min;
            if(i<j) {
                min=i;
            } else {
                min=j;
            }
            if(min<(2*n-1-i)) {
                min;
            } else {
                min = 2*n-2-i;
            }
            if(min<2*n-2-j) {
                min;
            } else {
                min=2*n-2-j;
            }
            cout<<n-min<< " ";
        }
        cout << endl;
    }  
return 0;
}