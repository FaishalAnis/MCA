#include <iostream>
#include <cmath>
using namespace std;

int getmin(int arr1[], int n){
    int res = arr1[0];
    for(int i =1; i<n; i++)
        res = min(res, arr1[i]);
    return res;
}
int getmax(int arr1[], int n){
    int res = arr1[0];
    for(int i =1; i<n; i++)
        res = max(res, arr1[i]);
    return res;
}
int main(){
    int arr1[]= {1, 12, 123, 1234, 9999};
    int n = sizeof(arr1)/sizeof(arr1[0]);
    cout << "Minimum: " << getmin(arr1, n) << endl;
    cout << "Maximum: " << getmax(arr1, n);
    return 0;
}