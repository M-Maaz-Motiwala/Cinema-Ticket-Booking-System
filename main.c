#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<windows.h>

//Welcome Screen

void welcome(){
	HANDLE Console_color = GetStdHandle(STD_OUTPUT_HANDLE);
//	SetConsoleTextAttribute(Console_color, 43);
	system("Color 70");
	printf("\n *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *");
	printf("\n *\t\t\t\t\t\t\t\t\t\t\t\t\t\t*");
	printf("\n *\t\t\t\t\t\t\t\t\t\t\t\t\t\t*");
	printf("\n *\t\t\t            M o v i e\tT i c k e t\tB o o k i n g\t\t\t\t\t*");
	printf("\n *\t\t\t\t\t\t        &\t\t\t\t\t\t\t* ");
	printf("\n *\t\t\t         M  a  n  e  g  e  m  e  n  t\tS  y  s  t  e  m\t\t\t\t*");
	printf("\n *\t\t\t\t\t\t\t\t\t\t\t\t\t\t*");
	printf("\n *\t\t\t\t\t\t\t\t\t\t\t\t\t\t*");
	printf("\n *\t\t\t\t\t\t\t\t\t\t\t\t\t\t*");
	printf("\n *\t\t\t\t\tS e m e s t e r   P r o j e c t  \t\t\t\t\t*");
	printf("\n *\t\t\t\t\t\t       B y\t\t\t\t\t\t\t*");
	printf("\n *\t\t\t\t\t\t\t\t\t\t\t\t\t\t*");
	printf("\n *\t\t\t\t\t22k-4402 - Muhammad Maaz Motiwala        \t\t\t\t*");
	printf("\n *\t\t\t\t\t22k-4426 - Valihasan Jalees     \t\t\t\t\t*");
	printf("\n *\t\t\t\t\t22k-4399 - Javeria Motiwala     \t\t\t\t\t*");
	printf("\n *\t\t\t\t\t\t\t\t\t\t\t\t\t\t*");
	printf("\n *\t\t\t\t\t\t\t\t\t\t\t\t\t\t*");
	printf("\n *\t\t\t\t\t\t\t\t\t\t\t\t\t\t*");
	printf("\n *\t\t\t\t\t     Press enter key to continue\t\t\t\t\t*");
	printf("\n *\t\t\t\t     Press 'A' key to continue as Administrator\t\t\t\t\t*");
	printf("\n *\t\t\t\t\t     Press 'E' key to end\t\t\t\t\t\t*");
	printf("\n *\t\t\t\t\t\t\t\t\t\t\t\t\t\t*");
	printf("\n *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *");
}

//Admin Screen

int Admin_Welcome(){
   	char password[128], c,fixpass[128]={"Hello"};
   	int index = 0,count=3,flag=0; 
	    printf("\n\n\n\n\n\t\t\t\t\t Enter Password : ");
		/* 13 is ASCII value of Enter key */
		while((c = getch()) != 13){
	       if(index < 0)
	           index = 0;
	       /* 8 is ASCII value of BACKSPACE character */
	       if(c == 8){
	           putch('\b');
	           putch('\0');
	           putch('\b');
	           index--;
	        continue;
	        }
	        password[index++] = c;
	    	putch('*');
		}
		password[index] = '\0';		
//		printf("\nPassword String = %s", password);
		if(strcmp(password,fixpass)!=0){
	    	printf("\n \t Wrong Password");
		}
		else if(strcmp(password,fixpass)==0){
			flag=1;
		}
		system("cls");
	if(flag==0){
//		system("pause");   	
   		return flag;
	}
	printf("\n *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *");
	printf("\n *\t\t\t\t\t\t\t\t\t\t\t\t\t\t*");
	printf("\n *\t\t\t\t\t\t1 - Add Movie\t\t\t\t\t\t\t*");
	printf("\n *\t\t\t\t\t\t2 - Delete Movie\t\t\t\t\t\t*");
	printf("\n *\t\t\t\t\t\t3 - Change Price\t\t\t\t\t\t*");
	printf("\n *\t\t\t\t\t\t4 - Reset\t\t\t\t\t\t\t*");
	printf("\n *\t\t\t\t\t\t\t\t\t\t\t\t\t\t*");
	printf("\n *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *");
	return flag;
}

