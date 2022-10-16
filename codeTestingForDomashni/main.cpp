#include <iostream>
#include <vector>
using namespace std;

int otgovor;
int broiIzvikvaniq = 0;

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

int RecBinarySearch(int low, int high, int key, int masiv[])
{
	int mid;
	if (low == high) {
		if (masiv[1] == key)
		{
			return 1;
		}
		else 
		{
			return 0;
		}
	}
	else 
	{
		mid = low + (high - low) / 2;

		if (key == masiv[mid])
		{
			return mid;
		}
		if (key < masiv[mid]) 
		{
			return RecBinarySearch(low, mid - 1, key, masiv);
		}
		else
		{
			return RecBinarySearch(mid + 1, high, key, masiv);
		}
	}
}

int main()
{
	//int A, B;
	//cin >> A >> B;
	//GCD1(A, B);
	//cout << "GCD: " << otgovor;
	//

	/*unsigned A;
	cin >> A;
	factoriel(A);*/

	int masiv[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	
	int sz = sizeof(masiv) / sizeof(masiv[0]);
	int key = 5;
	int desiredNumber = RecBinarySearch(0, sz - 1, key, masiv);
	
	cout << desiredNumber;




	return 0;
}

