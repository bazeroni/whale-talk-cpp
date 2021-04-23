#include <iostream>
#include <vector>
#include <string>
 
int main() {
 
  std::string input = "turpentine and turtles";
  std::vector<char> vowels = {'a', 'e', 'i', 'o', 'u'};
  std::vector<char> result;
 
  for (int i = 0; i < input.size(); i++) {
    for (int z = 0; z < vowels.size(); z++) {
      if (input[i] == vowels[z]) {
        result.push_back(input[i]);
      }
    }
    if (input[i] == 'e' || input[i] == 'u') {
      result.push_back(input[i]);
    }
  }

  for (int i = 0; i < result.size(); i++) {
    std::cout << result[i];
  }
  std::cout << "\n";
}
