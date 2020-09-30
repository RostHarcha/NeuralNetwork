#pragma once
#include "Layer.h"
#include "Synaps.h"
#include <vector>
class Net
{
private:
  Layer input, hidden, output;
  Synaps iSynapse, ihSynaps, hoSynaps;
public:
  Net(int inputs, int hiddenNeurons, int outputs);
  std::vector<double> execute(std::vector<double> input);
};