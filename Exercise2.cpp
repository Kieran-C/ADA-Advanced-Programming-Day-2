//https://repl.it/@KieranCaruana/lowerCase#main.cpp
#include <iostream>
#include <algorithm>

std::string lower(std::string word){
  std::transform(word.begin(), word.end(), word.begin(),
      [](unsigned char c){ return std::tolower(c); });
  return word;
}

int main() {
  std::string wordDown;
  std::string wordUp;
  std::cout << "Please enter a word: ";
  std::cin >> wordUp;
  wordDown = lower(wordUp);
  std::cout << wordDown;
}
