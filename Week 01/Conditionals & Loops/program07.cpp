#include <iostream>
using namespace std;

int main()
{
	int i = 1;
	for (;;)
	{
		cout << "Value of i is :" << i << endl;
		if (i < 5)
		{
			cout << "babbar" << endl;
			i = i + 1;
		}
		else
		{
			break;
		}
	}

	cout << "Hi" << endl;

	return 0;
}