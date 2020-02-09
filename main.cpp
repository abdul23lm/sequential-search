//TUGAS UAS PRAKTIKUM
//NAMA : ABDUL LATIF MUNJIAT
//NPM  : 1610631170004
//KELAS 3'A FASILKOM UNSIKA

#include <iostream>
using namespace std;

main(){


    cout<<"*======================================Tugas UAS Praktikum======================================*"<<endl;
    cout<<" Struktur Data & Pemrograman"<<endl;
    cout<<" Nomor 3 - Mengoreksi Program Sequential Search"<<endl;
    cout<<" Created By Abdul Latif Munjiat (1610631170004)"<<endl;
    cout<<" Kelas 3'A Fasilkom Unsika\n"<<endl;
    cout<<"################################################################################################\n";
    cout<<"-------------------------------------- Sequential Search ---------------------------------------\n";
    cout<<"################################################################################################\n";

    int elemen[10] = {12, 4, 5, 6, 3, 11, 34, 33, 14, 11};
    int nilai,i;
    bool find = false; //Nilai ketemu dibuat false, karena blm ketemu;

    cout<<"\nMasukan nilai yang kamu cari : ";
    cin>>nilai;

    for(i=0; i<10; i++)
    {
        if(nilai == elemen[i]){
            cout<<"Woww nilai nya ketemu, ada di elemen ke "<<i<<endl;
            find = true;
        }
    }
    if (find == false) {
            cout<<"Upss.. nilai yang kamu masukan tidak ada dalam daftar"<<endl;
    }
}
