#include <iostream>
using namespace std;
int reverse(int num){
    int rev = 0;
    while (num >0)
    {
    rev = rev*10 + num%10;
    num = num/10;
    }
    return rev;

}

int main(){
    int num;
    cout << "Enter the number: ";
    cin >> num;
    if (num==reverse(num)){
        cout << "The No is pallindrome";
    }
    else {
        cout << "The No is not pallindrome" ;

    }
    return 0;
}