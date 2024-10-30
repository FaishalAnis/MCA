#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

void merge(int arr1[], int arr2[], int arr3[], int n, int m){
    int i=0;
    int j = 0;
    int k = 0;
    while(i<n && j<m){
        if (arr1[i] < arr2[j])
            arr3[k++] = arr1[i++];
        else
            arr3[k++]=arr2[j++];
    }
    while (i<n)
        arr3[k++]=arr1[i++];
    while (j<m)
        arr3[k++]=arr2[j++];

}
int main(){
    int arr1[] ={1, 2, 3, 4};
    int arr2[] ={5, 6, 7, 8};
    int n = sizeof(arr1)/sizeof(arr1[0]);
    int m = sizeof(arr2)/sizeof(arr2[0]);
    int arr3[n+m];
    merge(arr1, arr2, n, m, arr3);
    cout << "Array after merging" <<endl;
    for (int i=0; i < n+m; i++)
        cout << arr3[i] << " ";
  
    return 0;
}