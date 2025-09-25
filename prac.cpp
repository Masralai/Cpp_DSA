#include<bits/stdc++.h>
using namespace std;

bool binarySearch(int*arr,int k,int n){
    int s=0,e=n-1,mid=s+(e-s)/2;
    while(s<=e){
        if(arr[mid]==k)return true;
        else if(arr[mid]<k)s=mid+1;
        else e=mid-1;
        mid=s+(e-s)/2;
    }
    return false;
}

int main() {

    int arr[5] = {1, 2, 3, 4, 5};
    //int n = sizeof(arr)/sizeof(int);
    if(binarySearch(arr, 3, 5)) cout<<"Present" ;else cout<<"Not Present";
    return 0;
}