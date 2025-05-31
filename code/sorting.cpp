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
			if(vector[j-1]>vector[j]) flag = 1;
		}
		if(!flag) break;
		int troca = vector[i];
		vector[i] = vector[minimum];
		vector[minimum] = troca;
	}
}
