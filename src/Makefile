pseudorandom: main.o randomGenerator.o
	g++ -o pseudorandom main.o randomGenerator.o

main.o: main.cc randomGenerator.h
	g++ -c main.cc

randomGenerator.o: randomGenerator.cc randomGenerator.h
	g++ -c randomGenerator.cc
