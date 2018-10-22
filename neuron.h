// Class prototype goes here

#include <vector>

using namespace std;

class Neuron {
    public:
        Neuron(int);
        Neuron(int,double);
        double Eval(vector<double>);
        double Learn(vector<double>&);
    private:
        double weight[3];
        double bias;
        double learningRate;
        int inputCount;
};
