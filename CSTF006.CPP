#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<ctype.h>
#define ulpj 10000 //deklarasi konstanta (upah lembur perjam)
// deklarasi fungsi
void header(void);
void input_data_karyawan(void);
void tentukan_upah_perjam(void);
//deklarasi variabel global
char nama[15],gol;
float upah_perjam,upah_perminggu;
int jumlah_jam_kerja;
main()
{
    system("cls");
    header();
    input_data_karyawan();
    tentukan_upah_perjam();

    if(jumlah_jam_kerja>48){
        upah_perminggu=48*upah_perjam + (jumlah_jam_kerja-40)*ulpj; //mingguan ada lembur
    }else{
        upah_perminggu=jumlah_jam_kerja*upah_perjam; //mingguan tidak ada lembur
    }

    //tampilkan upah mingguan seorang karyawan
    printf("Upah mingguan atas nama %s sebesar Rp. %.2f",nama,upah_perminggu);
    
    getch();
    return 0;
}

//definisi fungsi
void header(void){
    puts("Program Upah Mingguan Karyawan PT. MAKMUR");
    puts("-----------------------------------------");
}


void input_data_karyawan(void){
    printf("Nama Karyawan       = "); gets(nama);
    printf("Golongan            = "); gol=getche();
    printf("\nJumlah jam kerja    = "); scanf("%d",&jumlah_jam_kerja);
}

void tentukan_upah_perjam(void){
    switch(toupper(gol)){
        case 'A': upah_perjam=20000; break;
        case 'B': upah_perjam=30000; break;
        case 'C': upah_perjam=40000; break;
        default : upah_perjam=50000; 
    }
}