#include <bits/stdc++.h>
using namespace std;

void printA(){
    //     **    
    //    *  *   
    //   ******  
    //  *      * 
    // *        *
    int n = 5;
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
    int n = 7;
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
    int n = 5;
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

void printE(){
    // ******
    // *
    // ****
    // *
    // ******
    int n = 5;
    int mid = n/2;
    for(int i = 0;i<n;i++){
        cout << "*";
        for(int j = 0;j<n-1;j++){
            if(i == 0 || i == n-1) cout << "*";
            else{
                if(i == mid && j != n-2) cout << "*";
            }
        }
        cout << endl;
    }
    
}
void printF(){    
    // ******
    // *
    // ****
    // *
    // *
    int n = 5;
    int mid = n/2;
    for(int i = 0;i<n;i++){
        cout << "*";
        for(int j = 0;j<n-1;j++){
            if(i == 0) cout << "*";
            else{
                if(i == mid && j != n-2) cout << "*";
            }
        }
        cout << endl;
    }
    
}
void printG(){ cout << "G\n"; }
void printH(){ cout << "H\n"; }
void printI(){ cout << "I\n"; }
void printJ(){ cout << "J\n"; }
void printK(){ cout << "K\n"; }
void printL(){ cout << "L\n"; }
void printM(){ cout << "M\n"; }
void printN(){ cout << "N\n"; }
void printO(){ cout << "O\n"; }
void printP(){ cout << "P\n"; }
void printQ(){ cout << "Q\n"; }
void printR(){ cout << "R\n"; }
void printS(){ cout << "S\n"; }
void printT(){ cout << "T\n"; }
void printU(){ cout << "U\n"; }
void printV(){ cout << "V\n"; }
void printW(){ cout << "W\n"; }
void printX(){ cout << "X\n"; }
void printY(){ cout << "Y\n"; }
void printZ(){ cout << "Z\n"; }
int main(){
    while(true){
        cout << "\nEnter your choice : ";
        string inp; cin >> inp;
        char ch = inp[0];
        ch = toupper(ch);
        inp.clear();
        vector<void(*)()> funcs = {
        printA, printB, printC, printD, printE, printF, printG,
        printH, printI, printJ, printK, printL, printM,
        printN, printO, printP, printQ, printR, printS, printT,
        printU, printV, printW, printX, printY, printZ
        };

        if (ch >= 'A' && ch <= 'Z')
            funcs[ch - 'A']();

        cout << "\nDo you want to continue (Y/N) : ";
        string inp2; cin >> inp2;
        char choice = inp2[0];
        inp.clear();
        if(choice == 'Y' || choice == 'y') continue;
        else if(choice == 'N' || choice == 'n'){
            cout << "\nGood Bye !";
            return 0;
        }
        else{
            cout << "\nInvalid Choice";
            continue;
        }
    }
    return 0;
}