#include <iostream>
using namespace std;
bool IsPrime(int n) {
    if (n <=1){
        return false;
    }

    for(int i=2; i<=n/2; i++)
        if(n%i ==0){
        return false;
    }
    return true;
}

int main(){
    int n ;
    cout << "Enter the number:";
    cin >> n;

   IsPrime(n)? cout << "true\n" : cout << "false";
   return 0;
}