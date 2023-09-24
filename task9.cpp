#include <iostream>
using namespace std;
main()
{ 
	int num;
	cout<<"Enter a 4-digit number: ";
	cin>>num;
	int mod1;
	mod1 = num%10;
	int num1;
	num1 = num/10;
	int mod2;
	mod2 = num1 % 10;
	int num2;
	num2 = num1/10;
	int mod3;
	mod3 = num2%10;
	int num3;
	num3 = num2/10;
	int mod4;
	mod4 = num3%10;
	int num4;
	num4 = mod4 + mod3 + mod2 + mod1;
	cout<<"Sum of the individual digits: "<<num4; 
		
	

}