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
	testhand.push_back_hand(test2);
	testhand.printhand();
	cout << testhand.getscore();
	cin.get();
	return 0;
}
