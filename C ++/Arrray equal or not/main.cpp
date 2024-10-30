#include <iostream>
#include<unordered_map>
using namespace std;
bool recur(int arr1[],int arr2[], int n, int m ){
    if(n!=m)
        return false;
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
        mp[arr1[i]]++;

    //sort(arr1, arr1+n);
    //sort(arr2, arr2+m);
    for(int i=0; i<n; i++){
        if(mp.find(arr2[i]) == mp.end())
            return false;
        if(mp[arr2[i]] == 0)
            return false;
        mp[arr2[i]]--;
    }
        //if(arr1[i] != arr2[i])
          //  return false;
    return true;
}


int main(){
    int arr1[]= {1, 2, 3, 4, 5};
    int arr2[]= {9, 4, 3, 2, 1};
    int n = sizeof(arr1)/sizeof(int);
    int m = sizeof(arr2)/sizeof(int);
    if(recur(arr1, arr2, n, m))
        cout << "Equal";
    else
        cout << "Not Equal";
    return 0;
}