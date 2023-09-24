#include <iostream>
using namespace std;
main()
{
	int min,frames,Total;
	cout<<"Number of Minutes: ";
	cin>>min;
	cout<<"Frames per Second: ";
	cin>>frames;
	Total = (min * 60) * frames;
	cout<<"Total Number of Frames: "<<Total;

}