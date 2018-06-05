#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <ctime>
#include <cstdlib>
#include "cards.h"
#include <iomanip>
using namespace std;



int main(){
    int bet;
    Player p1(100);
    Player dealer(400);
    while(!p1.isEmpty() && !dealer.isEmpty()){
		Hand h1;
		Hand h2;
		cout << "you have $100. enter bet: ";
		cin>> bet;
    	cout << "Your cards:"<< endl;
		h1.add_card();
		cout << "Your total is: " << setprecision(2) << h1.get_value() <<
			". Do you want another card (y/n)? ";
		char ans;
		cin >> ans;

//		cout << "The dealer's total is " << setprecision(2) << h2.get_value();

		while (ans == 'y') {
		//	h2.add_card();
			cout << "New Card£º " << endl;
			h1.add_card();
			cout << "Your cards:" << endl;
			h1.show_all();
			cout << "Your total is: " << setprecision(2) << h1.get_value() <<"." << endl;
			if (h1.get_value() < 7.5) {
				cout << " Do you want another card (y/n)? ";
				cin >> ans;
			}else {
				ans == 'n';
			}
		}
		// Dealer gets first card.
		cout << "Dealer's cards:";
		h2.add_card();
		cout << "The dealer's total is " << setprecision(2) << 
				h2.get_value()<<"."<<endl;

		// check if dealer needs to get card
		while (h2.get_value() < 5.5) {
			cout << "New Card£º " << endl;
			h2.add_card();
			cout << "Dealer's cards:" << endl;
			h2.show_all();
			cout << "The dealer's total is " << setprecision(2) << 
				h2.get_value() <<"." <<endl;
		}

		break;
    }
	system("pause");
}
