//Completed on: 7/11/2022
//Langauge: c++17

/*Karan likes the number 4 very much.

Impressed by the power of this number, Karan has begun to look for occurrences of four anywhere. He has a list of T integers, for each of them he wants to calculate the number of occurrences of the digit 4 in the decimal representation. He is too busy now, so please help him.*/

//MY CODE:
#include <iostream>
#include <string.h>

using namespace std;

int main() {
	int cases = 0;
	cin >> cases;
	for(int i = 0; i < cases; i++) {
	    int numInt = 0;
	    cin >> numInt;
	    string num = to_string(numInt);
	    int len = num.length();
	    int occ = 0;
	    char four = '4';
	    for(int x = 0; x < len; x++) {
	        if(four == num[x])
	           occ++;
	    }
	    cout << occ << "\n";
	}
	return 0;
}
