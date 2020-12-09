#include <iostream>

using namespace std;

template <class T>
T half(T n)
{
	return n / 2;
}

int half(int c)
{
	float result;
	result = static_cast<double>(c) / 2;
	return round(result);
}

int main()
{
	double a = 7.0;
	float b = 5.0f;
	int c = 3;

	cout << half(a) << endl;
	cout << half(b) << endl;
	cout << half(c) << endl;
}