//add Function - Adds movie to the file....

void add(char filename[10],char movie_name[3][30],char movie1[30],char movie2[30],char movie3[30]){
		char name[30],name2[35],ch,ch1[30];
		int flag=0;
		FILE *fptr;
		int count = 0,count2 = 0,count3=0,n = 0,i;
		
		//Analyzing data from file
		
		fptr = fopen(filename,"r+");
		ch = getc(fptr);
    	while (ch != EOF)
    	{
        	if (ch == '\n'){
				count2++;
        	}
        	ch = getc(fptr);
    	}
    	n = count2;
    	fclose(fptr);
    	
		//appending file
		
		fptr = fopen(filename,"a");
		ch = 'y';
		if(count>2-n){
			puts("");
			puts("");
			puts(" \t\t\t\t    * * * * * * * * * * * * * * * * * * * * * * ");
			puts(" \t\t\t\t    * Maximum of 3 movies can be added.... :) * ");
			puts(" \t\t\t\t    * * * * * * * * * * * * * * * * * * * * * * ");
			puts("");
		}
		while((ch=='Y'||ch=='y') && count <=2-n){
			printf("\n \t Enter movie name: ");
			fflush(stdin);
			gets(name);
			strcpy(movie_name[count+n],name);
//			printf("%s",movie_name[count+n]);
			fflush(stdin);
			fprintf(fptr,"%d. %s",count+1+n,name);
//			printf("%d",count+1+n);
			if(count+1+n==1){
				strcpy(movie1,name);
//				printf("%s %s",movie1,name);
			}
			else if(count+1+n==2){
				strcpy(movie2,name);
//			printf("%s %s",movie2,name);
			}
			else if(count+1+n==3){
				strcpy(movie3,name);
//			printf("%s %s",movie3,name);
			}
			
			fprintf(fptr,"\n");
			count++;
			if(count ==3-n)
				break;
			printf(" \t Do you want to add another movie [Y/N] / [y/n]: ");
			fflush(stdin);
			scanf(" %c",&ch);
		}
		fclose(fptr);
		
		//printing from file
		
		fptr = fopen(filename,"r+");
		if(fptr==NULL){
			printf(" Error");
		}
		else{
			ch = getc(fptr);
			printf(" \t ");
			y:
	    	while (ch != EOF)
	    	{
	        	if (ch == '\n'){
	        		printf("%c", ch);
					printf(" \t ");
	        		ch = getc(fptr);
	        		goto y;
	        	}
	        	printf("%c", ch);
	        	ch = getc(fptr);
	    	}
	    fclose(fptr);
		printf("\n\n \t\t\t\t Movie added Successfully!!!");
	
		// printing of file ended....
	
	    puts("");	
    	system("pause");
	}
}

//Delete1 Function - Deletes specific movie from file....

