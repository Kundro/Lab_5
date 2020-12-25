/* На шахматном поле в клетке (k, l) расположен слон. Угрожает ли он фигуре стоящей в клетке (m, n)? */
/*
#include <cstdlib>
#include <iostream>
using namespace std;

int main()
{
    int k, l;
    int m, n;
    cout << "Where is the Bishop's place on the field? (coordinates k and l): ";
    cin >> k >> l;
    cout << "Show where is the second chess piece. (coordinates m and n):";
    cin >> m >> n;
    
    if (m == k && l == n) cout << "WRONG! Two figures cannot stand on one place." << endl;
    else
    {
        for (int i = k, j = l; i <= 8, j <= 8; i++, j++)
            if (m == i && n == j) cout << "Threatens." << endl;
        for (int ii = k, jj = l; ii > 0, jj <= 8; ii--, jj++)
            if (m == ii && n == jj) cout << "Threatens." << endl;
        for (int iii = k, jjj = l; iii > 0, jjj > 0; iii--, jjj--)
            if (m == iii && n == jjj) cout << "Threatens." << endl;
        for (int iiii = k, jjjj = l; iiii <= 8, jjjj >0; iiii++, jjjj--)
            if (m == iiii && n == jjjj) cout << "Threatens." << endl;
    }
}
*/  