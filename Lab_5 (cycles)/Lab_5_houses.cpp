/* ¬озможно ли на пр€моугольном участке застройки размером а на b метров разместить два дома размером р на q и r на s метров? */
/*
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	int aa, bb; int p, q, r, s;

	cout << "Enter area size: "; cin >> aa >> bb;
	const int a = aa, b = bb;
	cout << "Enter the size of first house: "; cin >> p >> q;
	cout << "Enter the size of second house: "; cin >> r >> s;

	if ((q + s) <= b && p <= a && r <= a) cout << "The houses are on the right place!" << endl;
	else 
	{
		if ((p + r) <= a && q <= b && s <= b) cout << "The houses are on the right place!" << endl;
		else
		{
			if ((q+r) <= b && p <= a && s <= a) cout << "The houses are on the right place!" << endl;
			else
			{
				if ((p+s) <= b && q <= a && r <= a) cout << "The houses are on the right place!" << endl;
				else
				{
					if ((p+r) <= b && q <= a && s <= a) cout << "The houses are on the right place!" << endl;
					else
					{
						if ((q + s) <= a && p <= b && r <= b) cout << "The houses are on the right place!" << endl;
						else cout << "Impossible to place houses!" << endl;
					}
				}
			}
		}
	}
	return 0;
}
*/