#include <iostream>
using namespace std;
main()
{
	string movie;
	int adult,child,adult_sold,child_sold,charity,total,giveaway,remain;
	cout<<"Enter the movie name: ";
	cin>>movie;
	cout<<"Enter the adult ticket price: $";
	cin>>adult;
	cout<<"Enter the child ticket price: $";
	cin>>child;
	cout<<"Enter the number of adult tickets sold: ";
	cin>>adult_sold;
	cout<<"Enter the number of child tickets sold: ";
	cin>>child_sold;
	cout<<"Enter the percentage of the amount to be donated to charity: ";
	cin>>charity;
	cout<<endl;
	cout<<"Movie: "<<movie<<endl;
	total = (adult * adult_sold) + (child * child_sold);
	cout<<"Total amount generated from ticket sales: $"<<total<<endl;
	giveaway = total * charity/100;
	cout<<"Donation to charity ("<<charity<<"%): $"<<giveaway<<endl;
	remain = total - giveaway;
	cout<<"Remaining amount after donation: $"<<remain;

}