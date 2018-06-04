#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <ctime>
#include <cstdlib>
#include "cards.h"
using namespace std;

void printCard(Card c1) {
	cout << "        " + c1.get_spanish_rank() + " de "
		+ c1.get_spanish_suit() + "        ("
		+ c1.get_english_rank() + " of "
		+ c1.get_english_suit() + " )." << endl;
}

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
		Card c1;
		h1.add_card(c1);
		printCard(c1);
		break;
    }
	system("pause");
}
