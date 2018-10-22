// Class functions go here

#include <iostream>
#include <vector>
#include "neuron.h"

Neuron::Neuron(int inputs)
{
    inputCount = inputs;
    learningRate = 0.1;
    // Need to randomize these in the future
    weight[0] = 0.3;
    weight[1] = -0.1;
    bias = 0.2;
}

Neuron::Neuron(int inputs, double rate)
{
    inputCount = inputs;
    learningRate = rate;
    // Need to randomize these in the future
    weight[0] = 0.3;
    weight[1] = -0.1;
    bias = 0.2;
}

double Neuron::Eval(vector<double> input)
{
    return 0;       // Fix me
}

void Neuron::Learn(vector<double> &input)
{
    double waverage, output, error;
    cout << "Called Neuron::Learn()" << endl;
    cout << "  Inputs: (" << input[0] << ", " << input[1] << ")";
    cout << "  Expected output: " << input[2] << endl;
    cout << "  Neuron params:  w1 = " << weight[0] << ", w2 = " << weight[1];
    cout << ", bias = " << bias << endl;
    
    // Calculate the current output
    waverage = input[0]*weight[0] + input[1]*weight[1];
    // WHY DOES THIS RETURN FALSE WHEN 0.2 >= 0.2 ??
    if (waverage >= bias)
        output = 1;
    else
        output = 0;
    error = input[2] - output;
    cout << "  Weighted avg: " << waverage << endl;
    cout << "  Current output: " << output << " (error = " << error << ")" << endl;
 
    // Calculate new weight 1
    weight[0] = weight[0] + learningRate * input[0] * error;
    cout << "  New w1 = " << weight[0] << endl;

    // Calculate new weight 2
    weight[1] = weight[1] + learningRate * input[1] * error;
    cout << "  New w2 = " << weight[1] << endl;
}
