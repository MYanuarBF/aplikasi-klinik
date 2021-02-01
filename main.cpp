#include <iostream>
#include <stdlib.h>

using namespace std;

int receipt(int a){
    int bayar,kembali;
    cout<<"Total yang harus dibayarkan adalah Rp."<<a<<endl;
    cout<<"Bayar : Rp.";
    cin>>bayar;
    kembali=bayar-a;
    if(a>bayar){
        cout<<"Uang Kurang";
    }else{
    cout<<"Kembalian : Rp."<<kembali;
    }
}

int main()
{
    int menu,gender;
    cout<<"Silahkan pilih jenis kelamin terlebih dahulu \n1. Laki - Laki \n2. Perempuan"<<endl;
    cout<<"Masukan Pilihan : ";
    cin>>gender;
    system("cls");

    Home:
    cout << "\t\tSelamat Datang di Klinik Kecantikan \n";
    cout<<"\t\tSILAHKAN PILIH LAYANAN KECANTIKAN KAMI \n\n1. Perawatan Wajah \n2. Perawatan Rambut \n3. Perawatan Badan \n4. Jadwal Konsultasi \n5. Keluar \n"<<endl;
    cout<<"Masukkan Pilihan Anda : ";
    cin>>menu;
    system("cls");

    switch(menu){
    case 1:
        system("cls");

        if(gender == 1){
            cout<<"Macam - Macam Perawatan Untuk Laki - Laki \n";
            cout << "1. Facial Acne \t\tRp. 200.000" << endl;
            cout << "2. Brightening Facial \tRp. 150.000" << endl;
            cout << "3. Anti-Aging Facial \tRp. 250.000"<< endl;
            cout << "4. Laser \t\tRp. 700.000" << endl;
            cout<<"5. Kembali\n";
            cout<<"Masukan Pilihan ";
            cin>>menu;
            switch(menu){
            case 1:
                receipt(200000);
                break;
            case 2:
                receipt(150000);
                break;
            case 3:
                receipt(250000);
                break;
            case 4:
                receipt(700000);
                break;
            case 5:
                goto Home;
                break;
            default:
                cout<<"Pilihan anda tidak ada";
                break;
            }

        }else{
            cout <<"Macam - Macam Perawatan Untuk Perempuan \n";
            cout << "1. Mikrodermabrasi \t\tRp. 400.000"<< endl;
            cout << "2. Normal Facial \t\tRp. 150.000"<< endl;
            cout << "3. Acne Facial \t\t\tRp. 200.000"<< endl;
            cout << "4. Anti-Aging Facial \t\tRp. 250.000"<< endl;
            cout << "5. Brightening Facial \t\tRp. 150.000"<< endl;
            cout << "6. Laser \t\t\tRp. 750.000"<< endl;
            cout<<"7. Kembali\n";
            cout<<"Masukan Pilihan ";
            cin>>menu;
            switch(menu){
            case 1:
                receipt(400000);
                break;
            case 2:
                receipt(150000);
                break;
            case 3:
                receipt(200000);
                break;
            case 4:
                receipt(250000);
                break;
            case 5:
                receipt(150000);
                break;
            case 6:
                receipt(750000);
                break;
            case 7:
                goto Home;
                break;
            default:
                cout<<"Pilihan anda tidak ada";
                break;
            }
        }
        break;
    case 2:
        system("cls");

        if(gender == 1){
            cout<<"menu"<<endl;
            cout << "1. Treatment Rambut Rontok \t Rp. 250.000 "<< endl;
            cout << "2. Laser \t\t\t Rp. 800.000" << endl;
            cout<<"3. Kembali\n";
            cout<<"Masukan Pilihan ";
            cin>>menu;
            switch(menu){
            case 1:
                receipt(250000);
                break;
            case 2:
                receipt(800000);
                break;
            case 3:
                goto Home;
                break;
            default:
                cout<<"Pilihan anda tidak ada";
                break;
            }
        }else{
            cout<<"menu"<<endl;
            cout << "1. Treatment Rambut Rontok \t Rp. 250.000 "<< endl;
            cout << "2. Laser \t\t\t Rp. 800.000" << endl;
            cout<<"3. Kembali\n";
            cout<<"Masukan Pilihan ";
            cin>>menu;
            switch(menu){
            case 1:
                receipt(250000);
                break;
            case 2:
                receipt(800000);
                break;
            case 3:
                goto Home;
                break;
            default:
                cout<<"Pilihan anda tidak ada";
                break;
            }
        }
        break;
    case 3:
        /*cout<<"Silahkan pilih jenis kelamin \n1. Laki - Laki \n2. Perempuan"<<endl;
        cout<<"Masukan Pilihan : ";
        cin>>gender;*/
        system("cls");

        if(gender == 1){
            cout<<"Macam - Macam Perawatan Untuk Laki - Laki \n";
            cout << "1. SPA Rp. 400.000" << endl;
            cout << "2. Massage Rp. 200.000" << endl;
            cout<<"3. Kembali\n";
            cout<<"Masukan Pilihan ";
            cin>>menu;
            switch(menu){
            case 1:
                receipt(400000);
                break;
            case 2:
                receipt(200000);
                break;
            case 3:
                goto Home;
                break;
            default:
                cout<<"Pilihan anda tidak ada";
                break;
            }
        }else{
            cout<<"Macam - Macam Perawatan Untuk Perempuan \n";
            cout << "1. SPA \t\t\tRp. 500.000"<< endl;
            cout << "2. Body Scrub \t\tRp. 300.000"<< endl;
            cout << "3. Manicure & Padicure  Rp. 350.000" << endl;
            cout<<"4. Kembali\n";
            cout<<"Masukan Pilihan ";
            cin>>menu;
            switch(menu){
            case 1:
                receipt(500000);
                break;
            case 2:
                receipt(300000);
                break;
            case 3:
                receipt(350000);
                break;
            case 4:
                goto Home;
                break;
            default:
                cout<<"Pilihan anda tidak ada";
                break;
            }
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
