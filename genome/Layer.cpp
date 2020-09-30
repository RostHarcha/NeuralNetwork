#include "Layer.h"

Layer::Layer(int neurons)
  :neuron(neurons)
{
}

std::vector<double> Layer::Process(std::vector<double> input, Synaps weight)
{
  std::vector<double> out;
   
  //  process every neuron in the layer
  for (auto n = 0; n < neuron.size(); n++)
  {
    double neuronData = neuron[n].ProcessInputData(input, weight.getWeights(n));
    out.push_back(neuronData);
  }
  return out;
}