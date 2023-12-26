// Kelompok: 5
// Project: EduGrade
#include <iostream>
#include <iomanip>
using namespace std;

// Struct & Array
struct Bio {
    string nama;
    string alamat;
    string ttl;
};

Bio muridA[5] = {
    {"Irwan", "Alamat Irwan", "Tempat Tanggal Lahir Irwan"},
    {"Sukma", "Alamat Sukma", "Tempat Tanggal Lahir Sukma"},
    {"Juprin", "Alamat Juprin", "Tempat Tanggal Lahir Juprin"},
    {"Wulan", "Alamat Wulan", "Tempat Tanggal Lahir Wulan"},
    {"Jupri", "Alamat Jupri", "Tempat Tanggal Lahir Jupri"}
};

Bio muridB[5] = {
    {"Fajar", "Alamat Fajar", "Tempat Tanggal Lahir Fajar"},
    {"Azizah", "Alamat Azizah", "Tempat Tanggal Lahir Azizah"},
    {"Ali", "Alamat Ali", "Tempat Tanggal Lahir Ali"},
    {"Amanatun", "Alamat Amanatun", "Tempat Tanggal Lahir Amanatun"},
    {"Yudi", "Alamat Yudi", "Tempat Tanggal Lahir Yudi"}
};

Bio muridC[5] = {
    {"Kifli", "Alamat Kifli", "Tempat Tanggal Lahir Kifli"},
    {"Anggie", "Alamat Anggie", "Tempat Tanggal Lahir Anggie"},
    {"Nadir", "Alamat Nadir", "Tempat Tanggal Lahir Nadir"},
    {"Nadin", "Alamat Nadin", "Tempat Tanggal Lahir Nadin"},
    {"Suryadi", "Alamat Suryadi", "Tempat Tanggal Lahir Suryadi"}
};

// Fungsi deklarasi
bool login();
void hu();
void input();
void nilai(Bio murid[], int index);

// Fungsi login
bool login() {
    string username = "adit001";
    string password = "smanindo";
    string namaguru = "Pak Aditiya";

    do {
        cout << "Halo! Silahkan masukkan username dan password anda \n \n";

        cout << "Username: ";
        cin >> username;

        cout << "Password: ";
        cin >> password;
        cout << endl;

        if (username == "adit001" && password == "smanindo") {
            cout << "Login berhasil. Selamat datang, " << namaguru << "! \n" << endl;
            return true;
        } else {
            cout << "Login gagal. Cek kembali username dan password.\n \n";
        }
    } while (true);
}

// Fungsi dashboard
void hu() {
    string namasekolah = "SMA Negeri 01";
    string kurikulum = "Merdeka Belajar";
    string ta = "2023/2024";
    char kls;

    cout << "=== Selamat Datang di EduGrade === \n" << endl;
    cout << "Nama Sekolah: " << namasekolah << endl;
    cout << "Kurikulum: " << kurikulum << endl;
    cout << "Tahun Ajaran: " << ta << "\n" << endl;
    cout << "=== Daftar Kelas ===" << endl;
    cout << "1. Kelas A \n";
    cout << "2. Kelas B \n";
    cout << "3. Kelas C \n";
}

// Fungsi input
void input() {
    int pilihan;
    char kls;

    do {
        cout << "\nPilih kelas (A, B, C): ";
        cin >> kls;

        if (kls == 'A' || kls == 'B' || kls == 'C' || kls == 'a' || kls == 'b' || kls == 'c') {
            Bio* mrd;
            int jum;

            switch (kls) {
                case 'A':
                case 'a':
                    mrd = muridA;
                    jum = 5;
                    cout << "\n === Kelas A ===\n";
                    cout << "Wali kelas: Sudarsino \n";
                    cout << "Jumlah murid: 5 \n";

                    cout << "Daftar murid: \n";
                    for (int i = 0; i < 5; i++) {
                        cout << i + 1 << ". " << muridA[i].nama << endl;
                    }
                    break;
                case 'B':
                case 'b':
                    mrd = muridB;
                    jum = 5;
                    cout << "\n === Kelas B ===\n";
                    cout << "Wali kelas: Jumaeda \n";
                    cout << "Jumlah murid: 5 \n";

                    cout << "Daftar murid: \n";
                    for (int i = 0; i < 5; i++) {
                        cout << i + 1 << ". " << muridB[i].nama << endl;
                    }
                    break;
                case 'C':
                case 'c':
                    mrd = muridC;
                    jum = 5;
                    cout << "\n === Kelas C ===\n";
                    cout << "Wali kelas: Irwan \n";
                    cout << "Jumlah murid: 5 \n";
                    cout << "Daftar murid: \n";
                    for (int i = 0; i < 5; i++) {
                        cout << i + 1 << ". " << muridC[i].nama << endl;
                    }
                    break;
            }
            cout << "Pilih murid (1-5) atau ketik '0' untuk kembali ke halaman utama: ";
            cin >> pilihan;

            if (pilihan == 0) {
                hu();
            } else if (pilihan >= 1 && pilihan <= jum) {
                cout << "\nAnda memilih murid nomor " << pilihan << " dari Kelas " << kls << endl;
                cout << "=== Biodata Murid === \n";
                cout << "Nama: " << mrd[pilihan - 1].nama << endl;
                cout << "Alamat: " << mrd[pilihan - 1].alamat << endl;
                cout << "Tempat Tanggal Lahir: " << mrd[pilihan - 1].ttl << endl;

                nilai(mrd, pilihan - 1);
            } else {
                cout << "Nomor murid tidak valid. Silahkan coba lagi." << endl;
            }
        } else {
            cout << "Kelas yang anda pilih tidak tersedia. Silahkan coba lagi." << endl;
        }
    } while (true);
}

// Fungsi penilaian
void nilai(Bio murid[], int index) {
    char opsi;
    string tuntas = "tuntas";
    string remedi = "remedial";

    do {
        cout << "\nDaftar Mata Pelajaran: \n";
        cout << "1. Bahasa Indonesia \n";
        cout << "2. Bahasa Inggris \n";
        cout << "3. Matematika \n";

        int nilaiBI, nilaiInggris, nilaiMatematika;

        cout << "Input nilai Bahasa Indonesia: ";
        cin >> nilaiBI;

        cout << "Input nilai Bahasa Inggris: ";
        cin >> nilaiInggris;

        cout << "Input nilai Matematika: ";
        cin >> nilaiMatematika;

        double ratarata = (nilaiBI + nilaiInggris + nilaiMatematika) / 3;

        cout << "\n=== Nilai Murid ===\n";
        cout << "Rata-rata nilai: " << setprecision(2) << fixed << ratarata << endl;

        if (ratarata >= 90 && ratarata <= 100) {
            cout << "Grade: A \n";
            cout << "Status: " << tuntas << endl;
        }
        else if (ratarata >= 75 && ratarata <= 90) {
            cout << "Grade: B \n";
            cout << "Status: " << tuntas << endl;
        }
        else {
            cout << "Grade: C \n";
            cout << "Status: " << remedi << endl;
        }

        cout << "\nPenilaian murid telah selesai, apakah anda ingin melanjutkan inputan nilai? (y/n): ";
        cin >> opsi;

        if (opsi == 'y' || opsi == 'Y') {
            input();
        }
        else if (opsi == 'n' || opsi == 'N') {
            cout << "Terima kasih! Program akan keluar.\n";
            exit(0);
        }
    } while (true);
}

// Fungsi utama
int main() {
    login();
    hu();
    input();

    return 0;
}
