//Completed: 7/13/2022
//Language: C++14

/*Bears love candies and games involving eating them. Limak and Bob play the following game. Limak eats 1 candy, then Bob eats 2 candies, then Limak eats 3 candies, then Bob eats 4 candies, and so on. Once someone can't eat what he is supposed to eat, he loses.

Limak can eat at most A candies in total (otherwise he would become sick), while Bob can eat at most B candies in total. Who will win the game? Print "Limak" or "Bob" accordingly.*/

//my code:
#include <iostream>
using namespace std;

int main() {
	int cases = 0;
	cin >> cases;
	for(int x = 0; x < cases; x++) {
	    int limak = 0;
	    int bob = 0;
	    cin >> limak >> bob;
	    int limakTotal = 0;
	    int bobTotal = 0;
	    int total = 0;
	    if(limak > bob)
	        total = limak;
	   else
	        total = bob;
	   for(int y = 0; y <= total+1; y++) {
	       if(y % 2 == 1) {
	            limakTotal = limakTotal + y;
	            if(limakTotal > limak) {
	                cout << "Bob\n";
	                break;
	            }
	       }
	       else {
	            bobTotal = bobTotal + y;
	            if(bobTotal > bob) {
	                cout << "Limak\n";
	                break;
	            }
	       }
	   }
	}
	return 0;
}
