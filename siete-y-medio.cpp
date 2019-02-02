#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <ctime>
#include <cstdlib>
#include "cards.h"
using namespace std;

// Global constants (if any)


// Non member functions declarations (if any)


// Non member functions implementations (if any)


// Stub for main
int main() {
	Card test1, test2;
	Hand testhand(test1);
	Player player1(100);
	player1.addinitialcard(test1);
	player1.get_hand().printhand();
	player1.addcard(test2);
	player1.get_hand().printhand();
	cout<<player1.get_money()<<endl;
	player1.change_money(-200);
	cout << player1.get_money() << endl;
	cin.get();
	return 0;
}
