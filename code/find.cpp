#include <iostream>
#include "find.hpp"
pair<int, long long> sequencialSearch(vector<int> vec, int elem){
	long long comp = 0;
	for (int i = 0; i < vec.size(); i++)
	{
		comp++;
		if(vec[i]==elem) return {i, comp}; 
	}
	return {-1, comp};
}
pair<int, long long> binarySearch(vector<int> vec, int elem){
	int start = 0;
	long long comp = 0;
	int end = vec.size()-1;
	while(start<=end){
		int half = (end-start)/2+start;
		comp++;
		if(elem>vec[half]) start = half + 1;
		else if (elem<vec[half]) end = half - 1;
		else return {half, comp};
	}
	return {-1, comp};
}
;