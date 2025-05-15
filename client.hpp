#ifndef CLIENT_H
#define CLIENT_H

#include <string>
#include <iostream>

using namespace std;

class Client
{
    private:
        string name;
        string CPF;
    public:
        Client() {}

        Client(string _name, string _CPF);

        string getName();

        string getCPF();
};

#endif