void Delete1(char filename[10],char movie_name[3][30],char movie1[30],char movie2[30],char movie3[30]){
	int ch,delete_line,count=0,count2=0,flag=1,i;
	FILE * fptr;
	FILE * fptr2;
	FILE * fp;
	FILE * fp1;
	FILE * fp2;
	FILE * fp3;
	
	//printing from file
	
		fptr = fopen(filename,"r+");
		if(fptr==NULL){
			printf(" Error");
		}
		else{
			ch = getc(fptr);
			printf(" \t ");
			y:
	    	while (ch != EOF)
	    	{
	        	if (ch == '\n'){
	        		printf("%c", ch);
					printf(" \t ");
	        		ch = getc(fptr);
	        		goto y;
	        	}
	        	printf("%c", ch);
	        	ch = getc(fptr);
	    	}
	    }
	    	
		// printing of file ended....
    	
		rewind(fptr);
		
		//asking for which movie to remove and validating the input
		
		printf("\n Enter which movie you want to remove 1, 2, 3: ");
		fflush(stdin);
		scanf("%d",&delete_line);
		do{
			switch(delete_line){
				case 1:
					strcpy(movie1,movie2);
					strcpy(movie2,movie3);
					remove("Seating_00");
					remove("Seating_01");
					remove("Seating_10");
					remove("Seating_11");
					remove("Seating_20");
					remove("Seating_21");
					break;
				case 2:
					strcpy(movie2,movie3);
					remove("Seating_00");
					remove("Seating_01");
					remove("Seating_10");
					remove("Seating_11");
					remove("Seating_20");
					remove("Seating_21");
					break;
				case 3:
					remove("Seating_00");
					remove("Seating_01");
					remove("Seating_10");
					remove("Seating_11");
					remove("Seating_20");
					remove("Seating_21");					
					break;
				default:
					printf("\n Enter correct option\n Enter which movie you want to remove 1, 2, 3: ");
					fflush(stdin);
					scanf("%d",&delete_line);
					break;
			}
		}while(delete_line != 1 && delete_line != 2 && delete_line != 3);
		
		//copying the rest in file 2
		
		fptr2 = fopen("copy.txt","w");
    	ch = getc(fptr);
    	x:
		while (ch != EOF)
    	{
        	if (ch == '\n')
            	count++;
            //except the line to be deleted
            if (count+1 != delete_line){
                //copy all lines in file replica.c
                if(ch=='1'||ch=='2'||ch=='3'){
                	count2++;
                	putc(count2+48,fptr2);
                	ch = getc(fptr);
                	goto x;
				}
				putc(ch, fptr2);
            }
        	ch = getc(fptr);
    	}
    	fclose(fptr);
    	fclose(fptr2);
    	remove(filename);
    	//rename the file copy.txt to original name
    	rename("copy.txt", filename);
    	
		//printing from file
	
		fptr = fopen(filename,"r+");
		if(fptr==NULL){
			printf(" Error");
		}
		else{
			ch = getc(fptr);
			printf(" \t ");
			z:
	    	while (ch != EOF)
	    	{
	        	if (ch == '\n'){
	        		printf("%c", ch);
					printf(" \t ");
	        		ch = getc(fptr);
	        		goto z;
	        	}
	        	printf("%c", ch);
	        	ch = getc(fptr);
	    	}
	    }
	    	
		// printing of file ended....
		
    	fclose(fptr);
    	puts("");
    	system("pause");
}

//Welcome screen input character validator 
char Cus_Admin(){
	char a;
	do{
		a = getch();
	}while(a!=13 && a!=65 && a!=97 && a!=69 && a!=101);
	return a;
}

//Admin screen input character validator 

char Admin(){
	char a;
	do{
		a = getch();
	}while(a!='1' && a!='2' && a!='3' && a!='4');
	return a;
}

int movie (char filename[10],char movie_name[3][30],char selected_movie[30],char movie1[30],char movie2[30],char movie3[30]){
	FILE *fptr;
	char ch;
	int choice_m;
	//printing from file
	
	fptr = fopen(filename,"r+");
	if(fptr==NULL){
					puts("");
			puts("");
			puts(" \t\t\t\t    * * * * * * * * * * * * * * * * ");
			puts(" \t\t\t\t    * No movies listed yet.... :) * ");
			puts(" \t\t\t\t    * * * * * * * * * * * * * * * * ");
			puts("");
			puts("\t\t\t");
			system("pause");
			system("cls");
			return 0;
	}
	else{
		ch = getc(fptr);
		printf(" \t ");
		z:
		while (ch != EOF)
		{
			if (ch == '\n'){
			printf("%c", ch);
			printf(" \t ");
	        ch = getc(fptr);
	        goto z;
	    }
	    printf("%c", ch);
	    ch = getc(fptr);
		}
	}
	    	
	// printing of file ended....
	
	
	
	//Validation for choice
	do{
		printf("\n \t Select a movie: ");
		scanf("%d",&choice_m);
	}while(choice_m<1 || choice_m>3);
	
	//copying movie name
	
	if(choice_m==1){
		strcpy(selected_movie,movie1);
		fflush(stdin);
	}
	else if(choice_m==2){
		strcpy(selected_movie,movie2);
		fflush(stdin);
	}
	else if(choice_m==3){
		strcpy(selected_movie,movie3);
		fflush(stdin);
	}
	puts("");
    system("pause");
    return choice_m;
}

