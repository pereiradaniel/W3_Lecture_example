#include <iostream>
#include <string>
using namespace std;

enum Colour
{
	Red,	// 0
	Blue,	// 1
};

void paint(Colour colour)
{
	switch (colour)
	{
	case Red:
		cout << "I like red!\n";
		break;
	case Blue:
		cout << "House is painted [" << colour << "].\n";
		break;
	default:
		cout << "Not available!\n";
		break;
	}
}

int main() {
	paint(Red);
	paint(Blue);
}