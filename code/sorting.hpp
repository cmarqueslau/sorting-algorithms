#include <iostream>
#include <iostream>
#include <vector>
#include <stdlib.h>
using namespace std;
#pragma once
void bubbleSort(vector<int> vector);
void selectionSort(vector<int>& vector);
void insertionSort(vector<int> vector);
void bubbleSortOp(vector<int> vector);
void insertionSortOp(vector<int> vector);
int sequencialSearch(vector<int> vector, int elem);
int binarySearch(vector<int> vector, int elem);
int binarySearchRecursive(vector<int> vector, int end, int start, int elem);