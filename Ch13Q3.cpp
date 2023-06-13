#include<iostream>
using namespace std;

template <class T>
T minimum(T val1, T val2)
{
	if (val1 < val2)
		return val1;
	else if (val1 > val2)
		return val2;
	else
		return val1;
}

template <class M>
M maximum(M val1, M val2)
{
	if (val1 > val2)
		return val1;
	else if (val1 < val2)
		return val2;
	else
		return val1;
}

int main()
{
	int i1, i2;
	double d1, d2;

	i1 = 20;
	i2 = 28;
	d1 = 22.235;
	d2 = 18.976;

	cout << "Int 1: " << i1 << endl;
	cout << "Int 2: " << i2 << endl;
	cout << "Smaller int: " << minimum(i1, i2) << endl;
	cout << "Larger int: " << maximum(i1, i2) << endl;
	
	cout << " " << endl;
	cout << "Double 1: " << d1 << endl;
	cout << "Double 2: " << d2 << endl;
	cout << "Smaller double: " << minimum(d1, d2) << endl;
	cout << "Larger double: " << maximum(d1, d2) << endl;

}