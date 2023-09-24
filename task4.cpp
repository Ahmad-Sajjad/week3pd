#include <iostream>
using namespace std;
main()
{
	float ic,pc,chances;
	cout<<"Enter Imposter Count: ";
	cin>>ic;
	cout<<"Enter Player Count: ";
	cin>>pc;
	chances = 100 * (ic/pc);
	cout<<"Chance of being an imposter: "<<chances<<"%";

}