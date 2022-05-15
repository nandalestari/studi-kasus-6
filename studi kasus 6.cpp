#include<iostream>
#include<string.h>
using namespace std;

int main(){
	int i, mhs, A[50], jumlah, max, min;
 	float rata;
    string dosen, matkul;
	cout << "##         PENGINPUTAN NILAI  ##\n";
	cout << "=========================================\n";
	cout << endl;
	cout << "Masukkan Jumlah Mahasiswa : ";
  	cin >> mhs;
  	cout << endl;
    cout << " Masukkan Nilai Mahasiswa (sesuai absen) : \n";
    for (i=0; i<mhs; i++){
		cout << " Mahasiswa [" << i << "] = ";
		cin >> A[i];
		jumlah=+jumlah + A[i];
	}
	rata=jumlah/mhs;
  cout << endl;
  cout << "Nama Dosen : ";
  cin >> dosen;
  cout << "Nama Mata Kuliah : ";
  cin >> matkul;
  cout << endl;
  cout << "-----------------------------------------------\n";
  cout << "               TAMPILAN NILAI\n";
  cout << "-----------------------------------------------\n";
	int B[mhs];
	for(int i=0; i<mhs; i++){
		cout<<"mahasiswa ke " << i << " : " << A[i] << endl;
    }
  cout << "-----------------------------------------------------\n";
  cout << "Nilai minimum : \n";
  cout << "Nilai maksimum : \n";
  cout << "Nilai rata-rata : " << rata;
  }
