#include <bits/stdc++.h>
using namespace std;

void printA(){
    cout << "Printing A";
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
        char ch; cin >> ch;
        ch = toupper(ch);
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
        char choice;cin >> choice;
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