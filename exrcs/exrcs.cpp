#include <iostream>
#include <string>
#include <vector>

using namespace std;

string getStatus(int matematika, int bahasa_inggris) {  // fungsi untuk menentukan status diterima atau tidak
    string status;
    float rata_rata = (matematika + bahasa_inggris) / 2.0;
    if (rata_rata >= 70 || matematika > 80) {
        status = "diterima";
    }
    else {
        status = "ditolak";
    }
    return status;
}
