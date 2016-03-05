#include <iostream>
#include <string>
using namespace std;

void hello_world();

int main()
{
	hello_world();

	return 0;
}

void hello_world()
{
	string hello_world = "Hello world!\n";
	cout << hello_world;

	return;
}
