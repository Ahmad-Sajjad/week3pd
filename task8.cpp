#include <iostream>
using namespace std;
main()
{
	float veg_price;
	cout<<"Enter vegetable price per kilogram (in coins): ";
	cin>>veg_price;
	float fruit_price;
	cout<<"Enter fruit price per kilogram (in coins): ";
	cin>>fruit_price;
	float veg_weight;
	cout<<"Enter total kilograms of vegetables: ";
	cin>>veg_weight;
	float fruit_weight;
	cout<<"Enter total kilograms of fruits: ";
	cin>>fruit_weight;
	float total;
	total = (veg_price * veg_weight) + (fruit_price * fruit_weight);
	float rupee;
	rupee = total/1.94; 
	cout<<"Total earnings in Rupees (Rps): "<<rupee;
}