int time (char movie_name[3][30],char selected_movie[30],char selected_time[10],char movie1[30],char movie2[30],char movie3[30]){
	
	int choice_t,i,j;
	if(strcmp(selected_movie,movie1)==0){
		do{
			printf("\n \t 1. 9:00 AM\n \t 2. 12:00 PM\n\n \t Select Time: ");
			scanf("%d",&choice_t);
			if(choice_t==1)
				strcpy(selected_time,"9:00 AM");
			else if(choice_t==2){
				strcpy(selected_time,"12:00 PM");
			}
		}
		while(choice_t!=1 && choice_t!=2);
	}
	else if(strcmp(selected_movie,movie2)==0){
		do{
			printf("\n \t 1. 2:30 PM\n \t 2. 6:00 PM\n\n \t Select Time: ");
			scanf("%d",&choice_t);
			if(choice_t==1)
				strcpy(selected_time,"2:30 PM");
			else if(choice_t==2){
				strcpy(selected_time,"6:00 PM");			
			}
		}		while(choice_t!=1 && choice_t!=2);
	}
	else if(strcmp(selected_movie,movie3)==0){
		do{
			printf("\n \t 1. 9:00 PM\n \t 2. 12:00 AM\n\n \t Select Time: ");
			scanf("%d",&choice_t);
			if(choice_t==1)
				strcpy(selected_time,"9:00 PM");
			else if(choice_t==2){
				strcpy(selected_time,"12:00 AM");			
			}
		}		while(choice_t!=1 && choice_t!=2);
	}
	puts("");
    system("pause");
    return choice_t;
}

