#include <iostream>
using namespace std;

class mahasiswa {
private:
	static int nim;
public:
	int id;
	string nama;

	void setID();
	void printAll();

	static void setNim(int pNim) { nim = pNim; /*definisi function*/ }
	static int getNim() { return nim; /*definisi function*/ }

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
	mahasiswa::setNim(9);		//mengakses nim melalui static member function "setNim"
	mahasiswa mhs3("Rezza");
	mahasiswa mhs4("Rasya");

	mhs1.printAll();
	mhs2.printAll();
	mhs3.printAll();
	mhs4.printAll();

	cout << "Akses dari luar object = " << mahasiswa::getNim() << endl;	//mengakses nim

	return 0;
}