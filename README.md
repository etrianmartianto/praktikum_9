# praktikum_9

Pengertian Array

Array merupakan sebuah variabel yang menyimpan lebih dari 1 buah data yang memiliki tipe data yang sama. Jadi dapat dikatakan bahwa array merupakan kumpulan dari data-data tunggal yang dijadikan dalam 1 variabel array yang alamat memorinya berbeda yang selanjutnya disebut elemen-elemen array yang bisa kita akses berdasarkan indeks.

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

Hasil Screenshootnya 

![alt text](https://github.com/etrianmartianto/praktikum_9/blob/master/Latihan2/ss_lat2.png)



# Latihan 3 (Mengalikan dua buah matriks dengan jumlah baris dan kolom yang sama)


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

Hasil Screenshoot

![alt text](https://github.com/etrianmartianto/praktikum_9/blob/master/Latihan4/ss_lat4.png)