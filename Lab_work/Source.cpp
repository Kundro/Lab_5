/* #include <iostream>
#include <iomanip>
using namespace std;

int sum1(int* paa, int* pbb, int* pcc)
{
	int sum1 = *paa + *pbb + *pcc;
	return sum1;
}
int main()
{
	int* pa, * pb, * pc;
	int a = 0, b = 0, c = 0;
	cout << "Enter 3 numbers: ";
	cin >> a >> b >> c;


	// a % 5 && b % 5 && c % 5 ? cout << "ERROR!" << endl : cout << " OK! " << endl;	
	int aa, bb, cc;
	pa = &aa; pb = &bb; pc = &cc;
	if (a % 5) aa = 0;
	else aa = a;
	if (b % 5) bb = 0;
	else bb = b;
	if (c % 5) cc = 0;
	else cc = c;
	int MySum;
	if (a == 0 && b == 0 && c == 0) cout << " ERROR " << '\n\n\n';
	else {
		MySum = sum1(pa, pb, pc);
		cout << "Sum of the numbers: " << MySum << '\n\n\n';
	}

	return 0;
} */