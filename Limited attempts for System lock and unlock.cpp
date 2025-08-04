//Name : Prathyush Nimmagadda
//PRN : 24070123064
//Batch : ENTC A3
#include <iostream>
using namespace std;
int main() {
    int correctPassword = 123;
    int userPassword;
    int attempts = 3;
    cout << "Welcome to Secure Login" << endl;
    while (attempts > 0) {
        cout <<"\nEnter the password (Attempts left:"<< attempts <<"): ";
        cin >> userPassword;
        if (userPassword == correctPassword) {
            cout << "Access Granted , Welcome!" << endl;
            break; 
        } else {
            cout <<"Incorrect password , Pls try again"<< endl;
            attempts--;
        }
    }
    if (attempts == 0) {
        cout <<"\nToo many failed attempts , Access Denied"<< endl;
    }
    return 0;
}
