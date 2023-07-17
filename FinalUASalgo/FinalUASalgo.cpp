//1. Implementasi
#include <iostream>;
#include <string>;
using namespace std;

const int MAX_MAHASISWA = 100;

int NIM[MAX_MAHASISWA];
string nama[MAX_MAHASISWA];
int tahunMasuk[MAX_MAHASISWA];

int jumlahMahasiswa = 0;

void tambahMahasiswa() {
	if (jumlahMahasiswa < MAX_MAHASISWA) {
		cout << "========== TAMBAH MAHASISWA ==========" << endl;
		cout << "NIM : ";
		cin >> NIM[jumlahMahasiswa];
		cin.ignore();
		cout << "Nama : ";
		getline(cin, nama[jumlahMahasiswa]);
		cout << "Tahun Masuk: ";
		cin >> tahunMasuk[jumlahMahasiswa];
		cin.ignore();
		jumlahMahasiswa++;
		cout << "Mahasiswa berhasil ditambahkan!" << endl;
	}
	else {
		cout << "Kapasitas maksimum mahasiswa telah tercapai." << endl;
	}
};

void tampilkanSemuaMahasiswa() {
	if (jumlahMahasiswa > 0) {
		cout << "Data Mahasiswa:" << endl;
		for (int i = 0; i < jumlahMahasiswa; i++) {
			cout << "NIM     : " << NIM[i] << endl;
			cout << "Nama    : " << nama[i] << endl;
			cout << "Tahun Masuk: " << tahunMasuk[i] << endl;
			cout << endl;
		}
	}
	else {
		cout << "Belum ada data mahasiswa." << endl;
	}
}

void cariMahasiswaByNIM() {
	if (jumlahMahasiswa > 0) {
		int Carinim;
		cout << "Masukkan NIM yang ingin dicari: ";
		cin >> Carinim;

		bool temukan = false;
		for (int i = 0; i < jumlahMahasiswa; i++) {
			if (NIM[i] == Carinim) {
				cout << "Data Mahasiswa:" << endl;
				cout << "NIM     : " << NIM[i] << endl;
				cout << "Nama    : " << nama[i] << endl;
				cout << "Tahun Masuk: " << tahunMasuk[i] << endl;
				cout << endl;
				temukan = true;
				break;
			}
		}

		if (!temukan) {
			cout << "Mahasiswa dengan NIM " << Carinim << " tidak ditemukan." << endl;
		}
	}
	else {
		cout << "Belum ada data mahasiswa." << endl;
	}
}

void algorithmSortByTahunMasuk() {
	if (jumlahMahasiswa > 0) {
		for (int i = 0; i < jumlahMahasiswa - 1; i++) {
			for (int j = 0; j < jumlahMahasiswa - 1; j++) {
				if (tahunMasuk[j] > tahunMasuk[j + 1]) {
					swap(NIM[j], NIM[j + 1]);
					swap(nama[j], nama[j + 1]);
					swap(tahunMasuk[j], tahunMasuk[j + 1]);
				}
			}
		}

		cout << "Data Mahasiswa berdasarkan Tahun Masuk:" << endl;
		for (int i = 0; i < jumlahMahasiswa; i++) {
			cout << "NIM     : " << NIM[i] << endl;
			cout << "Nama    : " << nama[i] << endl;
			cout << "Tahun Masuk: " << tahunMasuk[i] << endl;
			cout << endl;
		}
	}
	else {
		cout << "Belum ada data mahasiswa." << endl;
	}
}

int main() {
	int pilihan;
	do {
		cout << "========== MENU MANAJEMEN DATA MAHASISWA ==========" << endl;
		cout << "1. Tambah Mahasiswa" << endl;
		cout << "2. Tampilkan Semua Mahasiswa" << endl;
		cout << "3. Cari Mahasiswa berdasarkan NIM" << endl;
		cout << "4. Tampilkan Mahasiswa berdasarkan Tahun Masuk" << endl;
		cout << "5. Keluar" << endl;
		cout << "Pilihan: ";
		cin >> pilihan;
		cin.ignore();

		switch (pilihan) {
		case 1:
			tambahMahasiswa();
			break;
		case 2:
			tampilkanSemuaMahasiswa();
			break;
		case 3:
			cariMahasiswaByNIM();
			break;
		case 4:
			algorithmSortByTahunMasuk();
			break;
		case 5:
			cout << "Terima kasih! Program selesai." << endl;
			break;
		default:
			cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
		}
		cout << endl;
	} while (pilihan != 5);

	return 0;
}

//2.  Bubbleshort quick sort array
/*3. - Stack adalah kumpulan item data yang dapat diakses hanya pada satu ujung, disebut
atas. Item dapat disisipkan dan dihapus dalam tumpukan hanya di bagian atas. Item terakhir
yang dimasukkan ke dalam tumpukan adalah item pertama yang akan dihapus. Oleh karena
itu, tumpukan disebut struktur data Last-In-First-Out (LIFO).
		- Queue bisa disebut juga dengan FIFO list.

*/
//4. kita bisa menggunakan array ketika data kita cukup banyak sekali karena array lebih efisien untuk data yang banyak
/*5. a. kedalaman yang dimiliki adalah 5
	 b. in order traversal
		1. Mengunjungi yang ke arah kiri dulu
		2. mengunjungi root
		3. mengunjungi yang ke arah kanan*/
