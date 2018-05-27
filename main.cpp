#include <iostream>

using namespace std;

struct Persona
{
    string nombre;

    void imprime() const;
    void imprime(int n) const;
};

int main()
{
    Persona juan = { "Juan" };
    juan.imprime(5);// <----


    cout << endl;
    cout << "-------------------------------------------------------------" << endl;
    cout << "Si no le pones nada actua el primero si le pones actua el for" << endl;
    cout << "-------------------------------------------------------------" << endl;
    cout << endl;

    return 0;
}

void Persona::imprime() const
{
    cout << nombre << endl;

}

void Persona::imprime(int n) const
{
    for (int i = 0; i < n; ++i)
        cout << nombre << endl;
    cout << endl;
}
