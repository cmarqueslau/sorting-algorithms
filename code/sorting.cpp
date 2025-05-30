#include <iostream>
#include "sorting.hpp"

void bubbleSort(vector<int> vector){

}
void selectionSort(vector<int>& vector){
	for (int i = 0; i < vector.size()-1; i++){
		int minimum = i;
		for (int j = i+1; j < vector.size(); j++){
			if(vector[minimum]>vector[j]) {
				minimum = j;
			}
		}
		int troca = vector[i];
		vector[i] = vector[minimum];
		vector[minimum] = troca;
	}
}

void insertionSort(vector<int> vector){
    
}

void bubbleSortOp(vector<int> vector){
    
}

void insertionSortOp(vector<int> vector){
    
}

int sequencialSearch(vector<int> vector, int elem){
	for (int i = 0; i < vector.size(); i++)
	{
		if(vector[i]==elem) return i; 
	}
	return -1;
}

int binarySearch(vector<int> vector, int elem){
	int start = 0;
	int end = vector.size()-1;
	while(start<=end){
		int half = (end-start)/2+start;
		if(elem>vector[half]) start = half;
		else if (elem<vector[half]) end = half;
		else {
			if(elem==vector[start]) return start;
			if(elem==vector[end]) return end;
			if(elem==vector[half]) return half;
		}
	}
}

;