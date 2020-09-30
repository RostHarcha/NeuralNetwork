#pragma once
#include "Neuron.h"
#include "Synaps.h"
#include <vector>
class Layer
{
private:
  std::vector<Neuron> neuron;
  
public:
  Layer(int neurons);
  std::vector<double> Process(std::vector<double> input, Synaps weight);
};