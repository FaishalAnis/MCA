#include <iostream>
using namespace std;


int main(){
    int x= 5;
    for (int i = x; i>0; i--){
        for (int j = 0; j<=x; j++){
            if(j>=i){
                cout << "*";
            }
            else{
             cout << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}