#include "mod.h"
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main(){
    long int nSmall;
    long int nBig;
    cout << "Choisir un petit nombre: ";
    cin >> nSmall;
    cout << "Choisir un grand nombre: ";
    cin >> nBig;
    cout << "Plus petit nombre: " << nSmall << "\nPlus grand nombre: " << nBig;
    cout << endl << endl;

    for (long unsigned int i = nBig; i > nSmall -1; i--)
    {
        char s[8] ;
        sprintf(s, "%08X", i);
        cout << s << endl;       
        // if( isPalaindrome(s) ){
        //     cout << "Plus grand palaindrome: ";
        // }
    }
    
    cout << endl << endl;
    return 0;
}