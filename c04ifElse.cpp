#include <iostream>

using namespace std;

int main()
{
	char answer;
	cout <<"Is it raining? " << endl;
	cout << "[y=yes,n= no]: ";
	cin >> answer;
	
	if( answer == 'y') {
		cout <<"Get an umbrella.";
	}
	else if ( answer == 'n') {
		cout << "It is sunny." ;
	}
	else {
		cout << "Invalid input." ;
	}
	return 0;
}