#include <iostream>
using namespace std;

class Mahasiswa{

public:
    static int nim;
    //deklarasi variabel member
    int id;
    string nama;

    //deklarasi prosedur setID() dan printAII()
    void setID();
    void printAll();

    //pembuatan consructor MAhasiswa dengan parameter pnama
    Mahasiswa(string pnama) :nama (pnama){
        setID();
    }
};

//memberi valeu ke variabel nim dari class mahasiswa
int Mahasiswa::nim = 10;

//mengimplementasikan prosedur - prosedur diluar class 
void Mahasiswa::setID() {
    id = ++nim;
};

void Mahasiswa::printAll() {

    cout << "ID : " << id << endl;
    cout << "Nama : " << nama << endl;
    cout << endl;
};

int main() {
    //membuat object dan memberi nilai
    Mahasiswa mhs1("Lia Kurnia");
    Mahasiswa mhs2("Asroni");
    Mahasiswa mhs3("Andi Kurniawan");
    Mahasiswa mhs4("Joko Purbo");

    //memanggil prosedur printAll()
    mhs1.printAll();
    mhs2.printAll();
    mhs3.printAll();
    mhs4.printAll();

    return 0;
}