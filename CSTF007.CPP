#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<ctype.h>
#define ulpj 10000 //upah lembur perjam
//deklarasi fungsi
void input_data_karyawan(void);
float upah_perjam(void);
//deklarasi variabel
char nama[15],gol; 
float upah_perminggu;
int jumlah_jam_kerja;

main()
{
    system("cls");
    puts("Program upah mingguan karyawan PT.MAKMUR");
    puts("----------------------------------------");
    input_data_karyawan();

    //menghitung upah mingguan seorang karyawan
    if(jumlah_jam_kerja>48){
        upah_perminggu=48*upah_perjam() + (jumlah_jam_kerja-40)*ulpj; //jika ada lembur
    }else{
        upah_perminggu=jumlah_jam_kerja*upah_perjam();
    }

    //menampilkan upah mingguan seorang karyawan
    printf("Upah mingguan atas nama %s sebesar Rp. %.2f",nama,upah_perminggu);

    getch();
    return 0;
}

//definisi fungsi
void input_data_karyawan(void){
    printf("Nama karyawan       = "); gets(nama);
    printf("Golongan            = "); gol=getche();
    printf("\nJumlah jam kerja   = "); scanf("%d",&jumlah_jam_kerja);
}

float upah_perjam(){
    float upah_perjam;
    switch(toupper(gol)){
        case 'A': upah_perjam=20000; break;
        case 'B': upah_perjam=30000; break;
        case 'C': upah_perjam=40000; break;
        case 'D': upah_perjam=50000; break;
    }
    return(upah_perjam);
}