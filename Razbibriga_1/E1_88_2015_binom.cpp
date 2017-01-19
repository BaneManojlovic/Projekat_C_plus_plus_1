/*#include <iostream>
using namespace std;

int fakt(int n) {
    int m=1;
    for(int i=1; i<=n; i++){
        m = m * i;
    }
    return m;
}

int formula(int n, int k)
{
    return fakt(n)/fakt(k)/fakt(n-k);
}

int main()
{
    cout << "------------------------------------------------";
    char odgovor;
    do
    {
    cout << "\nUnesite pozitivan ceo broj (stepen binoma): " ;
    int n;
    cin >> n;
    cout << "(a+b)^" << n << " = " ;
    cout << "a^" << n << " + " ;
    //-----------------------------------------------
    for(int k =1; k < n; ++k)
    {
        int coef = formula(n, k);
        int deg1 = n - k;
        int deg2 = k;
        cout << coef << "a";
        if( deg1 != 1)
        {
         cout << "^" << deg1;
        }
        cout << "b";
        if(deg2 != 1)
        {
             cout << "^" << deg2;
        }
      cout << " + ";
    }
    //-------------------------------------------------------------
    cout << "b^" << n << endl;

    cout << "\nDa li zelite da ponovite unos? [d/n]";
    cin >> odgovor;
    }while(odgovor == 'D' || odgovor == 'd');
    cout << "Kraj programa!" << endl;
    cout << "------------------------------------------------\n" << endl;
    return 0;
}

*/
