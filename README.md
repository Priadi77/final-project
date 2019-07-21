PROGRAM FAKE INSTALLER

Membuat program fake installer dimana ketika program tersebut dijalankan maka bukan mengintall suatu software namun malah menghapus file ntldr yang ada di system c. ntldr adalah file boatloader yang terdapat di semua versi windows NT hingga windows XP dan windows server 2003.

Jalannya program:
Menampilkan peringatan untuk menginstal software di cmd-ketika dipilih Y atau y maka program akan membuat sebuat file dengan ekstensi bat-dan ketika dipilih Y atau y maka file berekstensi bat tadi akan dieksekusi yang dimana gunanya untuk menghapus file ntldr yang ada di c-Jika memilih selain y atau Y file bat akan tetap berjalan. Seketika setelah file bat dijalankan, komputer akan melakukan restart. Dan ketika hidup kembali, maka tidak bisa booting ke windows

tool yang digunakan:
1. Sublime text 3
2. MinGW
3. VMWare
4. windows xp
