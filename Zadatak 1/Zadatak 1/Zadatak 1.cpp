//Zadata 1 - Napraviti kalkulator osnovnih aritmetičkih operacija. Ulaz treba da se učitava iz datoteke ulaz.in.
//			  Datoteka je organizovana tako da znak u prvom redu označava operaciju a brojevi u drugom i trećem redu su operandi.
//			  Izlaz treba upisati  u izlaz.out datoteku. Ukoliko je drugi operand u operaciji deljenje 0 ispisati poruku greška.
//			  Svaka aritmetička operacija treba da bude napisana kao funkcija.

# include <iostream>

using namespace std;

int main()
{
	char op;
	float num1;
	float num2;

	cout << "Unesite operator + ili - ili * ili /: ";
	cin >> op;

	cout << endl << "Unesite prvi operand: ";
	cin >> num1;

	cout << endl << "Unesite drugi operand: ";
	cin >> num2;


	switch (op)
	{
	case '+':
		cout << num1 + num2;
		break;
	case '-':
		cout << num1 - num2;
		break;
	case '*':
		cout << num1 * num2;
		break;
	case '/':
		cout << num1 / num2;
		if (num2 == 0)
			{
			cout << "Greška" << endl;
			cout << "Unesite drugu vrijednost drugog operanda: ";
			cin >> num2;
			}
		break;
	default:
		// Ako operator nije +, -, * ili /, prokazuje se poruka o greki
		cout << endl << "Greška! operator nije korektan";
		break;
	}
	return 0;
}