#include <iostream>
using namespace std;

int main()
{
	// Inverted Numeric Half Pyramid
	
	int n;
	cin >> n;

	for (int row = 0; row < n; row = row + 1)
	{
		for (int col = 0; col < n - row; col = col + 1)
		{
			cout << col + 1 << " ";
		}
		cout << endl;
	}
	
	return 0;
}