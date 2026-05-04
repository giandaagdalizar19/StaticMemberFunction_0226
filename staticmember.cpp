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
    void printAII();

    //pembuatan consructor MAhasiswa dengan parameter pnama
    Mahasiswa(string pnama) :nama (pnama){
        setID();
    }
};