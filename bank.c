#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

const char* Random(){
	srand(time(NULL));
	int i, n=0, arr[5];
	char string[9] = {0};
	
	for(i=0; i<4; i++){
		arr[i] = rand() % 10;
	}
	
	for(i=0; i<4; i++){
		n += sprintf(&string[n], "%d", arr[i]);
	}
	
	return string;
}

void display(char sname[], char gname[], char date[], char district[], char village[], char contact[]){
	char space[]=" ", stored2[100], id[6];
	
	strcpy(stored2, strcat(sname, space));
	printf("Name: ");
	puts(strcat(stored2, gname));
	
	printf("\nDate of Birth: ");
	puts(date);
	
	printf("\nAccount number: ");
	strncpy(id, &date[6], 4);
	puts(strcat(id, Random()));
	
	printf("\nContact: ");
	puts(contact);
	
	printf("\nCustomer ID: ");
	puts(strcat(gname, Random()));
	
	printf("\nDistrict: ");
	puts(district);
	
	printf("\nVillage: ");
	puts(village);	
}

float accountBalance(float account){
	return account;
}

int main(){
	char sname[20], gname[20], date[20], district[20], village[20], contact[20];
	printf("Enter your surname: ");
	gets(sname);
	
	printf("Enter your given name: ");
	gets(gname);
	
	printf("Enter your date of birth: ");
	gets(date);
	
	char id = date[0]+date[1]+date[3]+date[4]+date[6]+date[7]+date[8]+date[9];
	
	printf("Enter your district: ");
	gets(district);
	
	printf("Enter your village: ");
	gets(village);
	
	printf("Enter your contact: ");
	gets(contact);
	
	printf("\n");
	
	display(sname, gname, date, district, village, contact);
}
