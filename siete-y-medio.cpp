#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <ctime>
#include <cstdlib>
#include "cards.h"
using namespace std;


int main() {
/*  Card A, B, C;
	Player P(100, A);
	P.addcard(B);
	P.get_hand().printhand();
	cout<<P.get_hand().getscore()<<endl;
	Hand H(A);
	H.push_back_hand(B);
	H.push_back_hand(C);
	H.printhand();
	cout<<H.getscore();
*/
	Card K;
	Player You(100,K);
	while (You.get_money() > 0)
	{
		cout << "You have $" << You.get_money() << ". Enter bet:" << endl;
		int bet;
		cin >> bet;
		while (bet > You.get_money()) {
			cout << "You do not have enough money, bet a smaller amount!" << endl;
			cin >> bet;
		}
		cout << "Your cards:" << endl;
		You.get_hand().printhand();
		cout << "Your total is " << You.get_hand().getscore() << ". Do you want another card (y/n)?" << endl;
		string yesorno;
		cin >> yesorno;
		while ((yesorno != "y") && (yesorno != "n"))
		{
			cout << "Invalid input, you should only answer y or n" << endl;
			cin.clear();
			cin >> yesorno;
		}
		while (yesorno == "y")
		{
			Card C;
			You.addcard(C);
			cout << "New card:" << endl;
			cout << C.get_spanish_rank()<<endl<<endl;
			if (You.get_hand().getscore() > 7.5)
			{
				You.change_money(-bet);
				cout << "You lose! You now have $" << You.get_money() << endl;
			}
			else
			{
				cout << "Your total is " << You.get_hand().getscore() << ".Do you want another card(y / n) ?" << endl;
				cin >> yesorno;
			}
		}
		Card C;
		Hand dealer(C);
		while (dealer.getscore() < 5.5)
		{
			Card D;
			dealer.push_back_hand(D);
		}
		if (dealer.getscore() > 7.5)
		{
			cout << "The dealer's total is " << dealer.getscore() << endl << endl;
			cout << "You win " << bet << "." << endl << endl;
			You.change_money(bet);
		}
		else if(dealer.getscore() < You.get_hand().getscore())
		{
			cout << endl << endl << "You win " << bet << endl;
			You.change_money(bet);
		}
		else if (dealer.getscore() > You.get_hand().getscore())
		{
			You.change_money(-bet);
			cout << "You lose! You now have $" << You.get_money() << endl;
		}
		else
		{
			cout << "It's a dual!" << endl;
		}



	}
	
	cout << "You are so poor now, earn more money and come later!" << endl;


/*	Card test1, test2;
	Hand testhand(test1);
	Player player1(100);
	player1.addinitialcard(test1);
	player1.get_hand().printhand();
	player1.addcard(test2);
	player1.get_hand().printhand();
	cout<<player1.get_money()<<endl;
	player1.change_money(-200);
	cout << player1.get_money() << endl;
	*/
	cin.get();
	cin.get();
	return 0;
}
