#include <iostream>

using namespace std;

int main()
{
    string nama,prodi,matkul;
    int x,maks;
    int kul,a,sks;
    long int nim;
    int total,ts=0,tarif_re=200000,tarif_ek=250000;
    int pilihan;
    char ulang;
do{
    cout<< "--------------------------------------" << endl;
    cout<<" Nama : ";getline(cin,nama);
    cout<<" NIM  : ";cin>>nim;
    cout<<" Prodi: ";getline(cin,prodi);


    cout<<" Jenis : 1. Mahasiswa Reguler "<<endl;
    cout<<"         2. Mahasiswa Eksekutif"<<endl;
    cout<<" Pilihan Anda : ";
    cin>>pilihan;

    switch(pilihan)
    {
        case 1:
            cout<<"MAHASISWA REGULER"<<endl;
        cout<< "--------------------------------------" << endl;
    cout<<" Masukan jumlah Mata Kuliah: ";cin>>kul;
    cout<< "--------------------------------------" << endl;

    for(a=0;a<kul;a++)
        {
        cout<<" Nama Mata Kuliah : ";cin>>matkul;
        cout<<" Jumlah SKS : ";cin>>sks;

        ts+=sks;
        }

    total=tarif_re*ts;
    cout<< "--------------------------------------" << endl;
    cout<<" Total SKS : "<<ts<<endl;
    cout<<" Total Bayaran : "<<total<<endl;
    cout<< "--------------------------------------" << endl;
    break;
        case 2:
             cout<<"MAHASISWA EKSEKUTIF"<<endl;
        cout<< "--------------------------------------" << endl;
    cout<<" Masukan jumlah Mata Kuliah: ";cin>>kul;
    cout<< "--------------------------------------" << endl;

    for(a=0;a<kul;a++)
        {
        cout<<" Nama Mata Kuliah : ";cin>>matkul;
        cout<<" Jumlah SKS : ";cin>>sks;
        ts+=sks;
        }

    total=tarif_ek*ts;
    cout<< "--------------------------------------" << endl;
    cout<<" Total SKS : "<<ts<<endl;
    cout<<" Total Bayaran : "<<total<<endl;
    cout<< "--------------------------------------" << endl;
    break;

        default:
            cout<<"SALAH INPUT"<<endl;
            break;
    }



    cout<<" Apakah anda ingin mengulang ? (y/t)";
    cin>>ulang;
    cout<<endl;
    system("cls");
}
while(ulang!='t'||ulang!='T');

cout<<" TERIMA KASIH "<<endl;
    return 0;
}
