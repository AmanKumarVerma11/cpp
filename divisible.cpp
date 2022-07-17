// skip all the numbers divisible by 3 in n numbers

#include<iostream>
using namespace std;

int main() {
    int n,i;
    cin >> n ;
    for(i=0;i<=n;i++) {
        if(i%3==0) {                         //method-1
            continue;
        }
        cout << "Number->" << i << endl;
        
        /*if(i%3!=0) {                            //method-2
            cout << "Number->" << i << endl;
        } */
    }
}