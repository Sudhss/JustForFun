#include <bits/stdc++.h>
using namespace std;
int n = 5;
void printA(){
//     **    
//    *  *   
//   ******  
//  *      * 
// *        *
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
void printB(){
    // ********  
    // *       * 
    // ********  
    // *       * 
    // ******** 
    int mid = n/2;
    for(int i = 0;i<n;i++){
        cout << "*";
        for(int j = 0;j<2*n-3;j++){
            if(i == mid || i == 0 || i == n-1) cout << "*";
            else {
                cout << " ";
                if(j == 2*n-4) cout << "*";
            }
        }
    cout << endl;
    }
}

void printC(){
    // *****
    // *
    // *
    // *
    // *****
    for(int i = 0;i<n;i++){
        cout  << "*";
        if(i == 0 || i == n-1){
            for(int j = 0;j<n;j++){
                cout << "*";
            }
        }
        cout << endl;
    }
}

void printD(){
    // ***** 
    // *    *
    // *    *
    // *    *
    // ***** 
    int n = 5;
    for(int i = 0;i<n;i++){
        cout << "*";
        for(int j = 0;j<n-1;j++){
            if(i == 0 || i == n-1) cout << "*";
            else { 
                if(j == n-2) cout << " *";
                else cout << " ";
            }
        }
        
        cout <<  endl;
    }
}



void printH(){
    // *    *
    // *    *
    // ******
    // *    *
    // *    *
    int n = 11;
    int mid = n/2;
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n+2;j++){
            if(j == 0 || j == n+1 || i == mid) cout << "*";
            else cout << " ";
        }
        cout << endl;
    }
}

void printI(){
    int n = 5;
    int mid = n/2;
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            if(i == 0 || i == n-1) cout << "*";
            else if(j == mid) cout << "*";
            else cout << " ";
        }
        cout << endl;
    }
}
int main(){
    printI();
}