#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <ctime>
#include <cstdlib>
#include "cards.h"
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
		cout << "Your total is: " + h1.get_value() << 
			". Do you want another card (y/n)? ";
		char ans;
		cin >> ans;
		h2.add_card();
		
		cout << "The dealer's total is " + h2.get_value();

		if (ans == 'y') {
			Card c2;
			h2.add_card(c2);
			cout << "New Card£º " << endl;
			printCard(c2);
		}
		break;
    }
	return 0;
	system("pause");
}
