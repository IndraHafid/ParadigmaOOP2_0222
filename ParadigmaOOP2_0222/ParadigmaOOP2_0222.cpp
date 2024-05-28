// ParadigmaOOP2_0222.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class orang {
public:
    int umur;

    orang(int pUmur) :
    umur(pUmur) {
        cout << "Orang dibuat dengan umur " << umur << "\n" << endl;
    }
};

class pekerja : public orang {
public :
    pekerja(int pUmur) :
        orang(pUmur)
    {
        cout << "Pekerja dibuat\n" << endl;
    }
};

class pelajar : public orang {
public:

    pelajar(int pUmur):
        orang(pUmur) {
        cout << "pelajar dibuat\n" << endl;
    }
};

class budi : public pekerja, public pelajar {
public:

    budi(int pUmur) :
        pekerja(pUmur),
        pelajar(pUmur) {
        cout << "Budi dibuat\n" << endl;
    }
};

int main()
{
    std::cout << "Hello World!\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file



