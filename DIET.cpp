//Completed: 7/12/2022
//Language: C++14

/*Chef decided to go on a diet during the following N days (numbered 1 through N). Part of the diet plan is to eat K grams of protein during each day. For each valid i, Chef wants to buy A_i grams of protein in the morning of the i-th day and then eat K grams of protein as part of his dinner. If he has any protein remaining, he can store it and use it in later dinners. Initially, Chef is storing 0 grams of protein.

Determine whether Chef will have enough protein all the time during his diet. In case he will not have enough, find the first day on which Chef will be unable to eat KK grams of protein.*/

//my code: 
#include <iostream>
#include <vector>
using namespace std;

int main() {
	int cases = 0;
	cin >> cases;
	for(int i = 0; i < cases; i++) {
	    int days = 0;
	    int protein = 0;
	    int proteinRem = 0;
	    bool enough = true;
	    int dayNotEno = 0;
	    cin >> days >> protein;
	    vector<int> proteinBrought;
        for(int x = 0; x < days; x++) {
            int a;
            cin >> a;
            proteinBrought.push_back(a);
        }
        for(int y = 1; y <= days; y++) {
            proteinRem = proteinRem + proteinBrought[y-1];
            proteinRem = proteinRem - protein;
            if(proteinRem < 0) {
                enough = false;
                dayNotEno = y;
                break;
            }
        }
	    if(!enough) 
	        cout << "NO " << dayNotEno << "\n";
	    else 
	        cout << "YES\n";
	}
	return 0;
}
