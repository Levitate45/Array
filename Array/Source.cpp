#include <iostream>
using namespace std;
#define N 8
class arrayy
{
	double arr[N];
public:
	arrayy();
	// array(array&);
	void read();
	void print();
	void modif_el(int, double);
	double avg();
};
arrayy::arrayy()
{
	for (int i = 0; i < N; i++)
		arr[i] = 0;
}
/*
array::array(array& t)
{
for (int i=0; i<N; i++)
 arr[i]=t.arr[i];
}*/
void arrayy::read()
{
	for (int i = 0; i < N; i++)
	{
		cout << "arr[" << i << "]=";
		cin >> arr[i];
	}
}
void arrayy::print()
{
	cout << endl;
	for (int i = 0; i < N; i++)
		cout << "arr[" << i << "]=" << arr[i] << endl;
}
void arrayy::modif_el(int i, double val)
{
	if (i < N)
		arr[i] = val;
}
double arrayy::avg()
{
	double m = 0;
	for (int i = 0; i < N; i++)
		m += arr[i];
	m /= N;
	return m;
}
void main()
{
	arrayy t1;
	double avg;
	t1.print();
	cin.get();
	t1.read();
	t1.print();
	cin.get();
	avg = t1.avg();
	cout << "\nArithmetic mean: " << avg << endl;
	cin.get();
	arrayy t2(t1);
	t2.print();
	cin.get();
	t1.modif_el(3, 7.5);
	t1.print();
	cin.get();
}