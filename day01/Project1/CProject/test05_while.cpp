// date : 2024-02-21
// desc : while문

#include <iostream>

using namespace std;

int main()
{
	int i = 1;
	int sum = 0;
	while (i <= 100) {
		sum += i;
		i++;
	}
	cout << sum << endl;

	return 0;
}