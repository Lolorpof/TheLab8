#include<iostream>
using namespace std;

char before(char x){
	//Write your function definition here 
	//A(65) - Z(90)

	char temp = x - 1;
	if(temp == '@'){
		temp = 'Z';
	}
	if(temp < 64 || temp > 90){
		temp = '0';
	}

	return temp;
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
