#include <iostream>
using namespace std;
int sum(int t) {
    int sum=0 ;

    for (int i = 1; i <=t ; i++)
        sum = sum + i;
    return sum;
}
int main (){
    int t;
    cout << "Enter the no for addition:";
    cin >> t;
    cout << sum(t);
    return 0;
}