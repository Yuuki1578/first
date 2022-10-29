#include <iostream>
#include <string>
using namespace std;

int main()
{
   int x,operation;
   float y;
       cout << "       Selamat Datang Di Kalkulator\n\n";
       cout << "Created by Awang :D\n\n";
       cout << "Kalkulator ini memiliki berbagai jenis \noperasi perhitungan.\n\n";
       cout << "Ketik \"1\" untuk penjumlahan" << endl;
       cout << "Ketik \"2\" untuk pengurangan" << endl;
       cout << "Ketik \"3\" untuk perkalian" << endl;
       cout << "Ketik \"4\" untuk pembagian" << "\n\n";
       cout << "Input: ";
       cin >> operation;
       cout << "\n\n";
            switch (operation)
            {
                case 1:
                  cout << "Masukkan nilai: ";
                  cin >> x;
                  cout << "Masukkan lagi nilai: ";
                  cin >> y;
                  cout << "Hasil dari " << x << " + " << y << " adalah: " << (x + y);
                  cout << "\n" << "Program Sukses!" << "\n\n";
                break;
            
                case 2:
                  cout << "Masukkan nilai: ";
                  cin >> x;
                  cout << "Masukkan lagi nilai' ";
                  cin >> y;
                  cout << "Hasil dari " << x << " - " << y << " adalah: " << (x - y);
                  cout << "\n" << "Program Sukses!" << "\n\n";
                break;
            
                case 3:
                  cout << "Masukkan nilai: ";
                  cin >> x;
                  cout << "Masukkan lagi nilai: ";
                  cin >> y;
                  cout << "Hasil dari " << x << " x " << y << " adalah: " << (x * y);
                  cout << "\n" << "Program Sukses!" << "\n\n";
                break;
            
                case 4:
                  cout << "Masukkan nilai: ";
                  cin >> x;
                  cout << "Masukkan lagi nilai: ";
                  cin >> y;
                  cout << "Hasil dari " << x << " ÷ " << y << " adalah: " << (x / y);
                  cout << "\n" << "Program Sukses!" << "\n\n";
                break;
                
                default:
                  cout << "Input yang anda masukkan salah!" << endl;
                  cout << "Program berakhir!\n\n";
                break;
            }
    
    
return 0;
} 