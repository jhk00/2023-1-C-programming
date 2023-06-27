#include <iostream>
using namespace std;
int main() {
	int* p;
	p = new int;

	if (!p) {
		cout << "error"
			return 0;
	}
	*p = 5;
}