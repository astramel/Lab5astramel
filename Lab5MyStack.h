//MyStack function declarations
#include<string>

std::string stringReversal1(std::string input);
std::string stringReversal2(std::string input);
std::string stringReversal3(std::string input);
std::string stringReversal4(std::string input);

class MyStack{
  bool isEmpty() const;
  void push(char& c);
  char pull();
};