int reciept(char seatsuser[50][4],int numseats,char selected_time[10],char selected_movie[30],int price,char movie1[30],char movie2[30],char movie3[30],int choice_m,int tn){
	int i,total=0,count=1,flag=0;
	system("color 70");
	FILE * fptr;
	FILE * fp;
	fptr = fopen("Movies","r");
	fp = fopen("TicketNo","r");
	fscanf(fp,"%d",&tn);
	fclose;
	//	static int tn=1;
	char cn[5],date[15],pay[30],ch;
//	price=500;
	printf("\n \t\t Enter Name: ");
	fflush(stdin);
	gets(cn);
	printf(" \t\t Enter Date [ dd/mm/yyyy ]: ");
	scanf("%s",date);
	while(date[0]<'1'  || date[1]<'2' || date[3]!='1' || date[4]!='2'  || date[6]!='2' || date[7]!='0' || date[8]!='2' || date[9]!='2'){
		printf(" \t\t Re enter Date [ dd/mm/yyyy ]: ");
		fflush(stdin);
		scanf("%s",date);
	}

	printf(" \t\t Enter Payment Mehtod [ Bank Transfer / Easypaisa / Jazzcash]: ");
	fflush(stdin);
	gets(pay);
	while(strcmp(pay,"Bank Transfer")!=0 && strcmp(pay,"Easypaisa")!=0 && strcmp(pay,"Jazzcash")!=0){
		printf(" \t\t Re-enter Payment Mehtod [ Bank Transfer / Easypaisa / Jazzcash]: ");
		fflush(stdin);
		gets(pay);
	}

	system("cls");
	
	printf("\t\t\t\t\t\t\t CINEMAX          \n ");
	printf("\t\t\t------------------------------TICKET BOOKING---------------------------\n");
	printf("\t\t\t=======================================================================\n\n");
	printf("\t\t\tTicket number: %d\n",tn);
	printf("\t\t\tCustomer Name : %s\n",cn);
	printf("\t\t\tDate: %s\n",date);
	fflush(stdin);
	printf("\t\t\tTime : %s\n\n",selected_time);
	printf("\t\t\t\t\t\t Movie Name: ");
	if(fptr==NULL){
		printf(" Error");
	}
	else{
		fflush(stdin);
		ch = getc(fptr);
		fflush(stdin);
		while (ch != EOF)
		{
			if(choice_m==1 && ch=='1'){
				flag=1;
				for(i=0;i<3;i++){
	        		fflush(stdin);
					ch = getc(fptr);
				}
				while(ch!='\n'){
					printf("%c",ch);
	        		fflush(stdin);
					ch = getc(fptr);
				}
	    	}
			if(choice_m==2 && ch=='2'){
				flag=2;
				for(i=0;i<3;i++){
	        		fflush(stdin);
					ch = getc(fptr);
				}
				while(ch!='\n'){
					printf("%c",ch);
					fflush(stdin);	
	        		ch = getc(fptr);
				}
	    	}
			if(choice_m==3 && ch=='3'){
				flag=3;
				for(i=0;i<3;i++){
					fflush(stdin);
	        		ch = getc(fptr);
				}
				fflush(stdin);
				while(ch!=EOF){
					printf("%c",ch);
					fflush(stdin);
	        		ch = getc(fptr);
				}
	    	}
	    	fflush(stdin);
	    	ch = getc(fptr);
		}
	}
	fclose(fptr);
//	printf("");
//	printf("\n\t\t\t\t\t\t_______________________\n\n");
	if(flag==1){
		printf("\n\t\t\t\t\t\t\tHall: A\n");
	}
	else if(flag==2){
		printf("\n\t\t\t\t\t\t\tHall: B\n");
	}
	if(flag==3){
		printf("\n\t\t\t\t\t\t\tHall: C\n");
	}
	printf("\t\t\t-----------------------------------------------------------------------\n");
	printf("\t\t\tS.No\t\t\t Seat No \t\t\t Amount\n");
	printf("\t\t\t_______________________________________________________________________\n");
	for(i=0;i<numseats;i++){
		printf("\t\t\t  %d\t\t\t  %s \t\t\t\t  %d\n",i+1,seatsuser[i],price);
		printf("\t\t\t_______________________________________________________________________\n");
		total+=price;
	}
	printf("\t\t\tNet Amount : \t\t\t\t\t\t  %d\n",total);
	printf("\t\t\tPayment: \t\t\t\t\t\t  %s\n",pay);
	printf("\t\t\t_______________________________________________________________________\n");
	printf("\t\t\t\t\t\t No Return/exchange\n\n");
	tn++;
	
	puts("");
	system("pause");
	return tn;
}

struct seats{
	char seatnum[3];
	int booked;	
};

typedef struct seats s;

