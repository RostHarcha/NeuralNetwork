#include <iostream>
#include "Net.h"

int main()
{
  Net net(2, 3, 1);

  std::cout << net.execute({ 1, 1})[0];

  return 0;
}