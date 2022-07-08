//Completed: 07/08/2022
//Language: c++17

/* Chef has planned that he will drink exactly XX liters of tea daily. He has an empty jar having a capacity of YY liters.
Chef can visit the tea shop to refill the jar. In each refill, the jar is completely filled to the brim and Chef is charged ZZ rupees.
Chef wonders what is the minimum amount of money he has to pay for drinking exactly XX liters of tea daily.
*/


//MY CODE:
#include <iostream>
using namespace std;

int main() {
	int testcases = 0;
	cin >> testcases;
	for(int i = 0; i < testcases; i++) {
	    int amountToDrink = 0;
	    int jar_capacity = 0;
	    int cost = 0;
	    int min = 0;
	    cin >> amountToDrink;
	    cin >> jar_capacity;
	    cin >> cost;
	    while(amountToDrink > 0){
	        min = min + cost;
	        amountToDrink = amountToDrink - jar_capacity;
	    }
	    cout << min << "\n";
	}
	return 0;
}
