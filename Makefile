all: main 

main: main.cpp neuron.cpp
	g++ main.cpp neuron.cpp -Wall -oneuralnet

clean:
	rm -f neuralnet
	rm -f *.o
