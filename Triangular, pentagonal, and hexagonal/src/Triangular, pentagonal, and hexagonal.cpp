// https://projecteuler.net/problem=45

#include <iostream>
using namespace std;

#define SIZE 1000000

int main() {
	// http://stackoverflow.com/questions/216259/is-there-a-max-array-length-limit-in-c
	long long* triangle = new long long[SIZE];
	long long* pentagonal = new long long[SIZE];
	long long* hexagonal = new long long[SIZE];

	long long n;
	for(long long i = 0; i < SIZE; i++) {
		n = i+1;
		triangle[i] = n*(n+1)/2;
		pentagonal[i] = n*(3*n-1)/2;
		hexagonal[i] = n*(2*n-1);
	}

	for(long long t = 0; t < SIZE; t++) {
		for(long long p = 0; p < SIZE; p++) {
			if(triangle[t] == pentagonal[p]) {
				for(long long h = 0; h < SIZE; h++) {
					if(pentagonal[p] == hexagonal[h]) {
						std::cout << "T_" << t+1 << " = P_" << p+1 << " = H_" << h+1 << " -> " << triangle[t] << std::endl;
					}
				}
			}
		}
	}

	return 0;
}
