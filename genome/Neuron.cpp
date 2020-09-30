#include "Neuron.h"
#include <cmath>
double Neuron::Activate(double x)
{
  double a = 1 / 2;
  return 1 / (1 + exp(-a * x));
}

double Neuron::Net(std::vector<double> input, std::vector<double> weight)
{
  double sum = 0;
  for (auto i = 0; i < input.size(); i++)
  {
    sum += input[i] * weight[i];
  }
  return sum;
}

double Neuron::ProcessInputData(std::vector<double> input, std::vector<double> weight)
{
  if (input.size() != weight.size())
  {
    return 0.0f;
  }
  double net = Net(input, weight);
  double out = Activate(net);
  return out;
}