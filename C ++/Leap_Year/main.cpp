#include <iostream>
using namespace std;
 bool Leap(int x){
        if (x%400 == 0){
        return true;
        }
        else if (x%100 ==0){
            return false;
        }
        else if (x%4 == 0)
        return true;
        else{
            return false;
        }
    }
int main() {
    int year;
     cout << "Enter the year: ";
     cin >> year;


    Leap(year) ? cout << "Leap Year"
               : cout << "Not a Leap Year";
    return 0;
}