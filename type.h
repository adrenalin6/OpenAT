#include <iostream>

using namespace std;

void typeSlow(unsigned long speed, const char *s) {
	int i = 0;
	while(s[i]!=0) {
		cout << s[i++];
		cout.flush();
		usleep(speed);
	}
}

//Solution by baavgai
//From "http://www.dreamincode.net/forums/topic/142047-typewriter-effect/"

// Example of Usage!
// #include "type.h"
//	int main() {
//	typeSlow(200000, "Hello World");
//	return 0;
//}
