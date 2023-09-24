#include <iostream>
using namespace std;
main()
{
	string name;
	float target, days;
	cout << "Enter the Name of the Person: ";
	cin >> name;
	cout << "Enter the target weight loss in kilograms: ";
	cin >> target;
	days = 15 * target;
	cout << name << " will need " << days << " days to lose " << target << " kg of weight by following the doctor's suggestions";
}