#include <iostream>
using namespace std;

bool even_odd(int n){
    return (n%2 == 0);

}


int main(){
    int n;
    cout << "enter the number: " ;
    cin >> n;
        if (even_odd(n))
            cout << "Even" ;
        else
            cout << "Odd" ;
    return 0;
}