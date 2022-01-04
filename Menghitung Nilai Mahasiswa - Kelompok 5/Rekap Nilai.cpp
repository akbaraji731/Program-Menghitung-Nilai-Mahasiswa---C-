// pustaka atau library standart dari c++
// beberapa contoh library standart: stdio.h, iostream, math.h dan lain lain.
// setiap library memiliki kegunanaannya masing-masing, yang pasti library ini berisi deklarasi dari suatu fungsi yang akan digunakan.
// setiap memasukkan library, wajib diawali dengan #include lalu masukkan library nya didalam <disini>.
#include <iostream>

// termasuk seperti library yang berisi sebuah deklarasi suatu fungsi: seperti string, boolean, char dan lain sebagainya.
using namespace std;

//==================================================== Warna - Warna Pada CMD ==========================================================|
//  0 = Black       8 = Gray                                                                                                            |
//  1 = Blue        9 = Light Blue                                                                                                      |
//  2 = Green       A = Light Green                                                                                                     |
//  3 = Aqua        B = Light Aqua                                                                                                      |
//  4 = Red         C = Light Red                                                                                                       |
//  5 = Purple      D = Light Purple                                                                                                    |
//  6 = Yellow      E = Light Yellow                                                                                                    |
//  7 = White       F = Bright White                                                                                                    |
//                                                                                                                                      |
// contoh penulisan pada c++                                                                                                            |
// system("color b4");                                                                                                                  |
// penjelasan singkatnya                                                                                                                |
// system: mesin yang akan menjalankan program, yaitu ialah CMD (Command Prompt),                                                       |
// color: warna pada sistem yang akan kita ubah,                                                                                        |
// jika hanya memasukkan 1 variable warna seperti "color 1", maka hanya warna teks yang berubah menjadi biru                            |
// kalau memasukkan 2 variable warna seperti "color b4", maka variable warna pertama akan mendifinisikan warna background               |
// dan variable warna kedua akan mendefinisikan warna teks, maka dapat disimpulkan "color b4" = background light aqua dan teks merah.   |
//======================================================================================================================================|

//================= Fungsi - Fungsi ====================|
//     %c untuk menampilkan karakter,                   |
//     %s untuk menampilkan teks(string),               |
//     %d untuk menampilkan bilangan desimal,           |
//     %i untuk menampilkan bilangan desimal,           |
//     %f untuk menampilkan bilangan pecahan,           |
//     %o untuk menampilkan bilangan oktal,             |
//     %x untuk menampilkan bilangan heksadesimal,      |
//     \t untuk membuat tabs,                           |
//     \n untuk membuat baris baru,                     |
//     & memori penyimpanan variable input,             |
//     %[^\n] untuk mengabaikan pemeriksaan spasi string|
//======================================================|

// void (){} adalah sebuah deklarasi sebuah fungsi yang akan digunakan didalam main program kita
void hapusterminal()
{
    system("cls"); // berfungsi menghapus tampilan yang ada diterminal
}

void enter()
{
    printf("\n"); // memberikan jarak antar baris kalimat, dengan sebuah teks kosong
}

void judul() // fungsi judul
{
    enter();
    printf("<====================================================================>\n");
    printf("|                         REKAPITULASI NILAI                         |\n");
    printf("|                  PRAKTIKUM LOGIKA DAN PEMROGRAMAN                  |\n");
    printf("|                     MANAJEMEN INFORMATIKA 1 IN                     |\n");
    printf("<====================================================================>\n");
    enter();
    enter();
}

// bisa dibilang sebagai inisialisasi atau pendeklarasian dari suatu variable ataupun fungsi yang akan kita gunakan di main program.
// string untuk deklarasi variable yang berisi teks
// int untuk deklarasi variable yang berisi angka
string nama;
int npm;

int tugas_1;
int tugas_2;
int quiz_1;
int quiz_2;
int uts;
int uas;
int sikap;

int nilai_total;
int rata_rata;

