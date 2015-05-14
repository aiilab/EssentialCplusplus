#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> ivec;
	int ival;
	int sum = 0;
	int ix = 0;
	int	icnt = 0;
	while (cin >> ival && icnt < 10)
	{
		ivec.push_back(ival);
		icnt ++;
	}

	cout << "vector size is " << ivec.size();

	for (sum = 0, ix = 0; ix < ivec.size(); ix++)
	{
		sum += ivec[ix];
	}

	int average = sum / ivec.size();
	cout << "the sum of " << ivec.size()
		<< " elements:" << sum
		<< ". Average:" << average << endl;
	return 0;
}
