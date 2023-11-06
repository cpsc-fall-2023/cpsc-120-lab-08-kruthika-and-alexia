// Alexia Macias
// amac23@csu.fullerton.edu
// @lexi-macias
// Partners: @kruthika-gowda

#include <iomanip>
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
  bool first_argument = true;
  for (std::string& index : arguments) {
    if (first_argument) {
      first_argument = false;
      continue;
    } else {
      sum += std::stod(index);
    }
  }

  double average = sum / (static_cast<int>(arguments.size()) - 1);
  std::cout << "average = " << average << "\n";
  return 0;
}
