#include <iostream>

using namespace std;

int main()
{
	char answer;
	cout <<"Is it raining? [y=yes ] : " << endl;
	cin >> answer;
	if (answer == 'y') {
		cout << "Get an umbrella.";
	}
	else {
		cout << "Invalid input";
	}
	return 0;
}