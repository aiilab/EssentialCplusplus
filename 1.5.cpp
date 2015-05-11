#include <iostream>
#include <string>

using namespace std;

int main()
{
	string usr_name;
	cout << "please input your name: ";
	cin >> usr_name;

	switch (usr_name.size()){
		case 0:
			cout << "Ah, the usr with no name."
				<< "well, ok, hi, usr with no name \n";
			break;
		case 1:
			cout << "Ah, 1-character name?"
				<< "hello, " << usr_name << endl;
			break;
		default:
			cout << "hello, " << usr_name
				<< "-- happy to make your acquaintance! \n";
			break;
	}
	cout << " good bye"<< endl;
	return 0;

}
