#include <iostream>
using namespace std;
int hcf(int a, int b){
    int result = min(a,b);
    while(result >0)
    {
        if (a%result ==0 && b%result ==0)
        {
            break;
        }
        result--;

    }
return result;
}

int main(){

    int a = 80; int b= 40;
    cout << "HCF is" << hcf(a,b);
    return 0;

}