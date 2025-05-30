#include <iostream>
#include <vector>
#include <stdlib.h>
#include "sorting.hpp"
void print_vector(vector<int> vector){
	for (int i : vector) cout << i << " ";
	cout << endl;
}
int main(){
	vector<int> vector = { 7, 2, 1, 8, 4, 5, 6, 44, 77, 3};
	selectionSort(vector);
	print_vector(vector);

};