#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
	const char* cptr = "hello, world";
	char hello[] = "hello,eric";
	cout << cptr << endl;
	cout << hello << endl;
	ifstream infile("aaa.txt");
	if (!infile)
		{ cerr << "OOPS, unable to open file"; return -1;}
	string words;
	while (infile >> words)
	{
		cout << words << " ";	
	}
	cout << endl;
	return 0;
}
