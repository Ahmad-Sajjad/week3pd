#include <iostream>
using namespace std;
main(){
	int age;
	cout<<"Enter the person's age: ";
	cin>>age;
	int move;
	cout<<"Enter the number of times they've moved: ";
	cin>>move;
	int houses;
	houses = move + 1;
	int avg;
	avg = age/houses;
	cout<<"Average number of years lived in the same house: "<<avg;
}