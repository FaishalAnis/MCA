#include <iostream>
using namespace std;


int main(){
    int x = 5;
        for(int i =1; i<=x; i++){
            for(int j = 1; j<=i; j++){
                cout<< "*";
            }
            cout << "\n";
        }
    return 0;
}