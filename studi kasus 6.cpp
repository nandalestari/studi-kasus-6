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
