//https://repl.it/@KieranCaruana/Palindrome#main.cpp
#include <iostream>
#include <algorithm>
#include <vector>

std::string lower(std::string word){
  std::transform(word.begin(), word.end(), word.begin(),
      [](unsigned char c){ return std::tolower(c); });
  return word;
}

std::vector<char> convert(std::string s){
  std::vector<char> v(s.begin(), s.end());
  return v;
}

bool check(std::vector<char> wordV, std::vector<char> revWordV){
  for (int i = 0; i < wordV.size(); i++){
    if (wordV[i] != revWordV[i]){
      return true;
    }
  }
  return false;
}

int main() {
  std::string word;
  std::vector<char> wordV;
  std::vector<char> revWordV;
  while (true){
    std::cout << "Please enter a word: ";
    std::cin >> word;
    word = lower(word);
    wordV = convert(word);
    for (unsigned i = wordV.size(); i-- > 0; ) {
    revWordV.push_back(wordV[i]);
  }
    if (check(wordV, revWordV) == false) {
      std::cout << "Yes, " << word << " is a palindrome\n\n";
    }else if(check(wordV, revWordV) == true) {
      std::cout << "Sorry, " << word << " is not a palindrome\n\n";
    }else {
      std::cout << "An error occured";
    }
  }
}
