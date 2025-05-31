#include <iostream>
#include <vector>
#include <stdlib.h>
#include "sorting.hpp"
#include "data_generator.hpp"
#include <chrono>   
using namespace std::chrono;
void diagnosis(vector<int> vector,  void(*func)(std::vector<int>&), string nome){
	cout << nome << endl;
	auto start = steady_clock::now();
	func(vector);
	auto end = steady_clock::now();
	auto elapsed = end-start;
	cout << duration_cast<duration<double>>(elapsed).count() << " segundos" << endl;
}

int main(){
	srand(time(NULL));
	// ARQUIVO SMALL
	cout << "ARQUIVO SMALL ~1 segundo calibrado pelo Insertion Sort" << endl;
	writeVectorInFile("../data/small_file.bin", 25000);
	vector<int> vectorSmall = writeVectorFromFile("../data/small_file.bin",  25000);
	diagnosis(vectorSmall, bubbleSort, "BubbleSort time");
	diagnosis(vectorSmall, selectionSort, "SelectionSort time");
	diagnosis(vectorSmall, insertionSort, "InsertionSort time");
	diagnosis(vectorSmall, bubbleSortOp, "BubbleSortOp time");
	diagnosis(vectorSmall, selectionSortOp, "SelectionSortOp time");
	cout << endl;

	// ARQUIVO MEDIO
	cout << "ARQUIVO MEDIUM ~30 segundos calibrado pelo Insertion Sort" << endl;
	writeVectorInFile("../data/medium_file.bin", 100000);
	vector<int> vectorMedium = writeVectorFromFile("../data/medium_file.bin",  100000);
	diagnosis(vectorMedium, bubbleSort, "BubbleSort time");
	diagnosis(vectorMedium, selectionSort, "SelectionSort time");
	diagnosis(vectorMedium, insertionSort, "InsertionSort time");
	diagnosis(vectorMedium, bubbleSortOp, "BubbleSortOp time");
	diagnosis(vectorMedium, selectionSortOp, "SelectionSortOp time");
	cout << endl;


	// ARQUIVOS SMALL
	cout << "ARQUIVO LARGE ~180 segundos calibrado pelo Insertion Sort" << endl;
	writeVectorInFile("../data/large_file.bin", 250000);
	vector<int> vectorLarge = writeVectorFromFile("../data/large_file.bin",  250000);
	diagnosis(vectorLarge, bubbleSort, "BubbleSort time");
	diagnosis(vectorLarge, selectionSort, "SelectionSort time");
	diagnosis(vectorLarge, insertionSort, "InsertionSort time");
	diagnosis(vectorLarge, bubbleSortOp, "BubbleSortOp time");
	diagnosis(vectorLarge, selectionSortOp, "SelectionSortOp time");
	cout << endl;


};