// https://projecteuler.net/problem=39

#include <iostream>
#include <cmath>
using namespace std;
#define SIZE 1000

int main() {
	long long counter = 0;
	for(int onepence = 0; onepence <= 200/1; onepence++) {
		for(int twopence = 0; twopence <= 200/2; twopence++) {
			for(int fivepence = 0; fivepence <= 200/5; fivepence++) {
				for(int tenpence = 0; tenpence <= 200/10; tenpence++) {
					for(int twentypence = 0; twentypence <= 200/20; twentypence++) {
						for(int fiftypence = 0; fiftypence <= 200/50; fiftypence++) {
							for(int onehundredpence = 0; onehundredpence <= 200/100; onehundredpence++) {
								for(int twohundredpence = 0; twohundredpence <= 200/200; twohundredpence++) {
									if(onepence*1 + twopence*2 + fivepence*5 + tenpence*10 + twentypence*20 + fiftypence*50 +
											onehundredpence*100 + twohundredpence*200 == 200) {
										counter++;
									}
								}
							}
						}
					}
				}
			}
		}
	}

	cout << counter << endl;

	return 0;
}