int seating(s st[3][2][50],char movie_name[3][30],char selected_movie[30],char selected_time[10],int choice_m,int choice_t,char seatsuser[50][4]){
	
	HANDLE Console_color = GetStdHandle(STD_OUTPUT_HANDLE);
	FILE * fp;
	char ch[3],ch2;
//	s a[3][2][50];
	int i, j, k=0, t, m;
	
	fp = fopen("Seating_00.txt","r");
	while(fgets(ch,3,fp) != NULL){
		for(k=0;k<50;k++){
			if(strcmp(ch,st[0][0][k].seatnum)==0){
				st[0][0][k].booked=1;
				break;
			}
		}
	}
	fclose(fp);
	fp = fopen("Seating_01.txt","r");
	while(fgets(ch,3,fp) != NULL){
		for(k=0;k<50;k++){
			if(strcmp(ch,st[0][1][k].seatnum)==0){
				st[0][1][k].booked=1;
				break;
			}
		}
	}
	fclose(fp);
	fp = fopen("Seating_10.txt","r");
	while(fgets(ch,3,fp) != NULL){
		for(k=0;k<50;k++){
			if(strcmp(ch,st[1][0][k].seatnum)==0){
				st[1][0][k].booked=1;
				break;
			}
		}
	}
	fclose(fp);
	fp = fopen("Seating_11.txt","r");
	while(fgets(ch,3,fp) != NULL){
		for(k=0;k<50;k++){
			if(strcmp(ch,st[1][1][k].seatnum)==0){
				st[1][1][k].booked=1;
				break;
			}
		}
	}
	fclose(fp);
	fp = fopen("Seating_20.txt","r");
	while(fgets(ch,3,fp) != NULL){
		for(k=0;k<50;k++){
			if(strcmp(ch,st[2][0][k].seatnum)==0){
				st[2][0][k].booked=1;
				break;
			}
		}
	}
	fclose(fp);
	fp = fopen("Seating_21.txt","r");
	while(fgets(ch,3,fp) != NULL){
		for(k=0;k<50;k++){
			if(strcmp(ch,st[2][1][k].seatnum)==0){
				st[2][1][k].booked=1;
				break;
			}
		}
	}
	fclose(fp);
	fp = fopen("Seating_00.txt","r");
	while(fgets(ch,3,fp) != NULL){
		for(k=0;k<50;k++){
			if(strcmp(ch,st[0][0][k].seatnum)==0){
				st[0][0][k].booked=1;
				break;
			}
		}
	}
	fclose(fp);
	
	system("color 07");
	SetConsoleTextAttribute(Console_color, 15);
	puts("\n \t\t\t\t\t=============Book You Seats=============\n");
	printf("\n \t\t\t   =============");
	SetConsoleTextAttribute(Console_color, 4);
	printf("[Red - Reserved]");
	SetConsoleTextAttribute(Console_color, 15);
	printf(" / ");
	SetConsoleTextAttribute(Console_color, 2);
	printf("[Green - Available]");
	SetConsoleTextAttribute(Console_color, 15);
	printf("=============\n");	
	m = choice_m - 1;
	t = choice_t - 1;
	
	k = 0;
	puts("");
	for (i = 0; i < 5; i++) //printing seats again
	{
		printf("\t\t\t");
		for (j = 0; j < 10; j++)
		{
			if (st[m][t][k].booked == 1)
			{
				SetConsoleTextAttribute(Console_color, 4);
//				system("color 04");
				printf("%s\t", st[m][t][k].seatnum);
			}
			else	
			{
				SetConsoleTextAttribute(Console_color, 2);
//				system("color 02");
				printf("%s\t", st[m][t][k].seatnum);
			}
					
			k++;
		}
		printf("\n\n");
	}  
	SetConsoleTextAttribute(Console_color, 15);
	system("pause");


	int numseats;
	char seat[2];
	do{
		printf("\n How many seats do you want to book?: ");
		fflush(stdin);
		scanf("%d", &numseats);
	}while(numseats<0 || numseats>50);
	int total = numseats;
	fflush(stdin);
			
	for (i = 0; i < total; i++)
	{
		do{
			printf(" \t\t Enter seat %d:", i+1);
			fflush(stdin);
			gets(seat);
		}while((seat[0]<'A' || seat[0]>'E')||(seat[1]<'0' || seat[1]>'9'));
		for (k = 0; k < 50; k++)
		{
			if (strcmp(seat, st[m][t][k].seatnum) == 0)
			{
				if (st[m][t][k].booked == 1)
				{
					printf("\n \t\t Seat already booked, re-enter seat: ");
					i--;
					break;
				}
				else
				{
					st[m][t][k].booked = 1;
					if(m==0 && t==0){
						fp = fopen("Seating_00.txt","w");
//						fprintf(fp,"%s\n",seat);
						for(j=0;j<50;j++){
							if(st[m][t][j].booked==1){
								fprintf(fp,"%s",st[m][t][j].seatnum);
							}
						}
						fclose(fp);
					}
					else if(m==0 && t==1){
						fp = fopen("Seating_01.txt","w");
						// fprintf(fp,"%s\n",seat);
						for(j=0;j<50;j++){
							if(st[m][t][j].booked==1){
								fprintf(fp,"%s",st[m][t][j].seatnum);
							}
						}
						fclose(fp);
					}
					else if(m==1 && t==0){
						fp = fopen("Seating_10.txt","w");
						// fprintf(fp,"%s\n",seat);
						for(j=0;j<50;j++){
							if(st[m][t][j].booked==1){
								fprintf(fp,"%s",st[m][t][j].seatnum);
							}
						}
						fclose(fp);
					}
					else if(m==1 && t==1){
						fp = fopen("Seating_11.txt","w");
						// fprintf(fp,"%s\n",seat);
						for(j=0;j<50;j++){
							if(st[m][t][j].booked==1){
								fprintf(fp,"%s",st[m][t][j].seatnum);
							}
						}
						fclose(fp);
					}
					else if(m==2 && t==0){
						fp = fopen("Seating_20.txt","w");
						// fprintf(fp,"%s\n",seat);
						for(j=0;j<50;j++){
							if(st[m][t][j].booked==1){
								fprintf(fp,"%s",st[m][t][j].seatnum);
							}
						}
						fclose(fp);
					}
					else if(m==2 && t==1){
						fp = fopen("Seating_21.txt","w");
						// fprintf(fp,"%s\n",seat);
						for(j=0;j<50;j++){
							if(st[m][t][j].booked==1){
								fprintf(fp,"%s",st[m][t][j].seatnum);
							}
						}
						fclose(fp);
					}
					break;
				}
			}
			strcpy(seatsuser[i],seat);
		}
	}
	system("cls");
	SetConsoleTextAttribute(Console_color, 15);
	puts("\n \t\t\t\t\t=============Book You Seats=============\n");
	printf("\n \t\t\t   =============");
	SetConsoleTextAttribute(Console_color, 4);
	printf("[Red - Reserved]");
	SetConsoleTextAttribute(Console_color, 15);
	printf(" / ");
	SetConsoleTextAttribute(Console_color, 2);
	printf("[Green - Available]");
	SetConsoleTextAttribute(Console_color, 15);
	printf("=============\n");		
	k = 0;
	puts("");
	for (i = 0; i < 5; i++) //printing seats again
	{
		printf("\t\t\t");
		for (j = 0; j < 10; j++)
		{
			if (st[m][t][k].booked == 1)
			{
				SetConsoleTextAttribute(Console_color, 4);
				printf("%s\t", st[m][t][k].seatnum);
			}
			else	
			{
				SetConsoleTextAttribute(Console_color, 2);
				printf("%s\t", st[m][t][k].seatnum);
			}
					
			k++;
		}
		printf("\n\n");
	}  
	SetConsoleTextAttribute(Console_color, 15);

	return total; 
	puts("");
    system("pause");	
}

