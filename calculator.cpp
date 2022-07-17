//Basic Calculator using switch case
#include<iostream>
using namespace std;

int main() {
    int option,a,b;
    cout << "Input a and b : " ;
    cin >> a >> b;
    cout << "1) Addition\n" << "2) Subtraction\n" << "3) Multiplication\n" << "4) Division\n" << endl;
    cout << "Choose Option -> ";
    cin >> option;
    switch (option) {
        case 1: cout << "Addition -> " << (a+b) << endl; break;
        case 2: cout << "Subtraction -> " << (a-b) << endl; break;
        case 3: cout << "Multiplication -> " << (a*b) << endl; break;
        case 4: cout << "Division -> " << (a/b) << endl; break;
        default: cout << "Invalid option " << endl; break;
    }
}