#include <iostream>
#include <string>
#include "queue.cpp"

using namespace std;

int main() {

	queue<string> q;
	string value;
	char choice;

	do {
		cout << "E - Enqueue\nD - Dequeue\ne - Empty\nQ - Quit\n\n";
		cin >> choice;
		switch (choice) {
		case 'E':
			cout << "Enter a value: ";
			cin.ignore();
			getline(cin, value);
			q.enqueue(value);
			break;
		case 'D':
			cout << q.dequeue() << endl;
			break;
		case 'e':
			q.empty();
			break;
		case 'Q':
			continue;
		default:
			cout << "Enter a valid command.\n";
		}
	} while (choice != 'Q');
	
	return 0;
}