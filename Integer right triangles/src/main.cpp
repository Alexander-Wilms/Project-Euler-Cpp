// https://projecteuler.net/problem=39

#include <iostream>
#include <cmath>
using namespace std;
#define SIZE 1000

int main() {
	long long p = 1;
	long long* number_of_combinations = new long long[SIZE];

	for(int i = 0; i < SIZE; i++) {
		number_of_combinations[i] = 0;
	}

	for(long long a = 1; a < 1000; a++) {
		for(long long b = 1; b < 1000; b++) {
			for(long long c = 1; c < 1000; c++) {
				p = a + b + c;
				if(pow(a,2.)+pow(b,2.) == pow(c,2.) && p <= SIZE)
					number_of_combinations[p]++;
			}
		}
	}

	int max_number_of_combinations = 0;
	int index_of_max_number_of_combinations = 0;
	int i;

	for(i = 0; i < SIZE; i++) {
		if(number_of_combinations[i] > max_number_of_combinations) {
			max_number_of_combinations = number_of_combinations[i];
			index_of_max_number_of_combinations = i;
		}
	}

	cout << index_of_max_number_of_combinations << endl;

	return 0;
}
