#include <iostream>
using namespace std;
int main() {
    int t;
    cout << "Enter the no for table:";
    cin >> t;
    for (int i = 1; i <=10 ; i++)
        cout << t << "*" << i << "=" << t*i << endl;
    return 0;
}