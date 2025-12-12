#include<iostream>
using namespace std;

char before(char x){
	int ascii_number_input = (int)x;
	int ascii_number_capital_A = (int)'A';
	int ascii_number_capital_Z = (int)'Z';
	int ascii_number_before_input;

	if (ascii_number_input == ascii_number_capital_A) {
		return 'Z';
	}
	if(ascii_number_input > ascii_number_capital_A && ascii_number_input <= ascii_number_capital_Z){
		ascii_number_before_input = ascii_number_input - 1;
		return (char)ascii_number_before_input;
	}
	else{
		return '0';
	}
}

int main(){
	//Test Case
	cout << before('A') << "\n";
	cout << before('B') << "\n";
	cout << before('P') << "\n";
	cout << before('T') << "\n";
	cout << before('Z') << "\n";
	cout << before('a') << "\n";
	cout << before('0') << "\n";
	cout << before('c') << "\n";
	return 0;
}
