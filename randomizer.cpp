#include<bits/stdc++.h>
using namespace std;

int randomize(int n){
    srand(time(0)); 
    int sum=0;

    for (int i = 0; i < n; ++i) {
        sum+=rand();

        
    }
    return sum;
}

int main() {

    int n;
    cin>>n;
    cout<<randomize(n);
    int m;
    cin>>m;

    return 0;
}