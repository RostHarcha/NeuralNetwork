#include "Net.h"

Net::Net(int inputs, int hiddenNeurons, int outputs)
  :input(inputs),
  hidden(hiddenNeurons),
  output(outputs),
  iSynapse(inputs, 1.0f),
  ihSynaps(inputs , hiddenNeurons),
  hoSynaps(hiddenNeurons, outputs)
{
}

std::vector<double> Net::execute(std::vector<double> inputData)
{
  std::vector<double> inputToHidden = input.Process(inputData, iSynapse);
  std::vector<double> hiddenToOutput = hidden.Process(inputToHidden, ihSynaps);
  std::vector<double> outputData = output.Process(hiddenToOutput, hoSynaps);
  return outputData;
}