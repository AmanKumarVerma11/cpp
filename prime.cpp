//print non-prime and prime numbers

#include<iostream>
using namespace std;

int main() {
    int n,i;
    cin >> n ;
    for(i=2;i<n;i++) {
        if(n%i==0) {
            cout << "Non Prime number" << endl;
            break;
        }
    } 
    if(i==n) {
        cout << "Prime number" << endl;
    }
}