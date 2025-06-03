#include "data_generator.hpp"
void writeRandomVectorInFile(string filepath, int vectorSize){
	ofstream file;
	file.open(filepath, ios::binary | ios::out);
	if(file.is_open()){
		for (int i = 0; i < vectorSize; i++)
		{
			int x = rand();
			file.write(reinterpret_cast<char*>(&x), sizeof(x)); //Converte o ponteiro de int* para char* porque write() trabalha com bytes
		}
		file.close();
	} else{
		cout<<"Erro ao abrir arquivo"<< endl;
	}
}

void writeVectorInFile(string filepath, vector<int> vector){
	ofstream file;
	file.open(filepath, ios::binary | ios::out);
	if(file.is_open()){
		file.write(reinterpret_cast<char*>(vector.data()), vector.size()*sizeof(int)); //Converte o ponteiro de int* para char* porque write() trabalha com bytes
		
		file.close();
	} else{
		cout<<"Erro ao abrir arquivo"<< endl;
	}
}


vector<int> writeVectorFromFile(string filepath, int vectorSize){
	vector<int> vector;
	vector.resize(vectorSize); 
	ifstream file;
	file.open(filepath, ios::binary | ios::in);
	if(file.is_open()){
		file.read(reinterpret_cast<char*>(vector.data()), vectorSize*sizeof(int));
		file.close();
	} else{
		cout<<"Erro ao abrir arquivo"<< endl;
	}
	return vector;
}