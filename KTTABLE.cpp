//Completed on: 7/11/2022
//Language: C++14

/*The first line of the input contains an integer T denoting the number of test cases. The description of T test cases follows.

The first line of each test case contains a single integer N denoting the number of students.

The second line contains N space-separated integers A1, A2, ..., AN denoting the moments of time by when the corresponding student should finish cooking.

The third line contains N space-separated integers B1, B2, ..., BN denoting the time required for each of the students to cook.*/

//MY CODE: 
#include <iostream>
#include <vector>

using namespace std;

int main() {
	int cases = 0;
	cin >> cases;
	for(int i = 0; i < cases; i++) {
	    int num = 0;
	    cin >> num;
	    vector<int> timeAllowed;
	    vector<int> timeRequired;
	    int ableToCook = 0;
	    for(int x = 0; x < num; x++) {
	        int a = 0;
	        cin >> a;
	        timeAllowed.push_back(a);
	    }
	    for(int x = 0; x < num; x++) {
	        int a = 0;
	        cin >> a;
	        timeRequired.push_back(a);
	    }
	    if(timeRequired[0] <= timeAllowed[0])
	        ableToCook++;
	    for(int x = 1; x < num; x++) {
	        int totalTime = timeAllowed[x] - timeAllowed[x-1];
	        if(totalTime >= timeRequired[x])
	            ableToCook++;
	       
	    }
	    cout << ableToCook << "\n";
	        
	}
	return 0;
}
