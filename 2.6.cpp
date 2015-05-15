#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

template <typename Type>
inline Type Max(Type t1, Type t2)
	{ return t1 > t2 ? t1:t2;}

template <typename elemType>
inline elemType max(const vector<elemType> &vec)
	{return *max_element(vec.begin(),vec.end());}

template <typename arrayType>
inline arrayType max(const arrayType* parray, int size)
	{return *max_element(parray, parray + size);}

int main()
{
	string sarray[] = {"we", "were", "her"};
	vector<string> svec(sarray, sarray + 3);

	int iarray[] = {12, 3, 29};
	vector<int> ivec(iarray, iarray + 3);
	
	float farray[] = {2.3, 4.6, 0.3};
	vector<float> fvec(farray, farray + 3);
	
	int intmax = max(ivec);
	int intarray = max(iarray,3);
	int imax = Max(6,7);// be carefull STL max  
//	int imax = max(max(ivec), max(iarray,3));
//	float fmax = max(max(fvec), max(farray,3));
//	string smax = max(max(svec), max(sarray,3));

	cout << intmax << endl;
	cout << intarray << endl;
	cout << "imax: " << imax << endl;
//		 << "fmax: " << fmax << '\n'
//		 << "smax: " << smax << endl;
}
