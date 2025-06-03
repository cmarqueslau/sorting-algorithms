#include <iostream>
#include <fstream>
#include <ctime>
#include <vector>
#include <cstdlib>
using namespace std;
void writeRandomVectorInFile(string filepath, int vectorSize);
void writeVectorInFile(string filepath, vector<int> vector);
vector<int> writeVectorFromFile(string filepath, int vectorSize);