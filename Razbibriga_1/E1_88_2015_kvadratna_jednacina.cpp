/*#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    cout << "----------------------------------------------------------------------";
    char odgovor;
    do
    {
        cout << "\nProgram koji resava kvadratnu jednacinu tipa: a*x^2 + b*x + c = 0 " << endl;
        double a, b, c, d, x, x1, x2;
        cout << "Unesite parametar 'a': ";
        cin >> a;
        cout << "Unesite parametar 'b': ";
        cin >> b;
        cout << "Unesite parametar 'c': ";
        cin >> c;
        d = b*b - 4*a*c;  //<--- Izracunavam diskriminantu - ono sto ide ispod korena!!!
        if( d < 0 )
        {
            cout << "Diskriminanta je negativna i resenja su kompleksni brojevi." << endl;
        }
        else if( d == 0)
        {
            x = x1 = x2 = ((-b)+0)/(2*a);
            cout << " x1 = x2 = " << x << "\n" << endl;
        }
        else
        {
            x1 = ((-b) - sqrt(d))/(2*a);
            x2 = ((-b) + sqrt(d))/(2*a);
            cout << " x1 = " << x1 << endl;
            cout << " x2 = " << x2 << endl;
        }

        cout << "\nDa li zelite da ponovite unos? [d/n] ";
        cin >> odgovor;
    }
    while(odgovor == 'D' || odgovor == 'd');
    cout << "Kraj programa!" << endl;
    cout << "----------------------------------------------------------------------\n" << endl;
    return 0;
}
*/
