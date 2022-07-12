//Completed on: 7/12/2022
//Language: C++14

/*Now that Chef has finished baking and frosting his cupcakes, it's time to package them. Chef has N cupcakes, and needs to decide how many cupcakes to place in each package. Each package must contain the same number of cupcakes. Chef will choose an integer A between 1 and N, inclusive, and place exactly A cupcakes into each package. Chef makes as many packages as possible. Chef then gets to eat the remaining cupcakes. Chef enjoys eating cupcakes very much. Help Chef choose the package size A that will let him eat as many cupcakes as possible.*/

//MY CODE:
#include <iostream>
using namespace std;

int main() {
	int cases = 0;
	cin >> cases;
	int leftovers = 0;
	int package = 0;
	for(int x = 0; x < cases; x++) {
	    int cupcakes = 0;
	    cin >> cupcakes;
	    for(int y = 1; y <= cupcakes; y++) {
	        int rem = cupcakes % y;
	        if(rem >= leftovers) {
	            leftovers = rem;
	            package = y;
	        }
	    }
	    cout << package << "\n";
	}
	return 0;
}
