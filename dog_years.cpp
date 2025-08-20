#include <iostream>

int main() {
  int dog_age = 4;
  // dog is 2 years old.
  int early_years= 21;
  //the first two years of a dog's life count as 21 human years.
  int later_years=(dog_age-2)*4;//Each following year counts as 4 human years.
  int human_years= early_years + later_years;
  // early years and later years and equal them to human years.
  std::cout<< "My name is Calcifer! Ruff Ruff, I am " << human_years << " years olds in human years.\n";
}
