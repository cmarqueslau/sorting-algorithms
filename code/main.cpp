#include <iostream>
#include <vector>
#include <stdlib.h>
#include "sorting.hpp"
#include "data_generator.hpp"
#include <chrono>   
using namespace std::chrono;

#define GREEN "\e[38;5;29m"
#define FUCHSIA "\e[35;1m"
#define YELLOW "\e[93;1m"
#define WHITE "\e[;0m"

void diagnosis(vector<int>& vector,  pair<long long, long long>(*func)(std::vector<int>&), string nome){
	cout << FUCHSIA << nome << " -> "<< WHITE;
	auto start = steady_clock::now();
	auto result = func(vector);
	auto end = steady_clock::now();
	auto elapsed = end-start;
	auto duration = duration_cast<nanoseconds>(elapsed).count();
	double seconds_avg = static_cast<double>(duration) / 1e9;
	cout << seconds_avg << " segundos" << endl;
	cout << GREEN <<  "Comparisons -> " << WHITE << result.first << endl;
	cout << GREEN << "Swaps -> " << WHITE << result.second << endl;
}

void print_vector(vector<int> vector){
	for (int i = 0; i < vector.size(); i++)
	{
		cout << vector[i] << " -> ";
	}
	cout<< endl;
}

int main(){
	srand(time(NULL));
	// ARQUIVO SMALL
	// short small = 11300;
	// cout << endl;
	// cout << YELLOW << "ARQUIVO SMALL ~1 segundo calibrado pelo Bubble Sort" << WHITE << endl;
	// //writeRandomVectorInFile("../data/small_file.bin", small);
	// cout << endl;
	pair<long long, long long> (*funcs[])(std::vector<int>&) = {bubbleSort, bubbleSortOp, selectionSort, selectionSortOp, insertionSort};
	vector<string> names = {"BubbleSort", "BubbleSortOp", "SelectionSort", "SelectionSortOp", "InsertionSort"};
	// vector<int> vectorSmall;
	// for (short i = 0; i < 5; i++)
	// {
	// 	vectorSmall = writeVectorFromFile("../data/small_file.bin",  small);
	// 	diagnosis(vectorSmall, funcs[i], names[i]+" time");
	// 	cout << endl;
		
	// }
	////writeVectorInFile("../data/small_file_ordered.bin", vectorSmall);
	// cout << endl;


	// // ARQUIVO MEDIO
	// unsigned short medium = 59000;
	// cout << endl;
	// cout << YELLOW << "ARQUIVO MEDIUM ~30 segundos calibrado pelo Bubble Sort" << WHITE << endl;
	// //writeRandomVectorInFile("../data/medium_file.bin", medium);
	// cout << endl;
	// vector<int> vectorMedium;
	// for (short i = 0; i < 5; i++)
	// {
	// 	vectorMedium = writeVectorFromFile("../data/medium_file.bin",  medium);
	// 	diagnosis(vectorMedium, funcs[i], names[i]+" time");
	// 	cout << endl;
		
	// }
	// //writeVectorInFile("../data/medium_file_ordered.bin", vectorMedium);
	// cout << endl;

	// ARQUIVOS LARGE
	int large = 156320;
	cout << endl;
	cout << YELLOW << "ARQUIVO LARGE ~180 segundos calibrado pelo Bubble Sort" << WHITE << endl;
	writeRandomVectorInFile("../data/large_file.bin", large);
	cout << endl;
	vector<int> vectorLarge;
	for (short i = 0; i < 5; i++)
	{
		vectorLarge = writeVectorFromFile("../data/large_file.bin", large);
		diagnosis(vectorLarge, funcs[i], names[i]+" time");
		cout << endl;
		
	}
	writeVectorInFile("../data/large_file_ordered.bin", vectorLarge);


};