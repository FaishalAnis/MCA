#include <iostream>
#include <string>
using namespace std;


int main(){
 char x;
    cout << "Enter the Vowel or Consonant: " << endl;
    cin >> x ;

    if (x=='a' || x== 'A' ,
        x=='e' || x== 'E' ,
        x=='i' || x=='I' , 
        x=='o' || x=='O' , 
        x=='u' || x=='U'
        ){
        cout << "Its a vowel: " << x ;
    }
    else
    {
        cout << "Its a consonant: "<< x ;
    }
    return 0;
}