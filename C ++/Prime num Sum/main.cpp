#include <iostream>
#include <cmath>
using namespace std;
bool isprime(int a){
    if(a<=1)
    return false;
    for (int i = 2; i<=sqrt(a); i++)
    {
        if (a%i==0)
        return false;
    
    }
    return true;
}
bool ispossible(int b){
    if(isprime(b)&&isprime(b-2))
        return true;
    else
        return false;
}


int main(){
    int a=13;
    if(ispossible(a))
        cout << "yes";
    else
        cout << "no";
    return 0;
}