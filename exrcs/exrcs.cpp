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
int main() {        // inisialisasi data
    string nama[] = { "asroni", "lia", "joko", "bayu", "ali", "putri", "putra", "dea", "bagas", "kiki", "deni", "fajar", "nila", "agus", "putri", "dina", "rizal", "rani", "roni", "tika" };
    int matematika[] = { 75, 80, 65, 90, 70, 80, 60, 85, 75, 90, 85, 75, 80, 70, 65, 75, 85, 70, 80, 75 };
    int bahasa_inggris[] = { 80, 85, 70, 90, 75, 85, 65, 90, 80, 95, 90, 80, 85, 75, 70, 80, 90, 75, 85, 80 };

    int diterima = 0;   // inisialisasi variabel
    int ditolak = 0;
    vector<string> status;

    for (int i = 0; i < 20; i++) {      // pengolahan data
        string s = getStatus(matematika[i], bahasa_inggris[i]);
        status.push_back(s);
        if (s == "diterima") {
            diterima++;
        }
        else {
            ditolak++;
        }
    }

    cout << "nama\tstatus" << endl;     // output ke layar
    for (int i = 0; i < 20; i++) {
        cout << nama[i] << "\t" << status[i] << endl;
    }

    cout << "Total kandidat diterima: " << diterima << endl;
    cout << "Total kandidat ditolak: " << ditolak << endl;

    return 0;
}
