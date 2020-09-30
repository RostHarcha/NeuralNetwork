#include "Synaps.h"

Synaps::Synaps(int inputNeurons, int outputNeurons)
  :INPUTS(inputNeurons),
  OUTPUTS(outputNeurons)
{
  for (int i = 0; i < INPUTS * OUTPUTS; i++)
  {
    double rnd = rand() % 200 * 0.001;
    weight.push_back(rnd);
  }
}

Synaps::Synaps(int neurons, double weights)
  :INPUTS(neurons),
  OUTPUTS(neurons)
{
  weight.resize(neurons, weights);
}

std::vector<double> Synaps::getWeights(int outputNeuron)
{
  std::vector<double> out;
  for (int i = 0; i < INPUTS; i++)
  {
    out.push_back(getWeight(i, outputNeuron));
  }
  return out;
}

double Synaps::getWeight(int inputNeuron, int outputNeuron)
{
  return weight[inputNeuron * OUTPUTS + outputNeuron];
}
