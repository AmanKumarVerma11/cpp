/* Butterfly pattern
    n=5
    1                  1
    1 2              2 1
    1 2 3          3 2 1
    1 2 3 4      4 3 2 1
    1 2 3 4 5  5 4 3 2 1
    1 2 3 4      4 3 2 1
    1 2 3          3 2 1
    1 2              2 1
    1                  1
*/
#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int i,j,k,m;
    for(i=n;i>=1;i--) {
        for(j=n;j>=i;j--) {
            cout<<" "<<j<<" ";          // cout<<"* "; 
        }
        j++;
        for(k=1;k<=(2*j)-3;k++) {
            cout<<"   ";
        }
        j=j==1?2:j;
        for(m=j;m<=n;m++) {
            cout<<" "<<m<<" ";           // cout<<" *";
        }
        cout<<endl;
    }
    int a,b,c,d;
    for(a=2;a<=n;a++) {
        for(b=n;b>=a;b--) {
            cout<<" "<<b<<" ";           // cout<<"* ";
        }
        b++;
        for(c=1;c<=2*b-3;c++) {
            cout<<"   ";
        }
        for(d=a;d<=n;d++) {
            cout<<" "<<d<<" ";          // cout<<" *";>>
        }
        cout<<endl;
    }
    return 0;
}