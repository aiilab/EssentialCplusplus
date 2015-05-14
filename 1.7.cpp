#include <iostream>
#include <fstream>
//#include <algorithm>
#include <string>

using namespace std;

int main()
{
	// read file 
	cout << " read files \n";
	ifstream in_file("ifile.txt");
	if (!in_file)
	{	cerr << "oops! unable to open input file"; return -1; }
	string name;
	string gender;
	int age;
	while (in_file >> name)
	{
		cout << " the name is :" << name << endl;
		in_file >> gender >> age;
		cout << "the gender: " << gender << "; the ag :" << age << endl; 
	}

	// write file
	cout << "write files \n";
	ofstream out_files("ofiles.txt");
	if (!out_files)
	{ cerr << "oops, unable to open output files"; return -1; }
	int cnt = 3;
	while (cnt--)
	{
		cout << "name";
		cin >> name;
		cout << "age:";
		cin >> age;
		out_files << name << age << endl;
	}
	return 0;
}
