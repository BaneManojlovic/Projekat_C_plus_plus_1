/*#include<iostream>
using namespace std;

void dekBin(int x)
{
    int ostatak;
    if( x<=1 )
    {
        cout << x ;
        return ;
    }
    ostatak = x%2;
    dekBin(x/2);

    cout << ostatak ;
}

int main()
{
    cout << "----------------------------------------------------------";
    char odgovor;
    do
    {
    int x;
    cout << "\nUnesite celi pozitivan broj ciji binarni ispis zelite: ";
    cin >> x;
    cout << x << " = 0x00000000000000000000000000000";
    dekBin(x);

    cout << "\nDa li zelite da ponovite unos? [d/n]";
    cin >> odgovor;
    }while(odgovor == 'D' || odgovor == 'd');
    cout << "\nKraj zadatka" << endl;
    cout << "----------------------------------------------------------" << endl;
    return 0;
}

*/
