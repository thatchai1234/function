#include <iostream>
#include <time.h>
using namespace std;
int checkNum();
int num, c = 0;
int nrand;
int main()
{
	srand(time(NULL));
	nrand = 1 + rand() % 10;
	cout << "####Welcome to guessing number game####\n";
	cout << "Secret number has been chosen \n";
	do {
		c++;
		cout << "Guess the number (1 to 10): ";
		cin >> num;
		checkNum();
	} while (num != nrand);
}
int checkNum()
{
	if (num > nrand) {
		cout << "The secret number is lower \n";
	}
	if (num < nrand) {
		cout << "The secret number is higher \n";
	}
	if (num == nrand) {
		cout << "Congratulations! \n";
		cout << "The Secret number is " << nrand << endl;
		cout << "You made " << c << " guesses\n";
	}
	return (0);	
	system("pause");
}