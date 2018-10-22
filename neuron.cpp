// Class functions go here

#include <iostream>
#include <vector>
#include "neuron.h"

Neuron::Neuron(int inputs)
{
    inputCount = inputs;
    learningRate = 0.1;
}

Neuron::Neuron(int inputs, double rate)
{
    inputCount = inputs;
    learningRate = rate;
}

double Neuron::Eval(vector<double> input)
{
    return 0;       // Fix me
}

double Neuron::Learn(vector<double> &input)
{
    cout << "Called Neuron::Learn()" << endl;
    cout << "  Inputs: (" << input[0] << ", " << input[1] << ")" << endl;
    return 0;       // Fix me
}
