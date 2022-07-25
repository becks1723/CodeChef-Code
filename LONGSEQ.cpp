//Completed: 7/25/2022
//Language: C++14

/*Chef has a number D containing only digits 0's and 1's. He wants to make the number to have all the digits same. For that, he will change exactly one digit, i.e. from 0 to 1 or from 1 to 0. If it is possible to make all digits equal (either all 0's or all 1's) by flipping exactly 1 digit then output "Yes", else print "No" (quotes for clarity)*/

#include <iostream>
using namespace std;

int main() {
	int cases = 0;
	cin >> cases;
	for(int x = 0; x < cases; x++) {
	    string num = "";
	    int ones = 0;
	    int zeros = 0;
	    cin >> num;
	    for(char c : num) {
	        if(c == '1')
	            ones++;
	        else
	            zeros++;
	    }
	    if(ones == 1 || zeros == 1)
	        cout << "Yes\n";
	    else
	        cout << "No\n";
	}
	return 0;
}
