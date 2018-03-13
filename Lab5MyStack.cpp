#include "Lab5MyStack.h"

//TODO:
string stringReversal1(string input)
{
	stack<char> newStack;
	for (int i = 0; i < input.length(); i++)
	{
		newStack.push(input.at(i));
	}
	string reverseString;
	while (!newStack.empty())
	{
		reverseString.push_back(newStack.top());
		newStack.pop();
	}
	return reverseString;
}
string stringReversal2(string input)
{
	vector<char> newVector;

	for (int i = 0; i < input.length(); i++)
	{
		newVector.push_back(input.at(i));
	}

	string reverseString;

	while (!newVector.empty())
	{
		reverseString.push_back(newVector.back());
		newVector.pop_back();
	}

	return reverseString;
}

string stringReversal3(string input)
{
	list<char> newList;

	for (int i = 0; i < input.length(); i++)
	{
		newList.push_back(input.at(i));
	}
	string reversedString;

	while (!newList.empty())
	{
		reversedString.push_back(newList.back());
		newList.pop_back();
	}

	return reversedString;
}

string stringReversal4(string input)
{
	MyStack newStack;
	for (int i = 0; i < input.length(); i++)
	{
		newStack.push(input.at(i));
	}

	string reverseString;
	while (!newStack.isEmpty())
	{
		reverseString.push_back(newStack.pull());
	}

	return reverseString;
}


bool MyStack::isEmpty() const
{
	if (stack.empty())
	{
		return true;
	}
	else
	{
		return false;
	}
}

void MyStack::push(char & c)
{
	stack.push_back(c);
}
char MyStack::pull()
{
	char last = stack.back();
	stack.pop_back();
	return last;
}
