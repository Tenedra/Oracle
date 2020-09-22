#include <stdio.h>
main()
{
	int day, month, year, dayb, monthb, yearb, count = 0, day_res = 0, i = 0, result = 0;
	 
	printf("Enter today's date(DD.MM.YY)\n");
	scanf("%d%d%d",&day,&month,&year);
	
	printf("Enter your date of birth(DD.MM.YY)\n");
	scanf("%d%d%d",&dayb,&monthb,&yearb);
	
	int a = year-1;
	
	while(a>yearb){
		if(a%4==0 && a%100!=0 || a%400==0){
			count+=1;
			a-=4;
		}
		else{
			a-=1;
		}
	}	
	
	
	if(monthb%2==0 && monthb!=2){
		day_res+= 30 - dayb;
	}
	if(monthb%2!=0 && monthb!=2){
		day_res+=31 - dayb;
	}
	if(monthb==2 && (yearb%4==0 && yearb%100!=0 || yearb%400==0)){
		day_res+=29 - dayb;
	}
	if(monthb==2 && !(yearb%4==0 && yearb%100!=0 || yearb%400==0)){
		day_res+=28 - dayb;
	}
	
	if(yearb == year){
		int s = monthb + 1;
		while(s!=month){
			if(s == 1 || s==3 || s == 5 || s == 7 || s == 8 || s == 10 || s == 12){
				day_res+=31;
			}
			if(s == 2 &&(yearb%4==0 && yearb%100!=0 || yearb%400==0)){
				day_res+=29;
			}
			if(s == 2 && !(yearb%4==0 && yearb%100!=0 || yearb%400==0)){
				day_res+=28;
			}
			if(s == 4 || s == 6 || s == 9 || s == 11){
				day_res+=30;
			}
			s+=1;
		}
		result = day_res+day;
		printf("You have lived: %d\n",result);
	}
	
	else{
		int k = monthb+1;
		
		while(k!=13){
			if(k == 1 || k==3 || k == 5 || k == 7 || k == 8 || k == 10 || k == 12) {
				day_res+=31;
			}
			if(k == 2 &&(yearb%4==0 && yearb%100!=0 || yearb%400==0)){
				day_res+=29;
			}
			if(k == 2 && !(yearb%4==0 && yearb%100!=0 || yearb%400==0)){
				day_res+=28;
			}
			if(k == 4 || k == 6 || k == 9 || k == 11){
				day_res+=30;
			}
			k+=1;
		}
	

		int j = 1;
		
		while(j != month){
			if(j == 1 || j == 3 || j == 5 || j == 7 || j == 8 || j == 10 || j == 12){
				day_res+=31;
			}
			if(j == 2 && (year%4==0 && year%100!=0 || year%400==0)){
				day_res+=29;
			}
			if(j == 2 && !(year%4==0 && year%100!=0 || year%400==0)){
				day_res+=28;
			}
			if(j == 4 || j == 6 || j == 9 || j == 11){
				day_res+=30;
			}
			j+=1;
		}
		result = 365*(year-yearb-count)+366*count+day_res+day;
		printf("You have lived: %d\n",result);
		
	}
	
	
	if(yearb%4==0 && yearb%100!=0 || yearb%400==0){
		printf("You were born in leap year!\n");	
	} 
	else{
		printf("You were born in non-leap year!\n");
	}
	
	switch(monthb){
		case 1:
			if(dayb<21){
				printf("You are Capricorn\n");
			}
			else{
				printf("You are Aquarius\n");
			}
			break;
		case 2:
			if(dayb<19){
				printf("You are Aquarius\n");
			}
			else{
				printf("You are Pisces\n");
			}
			break;
		case 3:
			if(dayb<21){
				printf("You are Pisces\n");
			}
			else{
				printf("You are Aries\n");
			}
			break;
		case 4:
			if(dayb<21){
				printf("You are Aries\n");
			}
			else{
				printf("You are Taurus\n");
			}
			break;
		case 5:
			if(dayb<21){
				printf("You are Taurus\n");
			}
			else{
				printf("You are Gemini\n");
			}
			break;
		case 6:
			if(dayb<22){
				printf("You are Gemini\n");
			}
			else{
				printf("You are Cancer\n");
			}
			break;
		case 7:
			if(dayb<23){
				printf("You are Cancer\n");
			}
			else{
				printf("You are Leo\n");
			}
			break;
		case 8:
			if(dayb<24){
				printf("You are Leo\n");
			}
			else{
				printf("You are Virgo\n");
			}
			break;
		case 9:
			if(dayb<23){
				printf("You are Virgo\n");
			}
			else{
				printf("You are Libra\n");
			}
			break;	
		case 10:
			if(dayb<24){
				printf("You are Libra\n");
			}
			else{
				printf("You are Scorpio\n");
			}	
			break;	
		case 11:
			if(dayb<23){
				printf("You are Scorpio\n");
			}
			else{
				printf("You are Sagittarius\n");
			}
			break;
		case 12:
			if(dayb<22){
				printf("You are Saggittarius\n");
			}
			else{
				printf("You are Capricorn\n");
			}	
			break;
		default:
		printf("Error! Please, enter your date of birth!");
	}	
}

