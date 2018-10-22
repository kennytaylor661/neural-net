// Neural network simulator
// Kenny Taylor
// 10/22/18

#include <iostream>
#include "neuron.h"

using namespace std;

int main()
{
    // Create and initialize a single neuron
    Neuron n(2);
    vector<double> sample(3);
    sample[0] = 0;          // Input 1
    sample[1] = 0;          // Input 2
    sample[2] = 0;          // Desired output

    // Test 1
    n.Learn(sample);

    return 0;
}
