#include <iostream>
using namespace std;
void prime(int a, int b){
    int flag;
    for(int i = a; i<= b; i++){
        if(i==0 || i==1)
            continue;
            flag= 1;
        
        for(int j =2; j<=i/2; j++){
            if ( i%j ==0){
                flag= 0;
                break;
        }
        }
        if(flag == 1){
            cout << i  <<" ";
        }
    }
}

int main() 
{
    int a = 1;
    int b = 10;
    prime(a,b);
    return 0;
}
