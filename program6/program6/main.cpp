#include <iostream>
#include <string>
#include <fstream>
using namespace std;


int main()
{
	ifstream infile;
	ofstream outfile;
	string filename;
	while (!infile.is_open())
	{
		cout << "Please enter the name of the input file."<<endl<<"Filename: ";
		cin >> filename;
		infile.open(filename);
	}
	cout <<"Please enter the name of the output file." << endl << "Filename: ";
	cin >> filename;
	outfile.open(filename);
	cout << "Processing Complete";

	int numstudents;
	infile >> numstudents;
	//Numstudents is now 6!




	return 0;
}