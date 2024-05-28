// Enkapulasi.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


class remoteLampu {
private:
    string saklarNo[10];
public:
    void setSaklarNo(int i, string value) {
        saklarNo[i] = value;
    }
    string getSaklarNo(int i) {
        return saklarNo[i];
    }
};

int main() {
    remoteLampu lampuRumah;

    lampuRumah.setSaklarNo(0, "Lampu Teras Rumah");
    lampuRumah.setSaklarNo(1, "Lampu Ruang Tamu");
    lampuRumah.setSaklarNo(2, "Lampu Kamar Tidur");
    lampuRumah.setSaklarNo(3, "Lampu Dapur");

    cout << lampuRumah.getSaklarNo(0) << endl;;
    cout << lampuRumah.getSaklarNo(1) << endl;;
    cout << lampuRumah.getSaklarNo(2) << endl;;
    cout << lampuRumah.getSaklarNo(3) << endl;;
    return 0;
};



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
