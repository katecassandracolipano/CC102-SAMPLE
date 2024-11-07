#include <iostream>

using namespace std;

int main()
{
	char answer;
	cout << "Is it raining? [y/n]: ";
	cin >> answer;
	if (answer == 'y') {
		cout << "Get an umbrella";
	}
	return 0;
}