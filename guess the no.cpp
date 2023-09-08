#include <iostream>
#include <cstdlib>   
using namespace std;
int main()
{
	int sn = rand() % 100; // for random value
	int guess;
	int tryy = 0;
	
	cout<<"         Game: guess the number \n";
	
	do {
		cout <<"\nGuess the number b/w 1 to 100: ";
		cin >> guess;
		tryy++;

		if (guess < sn) 
		{
			cout <<"Too low try again.\n" ;
		}
		else if (guess > sn)
		{
			cout<<"Too high try again.\n";
		}

	} while (guess != sn);

		 cout<< "\nCongratulations!\nYou guessed the correct number: " << sn << endl;
		return 0;
}
