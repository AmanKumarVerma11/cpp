// Various types of number pattern
#include <iostream>
using namespace std;

int main() {
    int m,i,j;
    cin >> m ;
    cout << "Half Pyramid pattern(Vertically)-" << endl;
    for(i=1;i<=m;++i) {
        for(j=1;j<=i;++j) {
            cout << j << " ";
        }
        cout << endl;
    }
    cout << "Half Pyramid pattern(Horizontally)-" << endl;
    for(i=1;i<=m;i++) {
        for(j=1;j<=i;j++) {
            cout << i << " " ;
        }
        cout << endl;
    }
    cout << "Half Pyramid pattern(1 on diagonal)-" << endl;
    for(i=1;i<=m;i++) {
        for(j=i;j>=1;j--) {
            cout << j << " ";
        }
        cout << endl;
    }
    cout << "half Pyramid Inverted pattern 1-" << endl;
    for(i=1;i<=m;i++) {
        for(j=m;j>=i;j--) {
            cout << i << " " ;
        }
        cout << endl;
    }
    cout << "Half Pyramid Inverted pattern 2-" << endl;
    for(i=1;i<=m;i++) {
        for(j=m;j>=i;j--) {
            cout << j << " " ;
        }
        cout << endl;
    }
    cout << "Half Pyramid Inverted pattern 3-" << endl;
    for(i=1;i<=m;i++) {
        for(j=1;j<=m-i+1;j++) {
            cout << j << " " ;
        }
        cout << endl;
    }
    cout << "Half pyramid 0-1 Pattern-" << endl;
    for(i=1;i<=m;i++) {
        for(j=1;j<=i;j++) {
            if((i+j)%2==0) {
                cout<<"1 ";
            } else {
                cout<<"0 ";
            }
        }
        cout << endl;
    }
    cout << "Full pyramid pattern-" << endl;
    for(i=1;i<=m;i++) {
        for(j=1;j<=m-i;j++) {
            cout <<" ";
        }
        for(j=1;j<=i;j++) {
            cout<<" "<<j;
        }
        cout << endl;
    }
}