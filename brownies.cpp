// brownies.cpp - program to determine how many brownies will fit in a particularly sized pan.
#include <iostream>
using namespace std;

int main()
{
	// initializes variables
	int length;
	int width;
	int sm_brownie = 1;
	int lg_brownie = 2;

	// asks for input and defines pan_area
	cout << "Please enter the length and width of the baking pan, in inches, seperated by a space.\n";
	cin >> length >> width;
	int pan_area = length * width;

	// prints output and calculates data
	cout << "The pan is " << length << " inches X " << width << " inches. It has a surface area of " << pan_area << " inches.\n";
	cout << pan_area / sm_brownie << " small, 1 inch square brownies, will fit in this sized pan.\n";
	cout << pan_area / lg_brownie << " large, 2 inch square brownies, will fit in this sized pan.\n";

	return 0;
}