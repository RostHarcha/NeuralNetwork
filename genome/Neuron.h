#pragma once
#include <vector>
class Neuron
{
private:
  double Activate(double x);
  double Net(std::vector<double> input, std::vector<double> weight);
public:
  double ProcessInputData(std::vector<double> input, std::vector<double> weight);
};