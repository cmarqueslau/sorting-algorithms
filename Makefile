all:
	g++ -c code/sorting.cpp code/main.cpp
	g++ sorting.o main.o -o main
clean:
	rm main.o main