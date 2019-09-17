// Dynamic Name Box.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
	std::cout << "Enter two words separated by a space, then hit Enter: " << std::endl;
	string fname = "", lname ="";


	cin >> fname;
	cin >> lname;

	int name_size = fname.size() + lname.size() + 1;
	string s4(name_size, '-');


	// stores first number in v1, second in v2 
	cout << "+" << s4 << "+\n|" << fname << " " << lname << "|\n+" << s4 << "+" << endl;
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
