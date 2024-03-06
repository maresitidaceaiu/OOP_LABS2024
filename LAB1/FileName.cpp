#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;

ifstream fin("FileName.txt");


int conversie(char* a) {
	int p = 1;
	int b = strlen(a);
	for (int i = 0; i < b - 1; i++) {
		p *= 10;
	}
	int s = 0;
	for (int i = 0; i < b; i++) {
		s += (a[i] - '0') * p;
		p /= 10;
	}
	return s;
	

}
int main() {
	char l[1024];
	int sum = 0;
	while (fin.getline(l, 1024)) {
		sum+=conversie(l);
	}
	cout << sum;
}

