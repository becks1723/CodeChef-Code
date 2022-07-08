//Completed: 07/08/2022
//Language: C++17

/*According to a recent survey, Biryani is the most ordered food. Chef wants to learn how to make world-class Biryani from a MasterChef. Chef will be required to attend the MasterChef's classes for XX weeks, and the cost of classes per week is YY coins. What is the total amount of money that Chef will have to pay?*/


//MY CODE:
#include <iostream>
using namespace std;

int main() {
    int test = 0;
    cin >> test;
    for(int i = 0; i < test; i++) {
        int num = 0;
        int cost = 0;
        cin >> num >> cost;
        int total = num * cost;
        cout << total << "\n";
    }
	return 0;
}
