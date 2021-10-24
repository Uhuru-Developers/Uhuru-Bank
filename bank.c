#include<stdio.h>
#include<string.h>
void display(char sname[], char gname[], char date[], char district[], char village[], char contact[]){
	char space[]=" ", stored2[100];
	strcpy(stored2, strcat(sname, space));
	printf("Name: ");
	puts(strcat(stored2, gname));
	
	printf("\nDate of Birth: ");
	puts(date);
	
	printf("\nAccount number: ");
	puts(strcat(stored2, gname));
	
	printf("\nContact: ");
	puts(contact);
	
	printf("\nCustomer ID: ");
	puts(strcat(stored2, gname));
	
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
	
	printf("Enter your district: ");
	gets(district);
	
	printf("Enter your village: ");
	gets(village);
	
	printf("Enter your contact: ");
	gets(contact);
	
	display(sname, gname, date, district, village, contact);
	
}


