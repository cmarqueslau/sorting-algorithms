#include <iostream>
#include <vector>
#include <stdlib.h>
#include "sorting.hpp"
void print_vector(vector<int> vector){
	for (int i : vector) cout << i << " ";
	cout << endl;
}
int main(){
	vector<int> vector = { 1, 2, 3, 4, 5, 6, 7, 8};
	selectionSortOp(vector);
	print_vector(vector);

};