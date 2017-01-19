/*#include <iostream>
using namespace std;

int funkcija(int n, int k)
{
    if(k==0 || k==n)
    {
        return 1;
    }
    return funkcija(n-1, k-1) + funkcija(n-1, k);
}

int main()
{
    cout << "------------------------------------------------";
    char odgovor;
    do
    {
        int k, n;
        cout << "\nUnesite pozitivan ceo broj 'k': " ;
        cin >> k;
        cout << "Unesite pozitivan ceo broj 'n': " ;
        cin >> n;

        cout << "( " << k  << " nad " << n << " ) = " << funkcija(n, k) << endl;

        cout << "\nDa li zelite da ponovite unos? [d/n]";
        cin >> odgovor;
    }
    while(odgovor == 'D' || odgovor == 'd');
    cout << "Kraj programa!" << endl;
    cout << "------------------------------------------------\n" << endl;
    return 0;
}

*/