void loading()
{
	
	printf("\n\n\n\n\n\n\n\n\n\n");
	int i;
	char x = 254;
	printf("\t\t\t\t\tLOADING: ");
    for (int i = 0; i < 30; i++)
    {
        printf("%c", x);
        switch (i)
        {
        	case 0 ... 9:
        		Sleep(200);
        		break;
        	case 10 ... 19:
				Sleep(100);
				break;
			case 20 ... 29:
				Sleep(50);
				break;		
        	
		}
    }
    puts("");
    puts("");
    printf("\t\t\t\t\t\t");
}

void Reset(char filename[10]){
	printf("\n\n\n\n\n\n\n\n\n\n");
	int i;
	char x = 254;
	printf("\t\t\t\t\tReseting: ");
    for (int i = 0; i < 30; i++)
    {
        printf("%c", x);
        switch (i)
        {
        	case 0 ... 9:
        		Sleep(200);
        		break;
        	case 10 ... 19:
				Sleep(100);
				break;
			case 20 ... 29:
				Sleep(50);
				break;		
        	
		}
    }
    puts("");
    puts("");
    printf("\t\t\t\t\t\t");
    remove("Seating_00.txt");
	remove("Seating_01.txt");
	remove("Seating_10.txt");
	remove("Seating_11.txt");
	remove("Seating_20.txt");
	remove("Seating_21.txt");
	remove(filename);
	remove("TicketNo");
}

