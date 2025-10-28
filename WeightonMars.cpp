#include <iostream>
using namespace std;
int main() {
	double weight, marsWeight;
	cout << "Enter the item's weight (number only): ";
	cin >> weight;
	marsWeight = weight * 0.38; // convert to Mars weight
	cout << "The item's weight on Mars is: " << marsWeight << " pounds" << endl;
	return 0;

}