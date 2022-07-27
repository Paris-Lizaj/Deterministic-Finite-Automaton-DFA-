#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
using namespace std;  
#include <cstring>


int main(){

	FILE *file = NULL; 
  	char fname[20];
	printf(" Input the filename to be opened : ");
	scanf("%s",fname);	
    file = fopen(fname, "r");
    
  int counteri=0,countergoal;
  char num[100][9];//mexri 9 steiles kathws h grammi me ta goal diladi h 4h grammi exei mexri 9 katastaseis 
  char i;
  int counterj=0;
	char test;//na dw an einai to newline
  while (!feof (file))
    {  
    i=fgetc(file);
    
  
    	
      if(i=='\n' || i==' ')//an einai newline h kenos xarakthras(prepei na bei gia na katanalwthoun swsta oloi oi xaraktires sthn mnhmh)
	  {

    			if(i=='\n')//kai meta vlepw an prokeite apla gia to newline alliws shmainei oti htan apla keno opote mhn kaneis tpt kai pigene ston opomeno xaraktira tou arxeiou
    			{
				
                  	counteri++;//allakse grammi
                     counterj=0;
					 //printf ("COUNTERi= %d   COUNTERj=%d \n",counteri,counterj);
   			 	}
	    }
   else{
   	
  num[counteri][counterj]=i;
	 // printf ("COUNTERi= %d   COUNTERj=%d \n",counteri,counterj);
   counterj++;
   }
     if(counteri==3 )	//to vazw gia na borw na kserw argotera poses katastaseis stoxous exw na eleksw
		countergoal=counterj;	  
    }

    //**************************************  DEBUGING***********************************************
    
    //elegxo an exoun apothikeutei ola swsta sthn mnhmh kai stis metavlites pou thelw an 
   	//katanalonontai swsta  oi xaraktires mou kai an einai genika swsth h leitourgia tou programmatos  
    //parakatw uparxoun kai alles print f se sxolio pou eksipiretisan mono sto debuging gia auto exoun
    //paraminei alla se sxolia
    
    
    //    printf ("**********************************************************************************\n ");
	//	 printf ("PREPEI NA DINEI 4: %c\n ", num[1][4]);
	//	 printf ("PREPEI NA DINEI 3: %c\n ", num[0][0]);
   	//	 printf ("PREPEI NA DINEI 1: %c\n ", num[1][1]);
    //	 printf ("PREPEI NA DINEI 2: %c \n", num[9][2]);
    //	 printf ("PREPEI NA DINEI 0: %c \n", num[5][1]);
    //   printf ("PREPEI NA DINEI 2: %c \n", num[8][0]);
    //    printf ("PREPEI NA DINEI 1: %c \n", num[8][1]);
    //     printf ("PREPEI NA DINEI 2: %c \n", num[8][2]);
 	//		 printf ("PREPEI NA DINEI 1: %c \n", num[3][1]);
    //int teliko[100][3];    
    // for(int r=0;r<counteri+1;r++)
    //    for(int c=0;c<3;c++)
    //     teliko[r][c] =num[r][c]- '0';	//kanw ton pinaka apo int

    //printf("COUNTER i: %d\n",counteri);   
    //  printf ("**********************************************************************************\n ");
    //	int a;
    //	a=teliko[0][0]+teliko[8][2];//3+2
	//  printf ("PREPEI NA DINEI 5: %d\n ", a);
   	//  printf ("PREPEI NA DINEI 1: %d\n ", teliko[1][1]);
    //	printf ("PREPEI NA DINEI 2: %d \n", teliko[9][2]);
    //  printf ("PREPEI NA DINEI 0: %d \n", teliko[5][1]);
    //  printf ("PREPEI NA DINEI 2: %d \n", teliko[8][0]);
	//  printf ("PREPEI NA DINEI 1: %d \n", teliko[8][1]);
    //  printf ("PREPEI NA DINEI 2: %d \n", teliko[8][2]);
 	//	printf ("PREPEI NA DINEI 1: %d \n", teliko[3][1]);

    
    
 int  thesallileksi=1;
 while (thesallileksi==1||thesallileksi==2)     
    {
   char apantisi[10];
   printf("DWSE LEKSI GIA ELEGXO: ");
   scanf("%s",apantisi);
    //ARXIKI KATASTASI          num[2][0] 
	//TELIKI KATASTASI 			num[3][0] num[3][1]
	//APO TO num[4][0] num[4][1] num[4][2] kai meta exw tous kanones

	char poueimai =num[2][0] ;
	int counterapantisi=0;//deiktis pou arxika deixnei sto prwto xaraktira  tou pinaka pou einai apothikeumeni h apantisi
	// printf("POUEIMAI: %c \n ",poueimai);


 for(int rulesi=4;rulesi<counteri+1;rulesi++)//apo thn 5 grammi pou ksekinane oi kanones mexri to telos
   {
  	//printf("NUM[%d][0]: %   Poueimai: %c   \n ",rulesi,num[rulesi][1],apantisi[counterapantisi]);
	 if(num[rulesi][0]==poueimai)		//arxika vlepw an o deikteis pou deixnei pou vriskomai einai idios me to prwto stoixeio kapoiu kanona 
    {									//an nai sunexizw na dw an ekei pou vriskomai o deiktis ths apantisis me ton sugkekrimeno kanona einai o idios xarakthras gia na allaksw  katastasi
    									
    	if(num[rulesi][1]==apantisi[counterapantisi])//An einai o idios xarakthras tote 
    	{
	//	 printf("POUEIMAI: %c \n ",poueimai);
    	poueimai=num[rulesi][2];					//to pou eimai allazei katastash kai metavainei sthn katastash opou mou upodikniei o kanonas mou diladi apo thn gammi tou kanona mou o xarakthras ths triths stilis
   		counterapantisi++;	
   		 }
	}
  //  printf("POUEIMAI: %c \n ",poueimai);
	}

    
   		int flag=0;
    	for(int teliko=0;teliko<countergoal;teliko++)	//elegxo to teliko poueimai me tis katastaseis tou stoxou kai an vrethei kapoia shmainei oti o stoxos epiteuxthike an oxi tote den einai apodekti h leksi 
    	if(poueimai==num[3][teliko])
		flag=1;
	
		if(flag==1)
    	printf("H LEKSI EINAI APODEKTI  :) \n");
    	else
		printf("H LEKSI DEN EINAI APODEKTI :( \n");   
    

// printf("%c\n",apantisi[2]);			ETSI PERNW MONO ENAN XRA/KA APO TON PINAKA THS APANTISIS


	printf("\n*********************************************************************\nTHES ALLH LEKSI GIA ELEGXO?\nGIA NAI PATA: 1\nGIA OXI PATA 0: \nAN THES NA EISAGEIS NEO ARXEIO KAI NA DEIS PALI GIA LEKSI PATA: 2\n");
	  scanf("%d", &thesallileksi);  
	cin.ignore();
	
	
	
	if(thesallileksi==2)//an den thelei na dei gia kapoia alli leksi
	{
	
	printf(" DWSE ONOMA TO TOU ARXEIOU: ");
	scanf("%s",fname);	
    file = fopen(fname, "r");
	while (!feof (file))
    {  
    i=fgetc(file);
    
  
    	
      if(i=='\n' || i==' ')//an einai newline h kenos xarakthras(prepei na bei gia na katanalwthoun swsta oloi oi xaraktires sthn mnhmh)
	  {

    			if(i=='\n')//kai meta vlepw an prokeite apla gia to newline alliws shmainei oti htan apla keno opote mhn kaneis tpt kai pigene ston opomeno xaraktira tou arxeiou
    			{
				
                  	counteri++;//allakse grammi
                     counterj=0;
					 //printf ("COUNTERi= %d   COUNTERj=%d \n",counteri,counterj);
   			 	}
	    }
   else{
   	
  num[counteri][counterj]=i;
	 // printf ("COUNTERi= %d   COUNTERj=%d \n",counteri,counterj);
   counterj++;
   }
     if(counteri==3 )	//to vazw gia na borw na kserw argotera poses katastaseis stoxous exw na eleksw
		countergoal=counterj;	  
    }
	
	}

}
    
  fclose (file);        
    return 0;
}
