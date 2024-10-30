#include <iostream>
#include <cmath>
using namespace std;

double average(int arr[], int n){
    int sum = 0;
    double avg = 0;
    for(int i =0; i<n; i++)
        sum = sum + arr[i];
        avg = sum/n;
    return avg;
}
int main(){
    int arr[]= {10, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "Average: " << average(arr, n) << endl;
    return 0;
}