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