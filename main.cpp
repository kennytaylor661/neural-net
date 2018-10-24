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

    // Define the data set
    vector<double> sample1(3);
    sample1[0] = 0;          // Input 1
    sample1[1] = 0;          // Input 2
    sample1[2] = 0;          // Desired output
    vector<double> sample2(3);
    sample2[0] = 0;         // Input 1
    sample2[1] = 1;         // Input 2
    sample2[2] = 0;         // Desired output
    vector<double> sample3(3);
    sample3[0] = 1;         // Input 1
    sample3[1] = 0;         // Input 2
    sample3[2] = 0;         // Desired output
    vector<double> sample4(3);
    sample4[0] = 1;         // Input 1
    sample4[1] = 1;         // Input 2
    sample4[2] = 1;         // Desired output

    // Run five epochs
    for(int i = 0; i < 5; i++) {
        n.Learn(sample1);
        n.Learn(sample2);
        n.Learn(sample3);
        n.Learn(sample4);
    }

    return 0;
}
