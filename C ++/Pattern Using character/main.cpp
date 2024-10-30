#include <iostream>
using namespace std;


int main(){
    int x= 5;
    char n = 'A';
    for (int i = 1; i<=x; i++){
        for (int j = 0; j<i; j++){
             cout << n << " ";
        }
        cout << "\n";
        n++;
    }
    return 0;
}