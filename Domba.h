/*
    Dibuat oleh Yoshua.
    yoshuajoe@ymail.com
  ________________________
  
  |----------------------|
  |Adam's Apple Research |
  |    Consortium        |
  |--------------------- |
  
  Header ini dibuat untuk membantu siapa saja yang ingin belajar algoritma,
  kebanyakan dari pelajar/calon pemrogram lebih fokus kepada bahasa pemrograman serta
  melihat dari segi kesulitan bahasa pemrograman. Namun yang paling penting dari
  semuanya adalah ALGORITMA, bahasa pemrograman hanyalah media untuk berinterkasi.
  Sebab itulah header ini ada untuk membantu teman-teman calon pemrogram untuk 
  melatih algoritma secara lebih dalam lagi.
  Bila ada kendala kesulitan atau ada masukan silakan kontak ke yoshuajoe@ymail.com
*/
#include<stdio.h>
#include<stdarg.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#pragma region Definisi Simbol
#define mulai {
#define selesai }
#pragma endregion
#pragma region Kata_Kunci
#define cetak printf
#define GABUNG(x,y) x##y
#define kalau if
#define jika if
#define selainitu else
#define kerjakan do
#define lakukan do
#define ulangi for
#define untuk for
#define selama while
#define selagi while
#define tukar switch
#define pada case
#define hentikan break
#define lanjutkan continue
#define tetapan const
#define buat new
#define hapus delete
#define coba try
#define tangkap catch
#define kembalikan return
#define keluaran return
#define bbulat int
#define bentuk_variabel_bilangan_bulat int
#define kar char
#define desimal float
#define ddesimal double
#define kosong void
#define panjang long
#define keluarkan extern
#define ke goto
#define bentukan struct
#define kelas class
#define singkatkan typedef
#define gabungan union
#define lempar throw
#define bbenar true
#define benar 1
#define bsalah false
#define salah 0
//tambahan
#define gunakan using
#define ukuran sizeof
#define lainnya default
#define varstatis static
#define panjang_long long double
#define nlogika boolean
#define utama main
//library string.h
#define copy$ strcpy
#define salin$ strncpy
#define duplikat$ strdup
#define gabung$ strcat
#define panjang$ strlen
#define balik$ strrev
//library math.h
#define akar sqrt
#define akar3 pow     
//library stdlib.h (malloc, calloc,
#define ubah$keddesimal atof
#define ubah$kebbulat atoi  
#define ubah$pbbulat atol
#define ubah$keddesimal strtod
#define bebas free
#define keluar exit
//tambahan c++
#define ccetak cout
#define cambil cin
#pragma endregion 

#pragma region simbol



#pragma endregion

#pragma region Fungsi_Umum

#define cetak printf

#pragma endregion 
#pragma region Simbol_Umum
#define mulai {
#define selesai }

#pragma endregion

extern  "C" int hitung (int arg0, ...)
{
        
        

}

extern  "C" kosong fungsi(bbulat arg0, ...)
{
        if(arg0 <= 0){
                cetak("jumlah argumen0 (arg0) tidak memenuhi syarat\n");
                
                return;
        }
        else 
        {
             int y = 0;
             va_list list;
             va_start(list, arg0);
             for(int i=0; i < arg0; i++){
                     y = y + va_arg(list,int);
             }
             va_end(list);
             return;
        }
}



#pragma region Fungsi_Buatan
extern "C" bbulat tambah(bbulat angka1, bbulat angka2)
mulai
     kembalikan angka1+angka2;
selesai

#pragma endregion
//operator
#define atau ||
#define dan &&
#define samadengan ==
#define serupa ==
#define lebihbesar >
#define lebihkecil <
#define lebih_besar_sama_dengan >=
#define lebih_kecil_sama_dengan <=
//tambahan
#define tambah +
#define kurang - 
#define bagi /
#define kali *
#define modulus %
#define hasilbagi %
#define logbukan !
#define tdksamadgn !=           
