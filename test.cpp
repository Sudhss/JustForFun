#include <bits/stdc++.h>
using namespace std;

void printA(){
//     **    
//    *  *   
//   ******  
//  *      * 
// *        *
    int n = 10;
    int mid = n/2;
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n-i-1;j++){
            cout << " ";
        }
        cout << "*";
        
        for(int j = 0;j<i*2;j++){
            if(i == mid){
                cout << "*";
            }
            else cout << " ";
        }
        cout << "*";
        cout << endl;
    }
}

int main(){
    printA();
}