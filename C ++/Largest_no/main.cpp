#include <iostream>
using namespace std;


int main(){
 int x, y, z;
    cout << "Enter the three numbers a, b & c" << endl;
    cin >> x >> y >> z;

    if (x>y && x>z){
        cout << "the largest no. is: " << x ;
    }
    else if (y>x && y>z)
    {
        cout << "The largest no. is: "<< y ;
    }
    else{
        cout << "The largest no. is: " << z;
    }
    
    return 0;
}