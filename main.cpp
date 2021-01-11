#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int menu,gender;
    cout<<"Menu \n1. Perawatan Wajah \n2. Perawatan Rambut \n3. Perawatan Badan \n4. Jadwal Konsultasi \n5. Keluar"<<endl;
    cout<<"Pilih Nomor : ";
    cin>>menu;
    system("cls");

    switch(menu){
    case 1:
        cout<<"Silahkan pilih jenis kelamin \n1. Laki - Laki \n2. Perempuan"<<endl;
        cout<<"Masukan Pilihan : ";
        cin>>gender;
        system("cls");

        if(gender == 1){
            cout<<"menu\n";
            cout<<"1. Facial Acne\n";
            cout<<"2. Brightening Facial\n";
            cout<<"3. Anti Aging Facial\n";
            cout<<"4. Laser";
        }else{
            cout<<"menu\n";
            cout<<"1. Mikrodermabrasi\n";
            cout<<"2. Normal Facial\n";
            cout<<"3. Acne Facial\n";
            cout<<"4. Anti Aging Facial\n";
            cout<<"5. Brightening Facial\n";
            cout<<"6. Laser";
        }
        break;
    case 2:
        cout<<"Silahkan pilih jenis kelamin \n1. Laki - Laki \n2. Perempuan"<<endl;
        cout<<"Masukan Pilihan : ";
        cin>>gender;
        system("cls");

        if(gender == 1){
            cout<<"menu";
            cout<<"1. Treatment Rambut Rontok\n";
            cout<<"2. Laser Rambut";
        }else{
            cout<<"menu";
            cout<<"1. Treatment Rambut Rontok\n";
            cout<<"2. Laser Rambut";
        }
        break;
    case 3:
        cout<<"Silahkan pilih jenis kelamin \n1. Laki - Laki \n2. Perempuan"<<endl;
        cout<<"Masukan Pilihan : ";
        cin>>gender;
        system("cls");

        if(gender == 1){
            cout<<"menu";
            cout<<"1. SPA\n";
            cout<<"2. Massage";
        }else{
            cout<<"menu";
            cout<<"1. SPA\n";
            cout<<"2. Body Scrub\n";
            cout<<"3. Manicure & Pedicure";
        }
        break;
    case 4:
        cout<<"menu";
        break;
    case 5:
        break;
    default:
        cout<<"Menu yang anda pilih tidak tersedia";
        break;
    }
    return 0;
}
