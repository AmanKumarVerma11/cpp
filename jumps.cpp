//use of break and continue statements

#include<iostream>
using namespace std;

int main() {
    int salary = 5000;
    int i;                       //i is date of going out until the salary is reached 0
    for(i=1;i<=30;i++) {
        if(i%2==0) {
            continue;      //continue-> Use to skip to the next iteration of the loop
        }
        if(salary==0) {
            break;         // Break-> Use to terminate the loop
        }
        cout << "Go out Today! ->" << i << endl;
        salary -= 500;
    }
}