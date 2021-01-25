#include <iostream>
#include <string>
using namespace std;

enum class Colour // Scoped enumeration.
{
	Red,	// 0
	Blue,	// 1
};

enum class WebColour // Scoped enumeration.
{
	Pink,
	Green,
	Magenta,
	Red,
};

void paint(Colour colour)
{
	switch (colour)
	{
	case Colour::Red:
		cout << "I like red!\n";
		break;
	case Colour::Blue:
		cout << "House is painted [blue].\n";
		break;
	default:
		cout << "Not available!\n";
		break;
	}
}

int main() {
	paint(Colour::Red);
	paint(Colour::Blue);
}