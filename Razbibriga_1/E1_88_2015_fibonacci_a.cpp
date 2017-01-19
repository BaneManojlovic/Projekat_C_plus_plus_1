/*#include <iostream>
using namespace std;

int main()
{
    cout << "-----------------------------------------------------------------------";
    char odgovor;
    do
    {
    cout << "\nUnesite redni broj zeljenog elementa Fibonacijevog niza: ";
    int n, n0=0, n1=1, element;
    cin >> n;
    //------------ Verzija koja koristi iteraciju ----------------------------------------------------------
    for(int i = 0; i<n; i++)
    {
//      cout << n0 << endl;
        element = n0 + n1;
        n0 = n1;
        n1 = element;
    }
    cout << n << "-i element je: " << n0 << endl;
    //------------------------------------------------------------------------------------------------------
    cout << "Da li zelite da ponovite unos? [d/n]: ";
    cin >> odgovor;
    }while(odgovor == 'D' || odgovor == 'd');
    cout << "Kraj programa!" << endl;
    cout << "-----------------------------------------------------------------------" << endl;
    return 0;
}
*/
