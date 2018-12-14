# praktikum_9

# Pengertian Array
```
Array merupakan sebuah variabel yang menyimpan lebih dari 1 buah data yang memiliki tipe data yang sama. Jadi dapat dikatakan bahwa array merupakan kumpulan dari data-data tunggal yang dijadikan dalam 1 variabel array yang alamat memorinya berbeda yang selanjutnya disebut elemen-elemen array yang bisa kita akses berdasarkan indeks.
```

# Latihan 1 ( Menentukan nilai minimum dan maksimum menggunakan array )
```
1. Mulai 
2. Inisialisasi nilai [100];
3. Inisialisasi input,minimal, maksimal;
4. Masukkan banyaknya input: ; cin >> input;
5. maksimal=-1000;
   minimal=1000;
6. Perulangan for ( int i=0; i<input; i++)
    {
        cout << " Nilai ke - " << i << " : " ;
        cin >> nilai [i];
    }
    cout << "\n" ;
7. Perulangan     for (int i=0; i<input; i++)
    {
        if(nilai[i]<minimal)
        {
            minimal=nilai[i];
        }
        if(nilai[i]>maksimal)
        {
            maksimal=nilai[i];
        }
    }
8. Cetak nilai minimal & nilai maksimal
9. Selesai 
```
Berikut Programnya
```
#include <iostream>
using namespace std;

int main()
{
    int nilai [100];
    int input,minimal, maksimal;
    cout << " Masukkan banyaknya input :" ; cin >> input ;
    cout << "\n" ;
    maksimal=-1000;
    minimal=1000;


    for ( int i=0; i<input; i++)
    {
        cout << " Nilai ke - " << i << " : " ;
        cin >> nilai [i];
    }
    cout << "\n" ;
    for (int i=0; i<input; i++)
    {
        if(nilai[i]<minimal)
        {
            minimal=nilai[i];
        }
        if(nilai[i]>maksimal)
        {
            maksimal=nilai[i];
        }
    }

    cout<<" Nilai minimal = " << minimal << endl;
    cout<<" Nilai maksimal = " << maksimal << endl;
    return 0;
}
```

Hasil Screenschoot 

