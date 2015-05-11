#include<iostream>
#include<iomanip>
#include<cstring>
using namespace std;

int main()
{
	//allocate a fixed size memery
	const int num_size = 128;
	char user_name[num_size];
	const char* ptr_name = "zhangxuewu";
	cout << "Please input your name:";
	cin >> setw(num_size) >> user_name;
	switch (strlen(user_name))
	{
		case 127:
			cout << ">127 character \n";
		default:
			cout << "hello: " << user_name <<endl;
            cout << "my name: " << ptr_name <<endl;
			break;
	}
	cout << "pay attention to char* and char[]" <<endl;
}
