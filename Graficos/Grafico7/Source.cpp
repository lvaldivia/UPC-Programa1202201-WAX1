#include <iostream>
using namespace std;

void main() {
	int i, j, n;
	int index = 0;
	int direction = 1;
	cin >> n;
	if (n > 10) {
		
	}
	else {
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= n - i; j++)
				cout << " ";
			direction = 1;
			index = 0;
			for (j = 1; j <= 2 * i - 1; j++)
			{
				
				index += 1 * direction;
				if (index == i) {
					direction *= -1;
				}
				cout << index;
			}
			cout << endl;

		}
	}
	
}