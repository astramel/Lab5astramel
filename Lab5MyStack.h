//Sasha Stramel

#pragma once
#ifndef LAB5MYSTACK_H
#define LAB5MYSTACK_H
#include <string>
#include <vector>

using std::string;
using std::vector;

std::string stringReversal1(std::string input);
std::string stringReversal2(std::string input);
std::string stringReversal3(std::string input);
std::string stringReversal4(std::string input);

class MyStack{
  plubic:
  vector<char> stack;
 // list<char> stack;
  bool isEmpty() const;
  void push(char& c);
  char pull();
};
