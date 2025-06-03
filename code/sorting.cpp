#include "sorting.hpp"

pair<long long, long long> bubbleSort(vector<int>& vec){
	long long comp = 0;
	long long trocas = 0;
	for (size_t i = 0; i < vec.size(); i++){
		for (size_t j = 0; j < vec.size()-1-i; j++){
			comp++;
			if(vec[j]>vec[j+1]){
				trocas++;
				swap(vec[j], vec[j+1]);
			} 
		}
	}
	return {comp, trocas};

}

pair<long long, long long> selectionSort(vector<int>& vec){
	long long comp = 0;
	long long trocas = 0;
	for (size_t i = 0; i < vec.size()-1; i++){
		int minimum = i;
		for (size_t j = i+1; j < vec.size(); j++){
			comp++;
			if(vec[minimum]>vec[j]) {
				minimum = j;
			}
		}
		if(i!=minimum){
			trocas++;
			int troca = vec[i];
			vec[i] = vec[minimum];
			vec[minimum] = troca;
		}
	}
	return {comp, trocas};
}

pair<long long, long long> insertionSort(vector<int>& vec){
	long long comp = 0;
	long long trocas = 0;
    for (size_t i = 1; i < vec.size(); i++){
		int key = vec[i];
		int j = i-1;
		comp++;
		while (j >= 0 && key<vec[j]){
			comp++;
			vec[j+1] = vec[j];
			trocas++;
			j--;
		}
		trocas++;
		vec[j+1] = key;
	}
	return {comp, trocas};
}

pair<long long, long long> bubbleSortOp(vector<int>& vec){
	long long comp = 0;
	long long trocas = 0;
	for (size_t i = 0; i < vec.size(); i++){
		bool swaped = false;
		for (size_t j = 0; j < vec.size()-1-i; j++){
			comp++;
			if(vec[j]>vec[j+1]){
				trocas++;
				swap(vec[j], vec[j+1]);
				swaped = true;
			} 
		}
		if(!swaped) break;
	}
	return {comp, trocas};
}

pair<long long, long long> selectionSortOp(vector<int> &vec){
	long long comp = 0;
	long long trocas = 0;
	for (size_t i = 0; i < vec.size()-1; i++){
	    	bool flag = false;
		int minimum = i;
		for (size_t j = i+1; j < vec.size(); j++){
			comp++;
			if(vec[minimum]>vec[j]) {
				minimum = j;
			}
			if(vec[j-1]>vec[j]) flag = true;
		}
		if(!flag) break;
		if(i!=minimum){
			trocas++;
			int troca = vec[i];
			vec[i] = vec[minimum];
			vec[minimum] = troca;
		}
	}
	return {comp, trocas};
}

