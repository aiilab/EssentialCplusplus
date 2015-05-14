#include <iostream>
#include <fstream>
//#include <algorithm>
#include <string>

using namespace std;

int main()
{
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
	return 0;
}
