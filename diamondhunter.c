#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <windows.h>

void baslik(){
	printf("\t\t\t\t* HAZINE AVCISI OYUNU *\n");
	printf("\t\t\t\t***********************\n\n");
	printf("KARAKTERINIZ ' * ' ILE GOSTERILECEK \n");
	printf("HAREKET ICIN W,A,S,D TUSLARINI KULLANIN\n\n");
}

int main() {
	
	
	srand(time(NULL));
	int matrisa[10][10]={0};
	int a;
	int c;
	int b;
	int elmas=5;
	int muhafiz;
	int deger;
	int ata=0;
	int elmasa[5]={}; //elmasın x değişkeni 
	int elmasb[5]={}; //elmasın y değişkeni
	int random1,random2;
	int hak=3; //3 . haktan sonra basa donecek.
	//!= operatörleriyle konrol et
	//elmasları atama: 
	while(elmas!=0){ //başlama şartı tanımladık
	
		int say=0;
		random1=rand()%10; //random sutun
		random2=rand()%10; //random satır
		matrisa[2][4]=3;  //player konumu
		ata=deger;              //elmas atanıp satir sutun degeri esitlendi
	
	for(c=0;c<ata+1;c++){           
		if(elmasa[c]!=random1 ){     //atanan random değerin x değeri atanan elmasların x değerine eşit değilse
			if(elmasb[c]!=random2){  //atanan random değerin x değeri atanan elmasların y değerine eşit değilse
				say=say+1;           //yeni elmas oluştur 
			}
		}
		//c elmas sayacı ve randomların x ve y değerlerine eşit olana kadar üret.
	}
			if(say==deger+1 ){    //random değerlerin x ve y lerine göre koşulu sağla.
			if(matrisa[random1][random2]!=3){
			elmasa[deger]=random1;
		elmasb[deger]=random2;
		matrisa[random1][random2]=1;
		elmas=elmas-1;
		deger=deger+1;		
		}
	}
		
	}


//muhafız atanma
	int muhafizx=0;  
	int muhafizy=0;   
	int rand1;
	int rand2;
	int dizia[5]={};
	int dizib[5]={};
	int matris[10];
	
	
	while(muhafizx!=5){ //muhafız şartı
		rand1=rand()%10; //rand1=rastgele satır
		rand2=rand()%10; //rand2=rastgele sütun
		//aynı yere muhafız atamamak için tüm elmasların etrafındaki matrisleri kontrol edip sonra atandı.
		if(matrisa[rand1][rand2]!=1){  //muhafızların üst üste gelmesini engelle.
			if(rand1==elmasa[muhafizy]-1 ){ 
				if(rand2==elmasb[muhafizy]){
					if(matrisa[rand1][rand2]!=3){
					dizia[muhafizx]=rand1;
				dizib[muhafizx]=rand2;
				matrisa[rand1][rand2]=muhafiz;
			muhafizx=muhafizx+1,muhafizy=muhafizy+1;
				
					}
				}
			}
			
			else if(rand1==elmasa[muhafizy]+1){
				if(rand2==elmasb[muhafizy]){
					if(matrisa[rand1][rand2]!=3){
				dizia[muhafizx]=rand1;
				dizib[muhafizx]=rand2;
				matrisa[rand1][rand2]=muhafiz;
				muhafizx=muhafizx+1,muhafizy=muhafizy+1;
					}
				}
			} 
			
			else if(rand1==elmasa[muhafizy]-1 ){
				if(rand2==elmasb[muhafizy]-1){
					if(matrisa[rand1][rand2]!=3){
						dizia[muhafizx]=rand1;
				dizib[muhafizx]=rand2;
				matrisa[rand1][rand2]=muhafiz;
				muhafizx=muhafizx+1,muhafizy=muhafizy+1;
					}
					
				}
		
			}
			else if(rand1==elmasa[muhafizy]-1){
				if(rand2==elmasb[muhafizy]+1){
					if(matrisa[rand1][rand2]!=3){
						dizia[muhafizx]=rand1;
				dizib[muhafizx]=rand2;
				matrisa[rand1][rand2]=muhafiz;
				muhafizx=muhafizx+1,muhafizy=muhafizy+1;	
						
					}
				}
			} 
			
		    else if(rand1==elmasa[muhafizy]){
		    	if(rand2==elmasb[muhafizy]+1){
		    		if(matrisa[rand1][rand2]!=3){
		    			dizia[muhafizx]=rand1;
				dizib[muhafizx]=rand2;
				matrisa[rand1][rand2]=muhafiz;
			muhafizx=muhafizx+1,muhafizy=muhafizy+1;
					}
		    		
				}
			} 
	        else if(rand1==elmasa[muhafizy]+1){
	        	if(rand2==elmasb[muhafizy]+1){
	        		if(matrisa[rand1][rand2]!=3){
	        			dizia[muhafizx]=rand1;
				dizib[muhafizx]=rand2;
				matrisa[rand1][rand2]=muhafiz;
				muhafizx=muhafizx+1,muhafizy=muhafizy+1;
					}
	        		
				}
			}
			 
	        else if(rand1==elmasa[muhafizy]+1 ){
	        	if(rand2==elmasb[muhafizy]-1){
	        		if(rand2==elmasb[muhafizy]-1){
	        			if(matrisa[rand1][rand2]!=3){
	        		dizia[muhafizx]=rand1;
				dizib[muhafizx]=rand2;
				matrisa[rand1][rand2]=muhafiz;
			muhafizx=muhafizx+1,muhafizy=muhafizy+1;
						}
					}
				}
			}
	}
}
//matris üzerinde hareket

int player;
int x=2; //oyuncunun başlayacağı konumu belirttik
int y=4;
int xdeger=2; //player x konumu
int ydeger=4; //player y konumu

atla:// goto kullanımı
	
	baslik(); //fonk çağırma , oyun başlangıcı
	printf("\n");
	for(a=0;a<10;a++){               //yazdırma (sadece player yazdırıldı.)
		for(b=0;b<10;b++){
			if(matrisa[a][b]==3){
				printf("*",matrisa[a][b]);
			}
			if(matrisa[a][b]==1){
						printf("    ",matrisa[a][b]);
			}
			if(matrisa[a][b]==muhafiz)
			{
						printf("    ",matrisa[a][b]);
			}
			if(matrisa[a][b]!=1 ){
				if(matrisa[a][b]!=muhafiz){
					printf("    ",matrisa[a][b]);
				}
			} 
			
		}
		printf("\n");
		}
		printf("\n");
		for(player=0;player<1;player++){              //ELMASLARIN HEPSİNİ TOPLAMA DURUMU
			if(matrisa[elmasa[0]][elmasb[0]]==0){     //player hepsini topladıktan sonra operatörlerle kontrol et ve alınan elmasın yerine atanan değer 0 ise hepsini kazanma durumu
				if(matrisa[elmasa[1]][elmasb[1]]==0){ //0'a eşitiliği kontrol etmemizin nedeni ise toplanan elmasların yerine tekrar 0 ataması.
					if(matrisa[elmasa[2]][elmasb[2]]==0){
						if(matrisa[elmasa[3]][elmasb[3]]==0){
							if(matrisa[elmasa[4]][elmasb[4]]==0){
								system("cls");
		printf("****************************************\n\n\n");
		printf("\t\t\t\t\t\tKAZANDINIZ\n\n");
		printf("\n******************************************\n\n");
								break;
							}
						}
						
					}
				}
			} 
		}
		
		int a1,a2,a3,a4,a5;            //uzaklık kontorlü için tanımlamalar.
		int b1,b2,b3,b4,b5;
		int uz1=0,uz2=0,uz3=0,uz4=0,uz5=0;
		
		//elmas uzakligi 1:
		a1=xdeger-elmasa[0]; //oyunucunun x değerinin uzaklığı ile elmasın x değerinin uzaklığı
		a1=abs(a1);
		b1=ydeger-elmasb[0]; //oyunucunun y değerinin uzaklığı ile elmasın y değerinin uzaklığı
		b1=abs(b1);
		uz1=a1+b1;              //x ve y değerlerini mutlak değer ile topla
			//elmas uzakligi 2:
			a2=xdeger-elmasa[1];
			a2=abs(a2);
			b2=ydeger-elmasb[1];
			b2=abs(b2);
			uz2=a2+b2;
				//elmas uzakligi 3:
					a3=xdeger-elmasa[2];
				a3=abs(a3);
				b3=ydeger-elmasb[2];
				b3=abs(b3);
				uz3=a3+b3;
				
					//elmas uzakligi 4:
						a4=xdeger-elmasa[3];
						a4=abs(a4);
					b4=ydeger-elmasb[3];
					b4=abs(b4);
					uz4=a4+b4;
						//elmas uzakligi 5:
						a5=xdeger-elmasa[4];
						a5=abs(a5);
						b5=ydeger-elmasb[4];
						b5=abs(b5);
						uz5=a5+b5;
						
	//matrisin konumu player konumuna eşit olursa elmas alindi yazdir.
	//oyunucu konumu ve elmas arasındaki mesafeyi yukarıda hesapladık kontrol şartları ile yazdırıldı.
	
	if(matrisa[elmasa[0]][elmasb[0]]==0){    
	printf("1. elmas alindi\n");
	}
	else{
		printf("1.elmas mesafesi= %d \n ",uz1);
			}
			
	if(matrisa[elmasa[1]][elmasb[1]]==0){
		printf("2. elmas alindi\n");
		
	}
	else{
	printf("2.elmas mesafesi= %d \n ",uz2);
		}
		
	if(matrisa[elmasa[2]][elmasb[2]]==0){
		printf("3. elmas alindi\n");
	}
	else{
		printf("3.elmas mesafesi= %d \n ",uz3);
		}
	if(matrisa[elmasa[3]][elmasb[3]]==0){
			printf("4. elmas alindi\n");
			}
	
	else{
		printf("4.elmas mesafesi= %d \n",uz4);
}
	if(matrisa[elmasa[4]][elmasb[4]]==0){
			printf("5. elmas alindi\n");	
	}
	else{
	
		printf("5.elmas mesafesi= %d \n\n ",uz5);}
		
	printf("Kalan Hakkiniz: %d \n",hak);
	while(hak!=0){  //kalan can 0 olana kadar devam etmesi için döngü ve continue ile devam etmek için while.
		char yon;
		yon=getche();  //matris üzerinde hareket.
		switch(yon){
			case 'w':
				if(x==0){      //x değeri matrisin 0. sutününa gelince uyar.
					printf("Alan disina cikamazsiniz ");
					continue;
				}
			             
				xdeger=x-1;
				ydeger=y;
				if(matrisa[x][y]!=muhafiz){ //muhafıza yakalanırsa baslangic konumuna
					matrisa[x][y]=0;
					
				}
				if(matrisa[x-1][y]!=muhafiz){
					matrisa[x-1][y]=3;
				}
				x=x-1;
				if(matrisa[x][y]==muhafiz){
					hak=hak-1;
					x=2;
					y=4;
					matrisa[2][4]=3;
					system("cls");
					printf("**********************************************************************************\n\n\n");
		
		printf("\t\t\tMUHAFIZA YAKALANILDI\n\n");
		printf("\n************************************************************************************\n\n");
					Sleep(1);
					system("cls");
				}
				system("cls");
				goto atla;break;
				case 's':
				if(x==9){  //x değeri matrisin 9. sutününa gelince uyar.
					printf("Alan disina cikamazsiniz ");
					continue;
				}
				
				xdeger=x+1;
				ydeger=y;
				if(matrisa[x][y]!=muhafiz){
					matrisa[x][y]=0;
					
				}
				if(matrisa[x+1][y]!=muhafiz){
					matrisa[x+1][y]=3;
				}
				x=x+1;
				if(matrisa[x][y]==muhafiz){
					hak=hak-1;
					x=2;
					y=4;
					matrisa[2][4]=3;
					system("cls");
					printf("**********************************************************************************\n\n\n");
		
		printf("\t\t\tMUHAFIZA YAKALANILDI\n\n");
		printf("\n************************************************************************************\n\n");
					sleep(1);
					system("cls");
				}
				system("cls");
				goto atla;break;
				case 'a':
				if(y==0){		//y değeri matrisin 0. satırına gelince uyar.
					printf("Alan disina cikamazsiniz ");
					continue;
				}
			
				xdeger=x;
				ydeger=y-1;
				if(matrisa[x][y]!=muhafiz){
					matrisa[x][y]=0;
					
				}
				if(matrisa[x][y-1]!=muhafiz){
					matrisa[x][y-1]=3;
				}
				y=y-1;
				if(matrisa[x][y]==muhafiz){
					hak=hak-1;
					x=2;
					y=4;
					matrisa[2][4]=3;
					system("cls");
					printf("**********************************************************************************\n\n\n");
		
		printf("\t\t\tMUHAFIZA YAKALANILDI\n\n");
		printf("\n************************************************************************************\n\n");
					sleep(1);
					system("cls");
				}
				system("cls");
				goto atla;break;
				case 'd':
				if(y==9){		//y değeri matrisin 9. satırına gelince uyar.
					printf("Alan disina cikamazsiniz ");
					continue;
				}
				
				xdeger=x;
				ydeger=y+1;
				if(matrisa[x][y]!=muhafiz){
					matrisa[x][y]=0;
					
				}
				if(matrisa[x][y+1]!=muhafiz){
					matrisa[x][y+1]=3;
				}
				y=y+1;
				if(matrisa[x][y]==muhafiz){
					hak=hak-1;
					x=2;
					y=4;
					matrisa[2][4]=3;
					system("cls");
					printf("**********************************************************************************\n\n\n");
		
		printf("\t\t\tMUHAFIZA YAKALANILDI\n\n");
		printf("\n************************************************************************************\n\n");
					sleep(1);
					system("cls");
				}
				system("cls");
				goto atla;break;
				 
				
				printf("Gecerli tusu girin. ");
				break;
				
				
		}
	}
	if(hak==0){    //hak 0 a eşitlenirse oyunu biter.
		system("cls");
		printf("**********************************************************************************\n\n\n");
		
		printf("\t\t\t\t\t\tGAME OVER\n\n");
		printf("\n************************************************************************************\n\n");
	}

	return 0;
}
