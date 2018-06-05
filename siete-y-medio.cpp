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
    Player dealer(900);
	int num = 1;
    while(!p1.isEmpty() && !dealer.isEmpty()){
		Hand h1;
		Hand h2;
		//ostream std::std::cout;
		std::cout << "you have $" << p1.get_money() << ". enter bet: ";
		cin>> bet;
    	std::cout << "Your cards:"<< endl;
		h1.add_card(Card());
		std::cout << "Your total is: " << setprecision(2) << h1.get_value() <<
			". Do you want another card (y/n)? ";
		char ans;
		cin >> ans;

//		std::cout << "The dealer's total is " << setprecision(2) << h2.get_value();

		while (ans == 'y') {
		//	h2.add_card();
			std::cout << "New Card£º " << endl;
			h1.add_card(Card());
			std::cout << "Your cards:" << endl;
			h1.show_all();
			std::cout << "Your total is: " << setprecision(2) << h1.get_value() <<"." << endl;
			if (h1.get_value() < 7.5) {
				std::cout << " Do you want another card (y/n)? ";
				cin >> ans;
			}else {
				ans = 'n';
			}
		}
		// Dealer gets first card.
		std::cout << "Dealer's cards:"<< endl;
		h2.add_card(Card());
		std::cout << "The dealer's total is " << setprecision(2) << 
				h2.get_value()<<"."<<endl;

		// check if dealer needs to get card
		while (h2.get_value() < 5.5) {
			std::cout << "New Card£º " << endl;
			h2.add_card(Card());
			std::cout << "Dealer's cards:" << endl;
			h2.show_all();
			std::cout << "The dealer's total is " << setprecision(2) << 
				h2.get_value() <<"." <<endl;
		}
		// Result comparison
		std::cout << endl;
		if (h1.get_value()> 7.5 ) {
			std::cout << "You lose:" << bet << "!" << endl;
			p1.lose(bet);
			dealer.win(bet);
		}
		else if (h2.get_value() > 7.5) {
			std::cout << "You win:" << bet << "!" << endl;
			p1.win(bet);
			dealer.lose(bet);
		}
		else if (h1.get_value() < h2.get_value()) {
			std::cout << "You lose:" << bet << "!" << endl;
			p1.lose(bet);
			dealer.win(bet);
		}
		else if (h1.get_value() == h2.get_value()) {
			std::cout << "Nobody wins!" << endl;
		}
		else {
			std::cout << "You win:" << bet << "!" << endl;
			p1.win(bet);
			dealer.lose(bet);
		}


		// Reset hands
		h1.reset();
		h2.reset();
		std::cout << "=============================================" << endl;
		num++;
    }
//	system("pause");
	return 0;
}
