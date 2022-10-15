#include <iostream>
using namespace std;

int otgovor;
int broiIzvikvaniq = 0;

int factGlobal;

int factoriel(int n) 
{
	unsigned number;
	if (n > 1) 
	{
		cout << "N: " << n << endl;
		number = n * factoriel(n - 1);
		cout << "Number: " << number << endl;
	}
	else {
		cout << "Bottom: " << n << endl;
		cout << endl;
		number = 1;
	}
	return number;
}

void GCD1(int A, int B) {
	if (A % B > 0) {
		cout << "CopyNumber: " << broiIzvikvaniq << " A: " << A << " " << "B: " << B << " Sinking" << endl;
		GCD1(B, A % B);
		cout << "CopyNumber: " << broiIzvikvaniq << " A: " << A << " " << "B: " << B << " Floating up" << endl;
	}
	else {
		cout << "Bottom: " << endl;
		otgovor = B;
	}
}

void GCD2(int A, int B) {
	broiIzvikvaniq++;
	if (A % B > 0) {
		cout << "CopyNumber: " << broiIzvikvaniq << " A: " << A << " " << "B: " << B << " Sinking" << endl;
		GCD2(B, A % B);
		broiIzvikvaniq--;
		cout << "CopyNumber: " << broiIzvikvaniq << " A: " << A << " " << "B: " << B << " Floating up" << endl;
	}
	else {
		cout << "Bottom: " << endl;
		otgovor = B;
	}
}

int main()
{
	/*int A, B;
	cin >> A >> B;
	GCD2(A, B);
	cout << "GCD: " << otgovor;
	*/

	//unsigned A;
	//cin >> A;
	//factoriel(A);



	return 0;
}

