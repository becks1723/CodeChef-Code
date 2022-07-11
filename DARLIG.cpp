//Completed: 7/11/2022
//Language: C++17


/*Tonmoy has a special torch. The torch has 4 levels numbered 1 to 4 and 2 states On and Off. Levels 1, 2 and 3 correspond to the On state while level 4 corresponds to the Off state.

The levels of the torch can be changed as:
Level 1 changes to level 2.
Level 2 changes to level 3.
Level 3 changes to level 4.
Level 4 changes to level 1.
Given the initial state as KK and the number of changes made in the levels as N, find the final state of the torch. If the final state cannot be determined, print Ambiguous instead.*/

//MY CODE:
#include <iostream>
using namespace std;

int main() {
	int cases = 0;
	cin >> cases;
	for(int x = 0; x < cases; x++) {
	    int changes = 0;
	    int start = 0;
	    cin >> changes >> start;
        int clicks = changes % 4;
	    if(start == 0) {
	        if (clicks != 4 && clicks != 0)
	            cout << "On\n";
	       else
	            cout << "Off\n";
	    }
	    if(start == 1) {
	        if(clicks == 0)
	            cout << "On\n";
	        else
	            cout << "Ambiguous\n";
	    }
	}
	return 0;
}
