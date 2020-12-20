#include <iostream>
#include <iomanip>
using namespace std;
/*

void zapoln(char& symbol, int& ii)
{
	for (int i = 0; i < ii * 2; i++) cout<<symbol;
	cout << endl;
}
	

int main()
{
	const int row = 40;
	const int col = 50;
	char main[row][col];

	int i;
	char a = 'M';

	for (i = 0; i < col / 2; i++) {
		if (i == 0) continue;
		cout << "\t\t\t" << setw(col / 2 - i) << a;
		zapoln(a, i);
		if (i == (col/2-1)) {
			cout << "\t\t\t";
			for (int j = 0; j < col; j++)
				cout << a;
		}
	}
	cout << "\n\n\n\n\n\n\n";
} */
// треугольник
/*
int main()
{
	int a, b, c, d;
	cout << "Enter (a, b, c, d): ";
	cin >> a >> b >> c >> d;
	
	if (a % 2) cout << "a - odd number!" << endl;
	if (b % 2) cout << "b - odd number!" << endl;
	if (c % 2) cout << "c - odd number!" << endl;
	if (d % 2) cout << "d - odd number!" << endl;
	// или из всех сразу
	if (a % 2 || b % 2 || c % 2 || d % 2) cout << "There is odd number." << endl;

} */
// нечетные определяет (5 вариант)
/*
int main()  // Только для трехзначных чисел (и ниже)
{
	setlocale(LC_ALL, "ru");

	int i = 0;
	int a, b, c;
	int sum = 0;
	cout << "Введите число: "; cin >> i;
	for (int j = i, k = 1; j / k; k *= 10) {
		sum += (i % (k * 10)) / k;
		
		//a = (i % 1000) / 100;
		//b = (i % 100) / 10;
		//c = (i % 10) / 1;
	}
	
	//sum = a + b + c; 
	
	if (sum % 3) cout << "Сумма цифр не делится на 3!";
	else cout << "Введенное число делится на 3, т.к. сумма его цифр делится на 3. Результат: " << (double)i / 3 <<'.'<< endl;

	return 0;
} */
//  число делится на 3 если сумма цифр делится на 3 (10 вариант)
/*
int sum1 (int paa, int pbb, int pcc)
{
	int sum = paa + pbb + pcc;
	return sum;
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

		if (a == 0 && b == 0 && c == 0) cout << " ERROR " << "\n\n\n";
		else cout << "Sum of the numbers: " << sum1(aa, bb, cc) << "\n\n\n";

	return 0;
} */
// доп задачи
