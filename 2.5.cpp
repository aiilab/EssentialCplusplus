#include <string>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

inline int max( int t1, int t2 )
	{ return t1 > t2 ? t1 : t2;}

inline float max ( float t1, float t2 )
	{ return t1 > t2 ? t1 : t2; }
	
inline string max (const string& t1, const string& t2)
	{ return t1 > t2 ? t1 : t2; }
	
inline int max (const vector<int>& vec)	
	{ return *max_element(vec.begin(), vec.end()); }

inline float max(const vector<float>& vec)
	{ return *max_element(vec.begin(), vec.end()); }

inline string max(const vector<string>& vec)
	{ return *max_element(vec.begin(), vec.end()); }
	
inline int max(const int* parray, int size)
	{ return *max_element(parray,parray + size); }
	
inline float max(const float* parray, int size)
	{ return *max_element(parray,parray + size); }

inline string max(const string* parray, int size)
	{ return *max_element(parray, parray + size); }

int main()
{
	string sarray[] = {"we", "were", "her"};
	vector<string> svec(sarray, sarray + 3);

	int iarray[] = {12, 3, 29};
	vector<int> ivec(iarray, iarray + 3);
	
	float farray[] = {2.3, 4.6, 0.3};
	vector<float> fvec(farray, farray + 3);


	int imax = max(max(ivec), max(iarray,3));
	float fmax = max(max(fvec), max(farray,3));
	string smax = max(max(svec), max(sarray,3));

	cout << "imax: " << imax << '\n'
		 << "fmax: " << fmax << '\n'
		 << "smax: " << smax << endl;
}
