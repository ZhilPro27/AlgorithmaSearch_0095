#include <iostream>
using namespace std;

int arr[20];//Array yang akan dicari
int n;		//Banyaknya elemen yang ada pada array
int i;		//Index elemen array

void input() {
	while (true) {
		cout << "Masukkan banyaknya elemen pada array : ";
		cin >> n;
		if ((n > 0) && (n <= 20)) {
			break;
		}
		else {
			cout << "\n Array harus memiliki minimal 1 elemen dan maksimal 20 elemen" << endl;
			cout << "Silahkan coba lagi" << endl;
			cout << "------------------" << endl;
		}
	}

	//Menerima elemen array
	cout << "\n-----------------------" << endl;
	cout << " Masukkan elemen array " << endl;
	cout << "-----------------------" << endl;
	for (i = 0; i < n; i++) {
		cout << "Elemen ke-" << (i + 1) << " = ";
		cin >> arr[i];
	}
}

void LinearSearch() {
	char ch;
	int ctr; //Jumlah perbandingan
	int item;

	//Menerima angka yang ingin dicari
	cout << "\n Masukkan elemen yang anda ingin cari: ";	//step 1
	cin >> item;

	ctr = 0;
	i = 0;	//step 2
	while (i < n) {	//step 3
		ctr++;
		if (arr[i] == item) {

		}
		i++; //step 4
	}

	if (i == n) {	//step 5
		cout << "\n" << item << " tidak ditemukan di dalam array " << endl;
		cout << "Jumlah perbandingan = " << ctr << endl;
	}
}

