/*#include <iostream>
using namespace std;

int prost(int x)
{
    for(int i=2; i<x; i++)
        if(x % i == 0)
            return 0; //nije prost

    return 1;
}

int main()
{
    cout << "----------------------------------------------------------";
    char odgovor;
    do
    {
    cout << "\nUnesite pozitivan ceo broj ciju faktorizaciju zelite: " ;
	int x, i = 2, prvi = 1;
	cin >> x;
    cout << x << " = ";
        while(x>1)
        {
            while(x%i==0)
            {
                if(prvi)
                {
                    cout << i ;
                    prvi = 0;
                }
                else
                    cout << " * " << i;
                x = x/i;
            }
            i++;

            while(!prost(i))
                i++;
	}
    cout << "\nDa li zelite da ponovite unos? [d/n] ";
    cin >> odgovor;
    }while(odgovor == 'D' || odgovor == 'd');
    cout << "Kraj programa!" << endl;
    cout << "----------------------------------------------------------\n" << endl;
    return 0;
}
*/
