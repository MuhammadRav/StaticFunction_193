#include <iostream>
using namespace std;

class mahasiswa {
public:
	static int nim;
	int id;
	string nama;

	void setID();
	void printAll();
	mahasiswa(string pnama) :nama(pnama) { setID(); }
};

int mahasiswa::nim = 0;

void mahasiswa::setID() {
	id = ++nim;		// ++nim = ditambah dulu baru digunakan, misal nim = 0, maka nim selanjutnya 1 + 0
}

void mahasiswa::printAll() {
	cout << "ID = " << id << endl;
	cout << "Nama = " << nama << endl;
	cout << endl;
}

int main() {
	mahasiswa mhs1("Ratih");
	mahasiswa mhs2("Nandu");
	mahasiswa mhs3("Rezza");
	mahasiswa mhs4("Rasya");

	mhs1.printAll();
	mhs2.printAll();
	mhs3.printAll();
	mhs4.printAll();
	return 0;
}