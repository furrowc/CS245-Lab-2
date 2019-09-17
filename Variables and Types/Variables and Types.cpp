// Variables and Types.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using std::cout;
using std::endl;

int main()
{
	int max_points = 400;
	cout << "You can earn " << max_points << " points in this course" << endl;

	const double passing_percentage = .6;
	int passing_grade = passing_percentage * max_points;
	cout << "You need atleast " << passing_grade << " points to pass this course. " << endl;

	int * pass_point = &max_points;
	int i_will_earn = 360;
	cout << "I beleave I will earn " << i_will_earn << " points in this course" << endl;

	bool boolean = i_will_earn < passing_grade;

	if (boolean) {

		cout << "I will not pass this course." << endl;
	}
	else {

		cout << "I will pass this course" << endl;
	}

	


	cout << "'pass_point' points to address " << pass_point << endl;
	cout << "'pass_point' points to the value " << *pass_point << endl;
	pass_point = &passing_grade;
	cout << "'pass_point' now points to address " << pass_point << endl;
	cout << "'pass_point' now points to the value " << *pass_point << endl;

	cout << "the size of signed int is " << sizeof(signed) << " bytes." << endl;
	cout << "the size of an unsigned int is " << sizeof(unsigned) << " bytes." << endl;
	cout << "the size of a double is " << sizeof(double) << " bytes." << endl;



}

/
