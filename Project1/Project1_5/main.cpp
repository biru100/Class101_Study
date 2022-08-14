#include <iostream>
using namespace std;

int func(int n);

int main(void)
{
	bool check = true;

	for (int i = 0; i < 5; i++)
	{
		cout << "1" << endl;
	}
	
	return 0;
}

int func(int n)
{
	cout << n << " + 1 = " << n + 1 << endl;
	return n + 1;
}