int main(){
	char seatsuser[50][4],movie1[30],movie2[30],movie3[30],Customer_Admin,filename[10]={"Movies\0"},movie_name[3][30],selected_movie[30],selected_time[10];
	int numseats,choice_m,choice_t,m,t,i,j,k,price=500,flag=0,tn = 1;
	s st[3][2][50];
		//initiallizing whole structure
	for (m = 0; m < 3; m++) //movie loop
	{
		for (t = 0; t < 2; t++) //time loop
		{
			k = 0;
			for (i = 0; i < 5; i++) //Alphabet loop
			{
				for (j = 0; j < 10; j++) //number loop
					{
						st[m][t][k].seatnum[0] = i + 65;
						st[m][t][k].seatnum[1] = j + 48;
						st[m][t][k].seatnum[2] = '\0';
						st[m][t][k].booked = 0;
						k++;
						if (k == 50)
						{
							break;
						}	
					}
				if (k == 50)
				{
					break;
				}
			}		
		}
	}
	loading();
	//initiallizing whole structure
	//calling welcome screen
	x:
	system("cls");
	welcome();
	fflush(stdin);
	//calling a function to get character whether it will be ('enter' or 'A' or 'a') 
	Customer_Admin = Cus_Admin();
		
	switch(Customer_Admin){
		case 13:
			system ("cls");
			puts("\n \t\t\t\t\t=============Select Movie=============\n\n");
			choice_m = movie(filename,movie_name,selected_movie,movie1,movie2,movie3);
			if(choice_m==0){
				goto x;
			}
			system("cls");
			puts("\n \t\t\t\t\t=============Select Time=============\n\n");
			choice_t = time(movie_name,selected_movie,selected_time,movie1,movie2,movie3);
			system ("cls");
			numseats = seating (st,movie_name,selected_movie,selected_time,choice_m,choice_t,seatsuser);
//			printf("%d",numseats);
			system("pause");
			system ("cls");
			fflush(stdin);
			puts("\n \t\t\t\t\t=============Enter your details=============\n");			
			tn = reciept(seatsuser,numseats,selected_time,selected_movie,price,movie1,movie2,movie3,choice_m,tn);
			FILE * fp;
			fp = fopen("TicketNo","w");
			fprintf(fp,"%d",tn);
			fclose(fp);
			goto x;
			break;
		case 'A':
		case 'a':
			system ("cls");
			flag = Admin_Welcome();
			if(flag==0){
				goto x;
			}
			switch(Admin()){
				case '1':
					system("cls");
					puts("");
					puts("");
					puts(" \t\t\t\t\t=============Adding Movie=============");
					puts("");
					puts(" \t\t\t   =============Only 3 movies can run simultaneously=============");
					add(filename,movie_name,movie1,movie2,movie3);
					goto x;
					break;
				case '2':
					system ("cls");
					puts("");
					puts("");
					puts(" \t\t\t\t\t=============Deleting Movie=============");
					puts("");
					puts(" \t\t\t   =============All the reservations will be resetted=============");
					Delete1(filename,movie_name,movie1,movie2,movie3);
					goto x;
					break;
				case '3':
					system ("cls");
					puts(" \t\t\t\t\t=============Changing Ticket Price=============\n\n");
					printf(" \t\t Current ticket price is: %d",price);
					printf("\n \t\t Enter new price: ");
					scanf("%d",&price);
					printf(" \t\t Ticket Price Updated To: %d ",price);
					puts("");
					puts("");
					printf("\t\t\t");
					system("pause");
					goto x;
					break;
				case '4':
					system ("cls");
					printf("\n\t\t\t\t\t=============Resetting=============\n");
					Reset(filename);
					goto x;
					break;									
			}
			break;
		case 'E':		
		case 'e':
			
			return 0;		
	}
}
