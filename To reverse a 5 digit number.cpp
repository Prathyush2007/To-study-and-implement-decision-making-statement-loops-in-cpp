// Name : Prathyush Nimmagadda
//PRN : 24070123064
//Batch : ENTC A3
 #include <iostream>
using namespace std;
int main() {
    int num = 23065;
    int reversed = 0;
    while (num > 0) {
        int digit = num % 10;           
        reversed = reversed * 10 + digit; 
        num = num / 10;                 
    }
    cout <<"Reversed number:"<< reversed<< endl;
    return 0;
}
