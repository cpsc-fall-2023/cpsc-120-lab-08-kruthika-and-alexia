// Alexia Macias
// amac23@csu.fullerton.edu
// @lexi-macias
// Partners: @kruthika-gowda

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};

  if (arguments.size() < 2) {
    std::cout << "error: you must supply at least one number\n";
    return 1;
  }

  double sum{0.0};
  for (std::string& index : arguments) {
    if (index == "./average") {
      continue;
    } else {
      sum += std::stod(index);
    }
  }

  double average{sum / static_cast<double>(arguments.size() - 1)};
  std::cout << "average = " << average << "\n";
  return 0;
}