// int(){} adalah bagian utama untuk menjalankan program
// printf() fungsinya menampilkan output ke layar (CMD)
// scanf() sebagai inputan kedalam suatu variable
// bentuk input dan output lainnya adalah:
// cout << sebagai penampil output
// cin >> sebagai inputan
int main()
{
    system("color 0a"); // Background Hitam, Teks Hijau
    judul();

    printf("Masukkan Nama Lengkap : "), scanf(" %[^\n]", &nama);
    printf("Masukkan NPM          : "), scanf(" %[^\n]", &npm);
    enter();
    enter();

    printf("Masukkan Nilai Nilai Yang Ada Dibawah Ini!\n");
    printf("Nilai Tugas Harian 1  : "), scanf("%i", &tugas_1);
    printf("Nilai Tugas Harian 2  : "), scanf("%i", &tugas_2);
    printf("Nilai Quiz 1          : "), scanf("%i", &quiz_1);
    printf("Nilai Quiz 2          : "), scanf("%i", &quiz_2);
    printf("Nilai UTS             : "), scanf("%i", &uts);
    printf("Nilai UAS             : "), scanf("%i", &uas);
    printf("Nilai Sikap           : "), scanf("%i", &sikap);
    enter();
    enter();
    printf("Klik Apa Saja Untuk Lanjut!    "), system("pause"); // Menjeda sistem sementara

    // Halaman Berikutnya

    hapusterminal(); // Menghapus teks, perintah, program yang ada diatas
    enter();
    printf("<================ Data Mahasiswa =================> \n");
    printf("Nama Lengkap          : %s\n", nama);
    printf("Nomor Pokok Mahasiswa : %i\n", npm);
    enter();

    printf("Rekap Nilai Mata Kuliah\n");
    printf("Tugas 1 : %i\n", tugas_1);
    printf("Tugas 2 : %i\n", tugas_2);
    printf("Quiz 1  : %i\n", quiz_1);
    printf("Quiz 2  : %i\n", quiz_2);
    printf("UTS     : %i\n", uts);
    printf("UAS     : %i\n", uas);
    printf("Sikap   : %i", sikap);

    // metode pengkondisian IF ELSE (Jika pada suatu kondisi "if", maka jalankan perintah ini "then")
    //(Jika kondisi awal tidak terpenuhi, maka jalankan "then" nya else)
    if (sikap >= 85)
    {
        printf(" = A (Baik)\n");
    }
    else if (sikap >= 70)
    {
        printf(" = B (Sedang)\n");
    }
    else if (sikap >= 50)
    {
        printf(" = C (Kurang)\n");
    }
    else
    {
        printf(" = D (Sangat Kurang)\n");
    }
    enter();

    // fungsi atau variable data
    nilai_total = tugas_1 + tugas_2 + quiz_1 + quiz_2 + uts + uas + sikap;
    printf("Total   = %d : 7", nilai_total);
    rata_rata = nilai_total / 7;
    printf(" = %d\n", rata_rata);
    if (rata_rata >= 80)
    {
        printf("Bobot   : A \n");
        enter();
        printf("<===================================================> \n");
        printf("| Selamat, anda dinyatakan lulus dengan sangat baik | \n");
        printf("<===================================================> \n");
        system("color 27"); // Background Hijau Tua, Teks Putih
    }
    else if (rata_rata >= 66)
    {
        printf("Bobot   : B \n");
        enter();
        printf("<============================================> \n");
        printf("| Selamat, anda dinyatakan lulus dengan baik | \n");
        printf("<============================================> \n");
        system("color a7"); // Background Hijau Muda, Teks Putih
    }
    else if (rata_rata >= 54)
    {
        printf("Bobot   : C \n");
        enter();
        printf("<===========================================> \n");
        printf("| Selamat, kamu dinyatakan lulus bersyarat! | \n");
        printf("<===========================================> \n");
        system("color 67"); // Background Hijau, Teks Putih
    }
    else
    {
        printf("Bobot   : D \n");
        enter();
        printf("<=====================================> \n");
        printf("| Maaf, kamu belum lulus semester ini | \n");
        printf("<=====================================> \n");
        system("color 47"); // Background Merah, Teks Putih
    }

    enter();
    enter();
    return 0;
}

/*

<===============++++===============>
~~~~~~ Dibuat Oleh Kelompok 5 ~~~~~~
<===============++++===============>
1. Muhammad Fajarul Akbar Aji Putra
2. Dwi Putra Mahkota
3. Wira
4. Mar'i

*/
