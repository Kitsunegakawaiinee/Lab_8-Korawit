#include<iostream>
using namespace std;

char before(char x){
	if (x > 'Z' || x < 'A')
	{
		return '0';
	}
	else if (x == 'A')
	{
		return 'Z';
	}
	else
	{
		return x-1;
	}

}

int main(){
	// char a = 'A';
	// cout << (int) a;
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
