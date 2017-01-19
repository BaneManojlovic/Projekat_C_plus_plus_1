/*#include <iostream>
using namespace std;

int funkc(int x){
    if(x <= 1){
        return x;
    }else
        return funkc(x-1)+funkc(x-2);
}

int main()
{
    cout << "-----------------------------------------------------------------------";
    char odgovor;
    do
    {
    cout << "\nUnesite redni broj zeljenog elementa Fibonacijevog niza: ";
    int n;
    cin >> n;
    //------------ Verzija koja koristi rekurziju ----------------------------------------------------------
    cout << n << "-ti element Fibonacijevog niza je: " << funkc(n) << endl;
    cout << "Da li zelite da ponovite unos? [d/n]: ";
    cin >> odgovor;
    }while(odgovor == 'D' || odgovor == 'd');
    cout << "Kraj programa!" << endl;
    cout << "-----------------------------------------------------------------------" << endl;
    return 0;
}
*/
