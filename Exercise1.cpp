//https://repl.it/@KieranCaruana/ReverseWord#main.cpp
#include <iostream>
#include <vector>

std::vector<char> reverse(std::string s){
  std::vector<char> v(s.begin(), s.end());
  return v;
}

int main() {
  std::string s;
  std::cout << "Enter word to reverse: ";
  std::cin >> s;
  std::vector<char> reverseV;
  std::vector<char> v;
  v = reverse(s);
  for (unsigned i = v.size(); i-- > 0; ) {
    reverseV.push_back(v[i]);
    std::cout << v[i];
  }
}
