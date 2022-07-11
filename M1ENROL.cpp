//Completed on: 7/11/2022
//Language: C++17

/*For the upcoming semester, the admins of your university decided to keep a total of XX seats for the MATH-1 course. A student interest survey was conducted by the admins and it was found that YY students were interested in taking up the MATH-1 course.
Find the minimum number of extra seats that the admins need to add into the MATH-1 course to make sure that every student who is interested in taking the course would be able to do so.*/


//MY CODE:
#include <iostream>
using namespace std;

int main() {
	int cases = 0;
	cin >> cases;
	for(int i = 0; i < cases; i++) {
	    int seats = 0;
	    int students = 0;
	    cin >> seats >> students;
	    if(seats > students)
	        cout << 0 << "\n";
	    else {
	        int total = students - seats;
	        cout << total << "\n";
	    }
	}
	return 0;
}
