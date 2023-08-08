#pragma once

#include <iostream>
using namespace std;

class Greeter
{
public:
	string greet(string& user_input);

private:
	string user_name;
};


