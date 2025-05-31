#include <iostream>
#include "find.hpp"
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