#include<bits/stdc++.h>

using namespace std;

int main(){
     int n;
     cin >> n;

     if(n >= 18){
        cout << "Adult";
     } else if(n < 18 && n >= 13){
        cout << "Teen";
     } else {
        cout << "Child";
     }
}