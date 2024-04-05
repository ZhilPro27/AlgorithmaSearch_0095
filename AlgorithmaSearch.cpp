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
}

