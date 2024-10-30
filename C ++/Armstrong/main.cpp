#include <iostream>
using namespace std;

int Armstrong(int i){
  int rem;
  int sum=0;  
    while(i>0){
        rem = i%10;
        sum = sum + (rem*rem*rem);
        i=i/10;
    }
return sum;
}
int main(){
    int a;
    cout << "Enter the number: ";
    cin >> a;
    if (a==Armstrong(a))
    {
        cout<< "Armstrong no.";
    }
    else{
    cout << "Not Armstrong no.";
    }
    return 0;
}