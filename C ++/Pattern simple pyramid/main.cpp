#include <iostream>
using namespace std;


int main(){
    int x= 5, n=1;
    for (int i = 0; i<=x; i++){
        for (int j = 0; j<i; j++){
             cout << n << " ";
             n++;
        }
        cout << "\n";
    }
    return 0;
}