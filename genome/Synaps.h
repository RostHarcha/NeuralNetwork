#pragma once
#include <vector>
class Synaps
{
private:
  std::vector<double> weight;
  const int INPUTS;
  const int OUTPUTS;
  double getWeight(int inputNeuron, int outputNeuron);
public:
  Synaps(int inputNeurons, int outputNeurons);
  Synaps(int neurons, double weights);
  std::vector<double> getWeights(int outputNeuron);
};