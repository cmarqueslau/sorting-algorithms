#include <iostream>
#include "sorting.hpp"

void bubbleSort(vector<int>& vector){
	for (int i = 0; i < vector.size(); i++){
		for (int j = 0; j < vector.size()-1; j++){
			if(vector[j]>vector[j+1]) swap(vector[j], vector[j+1]);
		}
	}
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
void insertionSort(vector<int>& vector){
    for (int i = 1; i < vector.size(); i++){
		int key = vector[i];
		int j = i-1;
		while (j >= 0 && key<vector[j]){
			vector[j+1] = vector[j];
			j--;
		}
		vector[j+1] = key;
	}
}
void bubbleSortOp(vector<int> &vector){
	int swaped = 0;
    for (int i = 0; i < vector.size(); i++){
		for (int j = 0; j < vector.size()-1; j++){
			if(vector[j]>vector[j+1]){
				swap(vector[j], vector[j+1]);
				swaped = 1;
			} 
		}
		if(swaped==0) break;
	}
}
void selectionSortOp(vector<int> &vector){
	int flag = 0;
    for (int i = 0; i < vector.size()-1; i++){
		int minimum = i;
		for (int j = i+1; j < vector.size(); j++){
			if(vector[minimum]>vector[j]) {
				minimum = j;
			}
			cout << vector[j-1] << " > " << vector[j] << endl;
			if(vector[j-1]>vector[j]) flag = 1;
			cout << "flag = " << flag << endl;
		}
		if(!flag) break;
		int troca = vector[i];
		vector[i] = vector[minimum];
		vector[minimum] = troca;
	}
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
	return -1;
}

;