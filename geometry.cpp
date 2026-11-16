#include <iostream>

using namespace std;

int main() {
	const double PI = 3.14159;
	int choice;

	cout << "Geometry Calculator\n";
	cout << "1. Calculate the Area of a Circle\n";
	cout << "2. Calculate the Area of a Rectangle\n";
	cout << "3. Calculate the Area of a Triangle\n";
	cout << "4. Quit\n";
	cout << "Enter your choice (1-4): ";
	cin >> choice;

	if (choice == 1) {
		double radius;
		cout << "Enter the radius: ";
		cin >> radius;

		if (radius < 0) {
			cout << "Error: The radius cannot be negative.\n";
		} else {
			double area = PI * radius * radius;
			cout << "Area: " << area << '\n';
		}
	} else if (choice == 2) {
		double length;
		double width;
		cout << "Enter the length: ";
		cin >> length;
		cout << "Enter the width: ";
		cin >> width;

		if (length < 0 || width < 0) {
			cout << "Error: Length and width cannot be negative.\n";
		} else {
			double area = length * width;
			cout << "Area: " << area << '\n';
		}
	} else if (choice == 3) {
		double base;
		double height;
		cout << "Enter the base: ";
		cin >> base;
		cout << "Enter the height: ";
		cin >> height;

		if (base < 0 || height < 0) {
			cout << "Error: Base and height cannot be negative.\n";
		} else {
			double area = base * height * 0.5;
			cout << "Area: " << area << '\n';
		}
	} else if (choice == 4) {
		return 0;
	} else {
		cout << "Error: Please enter a choice from 1 through 4.\n";
	}

	return 0;
}
