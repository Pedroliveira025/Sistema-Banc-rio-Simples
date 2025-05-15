#include "client.hpp"

#include <string>

using namespace std;

Client::Client(string _name, string _CPF)
{
    name = _name;
    CPF = _CPF;
}

string Client::getName()
{
    return name;
}

string Client::getCPF()
{
    return CPF;
}
