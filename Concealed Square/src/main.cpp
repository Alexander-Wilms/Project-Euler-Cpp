// https://projecteuler.net/problem=206

#include <iostream>
#include <cmath>
#include <string>
#include <sstream>

#define SIZE 1000

template<typename T> std::string ToString(T val) {
	std::stringstream stream;
	stream << val;
	return stream.str();
}

int main() {
	long long guessed_base = sqrt(1020304050607080900);
	std::cout << guessed_base << std::endl;
	// last digit is 0 -> last digit of base must be 0
	long long base = guessed_base - guessed_base%10;
	std::cout << base << std::endl;
	long long square = 0;
	bool done = false;
	std::string tmp;

	while(!done) {
		//square = pow(base,2);
		square = base*base;
		if(square >= 1020304050607080900) {
			tmp = ToString(square);

			// all of the numbers will have a 1 as first digit, so it's more
			// effective to filter by the last digit first
			if(tmp.at(18) == '0' &&
					tmp.at(16) == '9' &&
					tmp.at(14) == '8' &&
					tmp.at(12) == '7' &&
					tmp.at(10) == '6' &&
					tmp.at(8) == '5' &&
					tmp.at(6) == '4' &&
					tmp.at(4) == '3' &&
					tmp.at(2) == '2' &&
					tmp.at(0) == '1') {
				std::cout << tmp << std::endl;
				std::cout << base << std::endl;
				done = true;
			}
		}
		base+=10;
	}

	return 0;
}
