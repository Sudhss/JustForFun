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
    cout << "Printing B";
}
void printC(){
    cout << "Printing C";
}
void printD(){
    cout << "Printing D";
}

int main(){
    while(true){
        cout << "\nEnter your choice : ";
        string inp; cin >> inp;
        char ch = inp[0];
        ch = toupper(ch);
        inp.clear();
        if(ch < 'A' || ch > 'Z') {cout << "\nInavalid Choice"; continue;}
        switch (ch){
            case 'A':
                printA();
                break;
            case 'B':
                printB();
            case 'C':
                printC();
                break;
            case 'D':
                printD();
                break;
            default:
                break;
        }

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