![alt text](https://github.com/etrianmartianto/praktikum_9/blob/master/Latihan1/ss_lat1.png)










Flowchart


![alt text](https://github.com/etrianmartianto/praktikum_9/blob/master/Latihan1/Flowchart%201.png)







# Latihan 2 (Tentukan modus dari besar data 1 sampai 10) 
```
1.mulai program 
2.mencari modus dari data 1 sampai 10
3.masukan jumlah data = 10
4.masukan nilai-1
5.masukan nilai-2
6.masukan nilai-3
7.masukan nilai-4
8.masukan nilai-5
9.masukan nilai-6
10.masukan nilai-7
11.masukan nilai-8
12.masukan nilai-9
13.masukan nilai-10
14.setiap data di hitung frekuensi kemunculan nya
15.dari frekuensi tersebut dapat di tentukan modus dari data tersebut
16.selesai
```

Berikut Programnya
```
#include <iostream>
#include <math.h>
using namespace std;
class HitungStatistik {
friend ostream& operator<<(ostream&, HitungStatistik&);
friend istream& operator>>(istream&, HitungStatistik&);
public:
HitungStatistik();
void hitung_modus();
private:
void maksimum();
void frekuensi();
int maks, item;
int n;
int A[20];
int f[11];
};
HitungStatistik::HitungStatistik()
{ for (int i=0; i<20; i++) f[i] = 0; }
istream& operator>>(istream& in, HitungStatistik& a) {
cout << "Banyaknya data : ";
cin >> a.n;
for (int i = 0; i < a.n; i++) {
cout << "Data ke- : " << i+1 << " > ";
cin >> a.A[i];
}
return in;
}
void HitungStatistik::maksimum()
{
maks = f[0];
item = 1;
for (int i=0; i<n; i++)
if (f[i] > maks) {
maks = f[i];
item = i;
}
cout << "Modus = " << item;
}
void HitungStatistik::frekuensi()
{
for (int i=1; i<n; i++) ++f[A[i]];
}
void HitungStatistik::hitung_modus() {
cout << "Frekuensi running\n";
frekuensi();
maksimum();
}
ostream& operator<<(ostream& out, HitungStatistik& a) {
cout << "Mulai ...\n";
a.hitung_modus();
cout << "Nilai modus : " << a.item;
return out;
}
main() {
HitungStatistik run;
cin >> run;
cout << run;
return 0;
}
```

Hasil Screenshootnya 

![alt text](https://github.com/etrianmartianto/praktikum_9/blob/master/Latihan2/ss_lat2.png)



# Latihan 3 (Mengalikan dua buah matriks dengan jumlah baris dan kolom yang sama)

Berikut Programnya
```
#include <iostream>
using namespace std;
void baca_matriks (int mat[10][10], int baris, int kolom)
{ int i,j;
for (i=0; i<baris; i++)
for (j=0; j<kolom; j++)
{ cout << "Data [" << i+1 << "," << j+1 << "] : ";
cin >> mat[i][j];
}
}

void proses( int x[10][10],const int matriks1[10][10],const int matriks2[10][10], int baris, int kolom){
for(int i=0;i<baris;i++)
 for(int j=0;j<kolom;j++)
 {
  x[i][j]=0;
  for(int k=0;k<kolom;k++)
  x[i][j]=x[i][j]+matriks1[i][k]*matriks2[k][j];

}
}
void cetak_matriks (const int A[10][10], int baris, int kolom)
{ int i,j;
for (i=0; i<baris; i++)
{ for (j=0; j<kolom; j++)
cout << A[i][j]<<" ";
cout << endl;
}
}
 main() {
int m, n;
int matriks1[10][10], matriks2[10][10];
int x[10][10];
cout << "Banyak baris : ";
cin >> m;
cout << "Banyak kolom : ";
cin >> n;
cout << "Data matriks ke-1\n";
baca_matriks(matriks1,m,n);
cetak_matriks(matriks1,m,n);
cout << "Data matriks ke-2\n";
baca_matriks(matriks2,m,n);
cetak_matriks(matriks2,m,n);
proses(x,matriks1,matriks2,m,n);
cout << "Hasil Perkalian : \n";
cetak_matriks(x,m,n);
}
```

Berikut Screenshootnya
![alt text](https://github.com/etrianmartianto/praktikum_9/blob/master/Latihan3/ss_lat3.png)




# Latihan 4 (Program untuk menghasilkan suatu transpose suatu matriks)

```
Matriks transpose yaitu matriks yang diperoleh dari memindahkan elemen-elemen baris menjadi elemen pada kolom atau sebaliknya.
Transpose matriks A dilambangkan dengan AT Contoh: A3×2 =, maka AT =, perhatikan bahwa ordo dari AT adalah 2 x 3.
Algoritma Transpose Matrik

1.Masukkan ordo matrik(n)
2.Input matrik di dalam array [0][0] sampai dengan array[n][n]
3.ditampilkan matrik tersebut
4.menukar matrik[i][j] menjadi matrik[j][i]
5.ditampilkan hasil matrik tranpose
Deklarasi : a[10][10] : int m,n,i,j : int Deskripsi : Baca (m) Baca (n) for(i=0;i<m;i++) { for(j=0;j<n;j++) { Tulis a[i][j] Transpose : for(i=0;i<m;i++) { for(j=0;j<n;j++) { Transpose a[j][i] }
```

Berikut programnya
```
#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{

int a[10][10],m,n,i,j;
cout<<"Masukkan Jumlah Baris: ";
cin>>m;
cout<<"Masukkan Jumlah kolom: ";
cin>>n;


cout<<endl<<"Elemen matriks: "<<endl;
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
cout<<"masukkan elemen a: "<<i+1<<j+1<<": ";
cin>>a[i][j];
}
}
cout<<endl<<"Matriks: "<<endl<<endl;
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
cout<<a[i][j]<<" ";
}
cout<<endl<<endl;
}
cout<<endl<<"Transpose Matriks: "<<endl<<endl;
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
cout<<a[j][i]<<" ";
}
cout<<endl<<endl;
}

system("PAUSE");
return EXIT_SUCCESS;
}
```

Hasil Screenshoot

![alt text](https://github.com/etrianmartianto/praktikum_9/blob/master/Latihan4/ss_lat4.png)