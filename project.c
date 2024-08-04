#include<stdio.h>
#include<string.h>
void cart(char [],char [],float,int);
void select();
void bill();
void address();
int delete_item();
float totalprice=0;
int choice=0,things=0;
struct online
{
	char email[100];
	struct address 
	{
		int number[10];
		char country[100];
		char state[100];
		char district[100];
		char house[10];
		int password[10];
		
	}q;
		
}s;
struct products
{
	char type[100];
	char colour[100];
	float price;
}k[5];
struct cart
{
	char item[100];
	char color[100];
	float cost;
}z[5];
main()
{
	char c;
	printf("\n\n***----------------------WELCOME TO THRIFT SHOPPING----------------------*****\n");
	printf("logon to 'THRIFT SHOPPING' by providing following details \n\n");
	printf("Enter your e-mail ID :");
	scanf("%s",s.email);
	printf("\n\n");
	select();
}
void select()
{
	int i;
	char c;
	choice=display();
	switch(choice)
	{
		case 1 :
			printf("\t1.WOMEN\n");
			printf("\t2.MEN\n");
			printf("\t3.CHILDREN\n");
			printf("Select a type of clothing you'd like to shop :");
			scanf("%d",&choice);
				switch(choice)
				{
					case 1:
					printf("\t1.kurtis\n");
					printf("\t2.Jeans\n");
					printf("\t3. t-shirts\n");
					printf("\t4.sarees\n");
					printf("Select a category :");
					scanf("%d",&choice);
					switch(choice)
					{
						case 1:
							strcpy(k[0].type,"fullsleeves");
						   strcpy(k[0].colour,"Red");
						   k[0].price=799;
						   strcpy(k[1].type,"half-sleeves");
						   strcpy(k[1].colour,"Black");
						   k[1].price=999;
						   strcpy(k[2].type,"sleeveless");
						   strcpy(k[2].colour,"Blue");
						   k[2].price=1299;
						printf("-----------------------------------------------------\n");
							printf("type            colour               price\n");
							for(i=0;i<3;i++)
							{
								printf("-----------------------------------------------------\n");
							printf("%d %s              %s            %.2f\n",i+1,k[i].type,k[i].colour,k[i].price);
			                printf("-----------------------------------------------------\n");
				
							}
							do
							{
							printf("\nEnter the product that you want to add to cart :");
							scanf("%d",&choice);
							totalprice=totalprice+k[choice-1].price;
							cart(k[choice-1].type,k[choice-1].colour,k[choice-1].price,choice);
							printf("\ndo you want to continue shopping for kurtis[y/n/bill(b)] :");
							scanf(" %c",&c);
							}
							while(c=='y');
							if(c=='n')
							select();
							else
							bill();
							
							
						break;
						case 2:
							strcpy(k[0].type,"Highwaist Jeans");
						   strcpy(k[0].colour,"Blue");
						   k[0].price=799;
						   strcpy(k[1].type,"Bootcut Jeans");
						   strcpy(k[1].colour,"Black");
						   k[1].price=999;
						   strcpy(k[2].type,"Torn Jeans");
						   strcpy(k[2].colour,"Black");
						   k[2].price=899;
							printf("-----------------------------------------------------\n");
							printf("type            colour               price\n");
							for(i=0;i<3;i++)
							{
							printf("-----------------------------------------------------\n");
							printf("%d %s              %s            %.2f\n",i+1,k[i].type,k[i].colour,k[i].price);
			                printf("-----------------------------------------------------\n");
			           		 }
			           		 do
			           		 {
							printf("Enter the product that you want to add to cart :");
							scanf("%d",&choice);
							cart(k[choice-1].type,k[choice-1].colour,k[choice-1].price,choice);
							totalprice=totalprice+k[choice-1].price;
							printf("\ndo you want to continue shopping for jeans[y/n/bill(b)] :");
							scanf(" %c",&c);
							}
							while(c=='y');
						    if(c=='n')
							select();
							else
							bill();
						break;
						case 3:
							strcpy(k[0].type,"Roundneck");
							strcpy(k[0].colour,"Blue");
						   k[0].price=599;
						   	strcpy(k[1].type,"Crew neck");
						   strcpy(k[1].colour,"Black");
						   k[1].price=600;
						   	strcpy(k[2].type,"sleeveless");
						   strcpy(k[2].colour,"yellow");
						   k[2].price=799;
							printf("-----------------------------------------------------\n");
							printf("type      colour               price\n");
							for(i=0;i<3;i++)
							{
						
							printf("-----------------------------------------------------\n");
							printf("%d %s      %s                %.2f\n",i+1,k[i].type,k[i].colour,k[i].price);
			                printf("-----------------------------------------------------\n");
							}
							do
			           		 {
							printf("Enter the product that you want to add to cart :");
							scanf("%d",&choice);
							cart(k[choice-1].type,k[choice-1].colour,k[choice-1].price,choice);
							totalprice=totalprice+k[choice-1].price;
							printf("\ndo you want to continue shopping for t-shirts[y/n/bill(b)] :");
							scanf(" %c",&c);
							}
							while(c=='y');
						    if(c=='n')
							select();
							else
							bill();
							
						break;
						case 4:
							strcpy(k[0].type,"Banarasi Sari");
							strcpy(k[0].colour,"Blue");
						   k[0].price=2999;
						   strcpy(k[1].type,"Kanchipuram Silk Sari");
						   strcpy(k[1].colour,"Black");
						   k[1].price=3999;
						   strcpy(k[2].type,"Patola Sari");
						   strcpy(k[2].colour,"yellow");
						   k[2].price=2599;
							printf("-----------------------------------------------------\n");
							printf("type          colour               price\n");
							for(i=0;i<3;i++)
							{
						
							printf("-----------------------------------------------------\n");
							printf("%d %s         %s                 %.2f\n",i+1,k[i].type,k[i].colour,k[i].price);
			                printf("-----------------------------------------------------\n");
							}
							do
			           		 {
							printf("Enter the product that you want to add to cart :");
							scanf("%d",&choice);
							cart(k[choice-1].type,k[choice-1].colour,k[choice-1].price,choice);
							totalprice=totalprice+k[choice-1].price;
							printf("\ndo you want to continue shopping for sarees[y/n/bill(b)] :");
							scanf(" %c",&c);
							}
							while(c=='y');
						    if(c=='n')
							select();
							else
							bill();
							
							
						break;
					}
					break;
					case 2:
					printf("\t1.Shirts\n");
					printf("\t2.Jeans\n");
					printf("\t3.Hoodies\n");
					printf("\t4.t-shirts\n");
					printf("Select a category :");
					scanf("%d",&choice);
					switch(choice)
					{
						case 1:
							strcpy(k[0].type,"Slim fit striped Casual");
						   strcpy(k[0].colour,"Beige & White");
						   k[0].price=699;
						   strcpy(k[1].type,"Regular fit Solid Casual");
						   strcpy(k[1].colour,"Gray");
						   k[1].price=999;
						   strcpy(k[2].type,"Checked Pure Cotton casual");
						   strcpy(k[2].colour,"Maroon & Navy Blue");
						   k[2].price=899;
						printf("---------------------------------------------------------------------------\n");
							printf("type            		colour           		    price\n");
							for(i=0;i<3;i++)
							{
								printf("---------------------------------------------------------------------\n");
							printf("%d %s               		%s            			 %.2f\n",i+1,k[i].type,k[i].colour,k[i].price);
			                printf("--------------------------------------------------------------------------\n");
				
							}
							do
							{
							printf("\nEnter the product that you want to add to cart :");
							scanf("%d",&choice);
							totalprice=totalprice+k[choice-1].price;
							cart(k[choice-1].type,k[choice-1].colour,k[choice-1].price,choice);
							printf("\ndo you want to continue shopping for Shirts[y/n/bill(b)] :");
							scanf(" %c",&c);
							}
							while(c=='y');
							if(c=='n')
							select();
							else
							bill();	
						break;
						case 2:
							strcpy(k[0].type,"Highwaist Jeans");
						   strcpy(k[0].colour,"Blue");
						   k[0].price=799;
						   strcpy(k[1].type,"Bootcut Jeans");
						   strcpy(k[1].colour,"Black");
						   k[1].price=999;
						   strcpy(k[2].type,"Torn Jeans");
						   strcpy(k[2].colour,"Black");
						   k[2].price=899;
							printf("-----------------------------------------------------\n");
							printf("type            colour               price\n");
							for(i=0;i<3;i++)
							{
							printf("-----------------------------------------------------\n");
							printf("%d %s              %s            %.2f\n",i+1,k[i].type,k[i].colour,k[i].price);
			                printf("-----------------------------------------------------\n");
			           		 }
			           		 do
			           		 {
							printf("Enter the product that you want to add to cart :");
							scanf("%d",&choice);
							cart(k[choice-1].type,k[choice-1].colour,k[choice-1].price,choice);
							totalprice=totalprice+k[choice-1].price;
							printf("\ndo you want to continue shopping for jeans[y/n/bill(b)] :");
							scanf(" %c",&c);
							}
							while(c=='y');
						    if(c=='n')
							select();
							else
							bill();
						break;
						case 3:
							strcpy(k[0].type,"Zip-up Hoodies");
						   strcpy(k[0].colour,"Blue");
						   k[0].price=899;
						   strcpy(k[1].type,"Pull-over hoodies");
						   strcpy(k[1].colour,"Black");
						   k[1].price=999;
						   strcpy(k[2].type,"Athletic hoodies");
						   strcpy(k[2].colour,"Black");
						   k[2].price=1299;
							printf("-----------------------------------------------------\n");
							printf("type            colour               price\n");
							for(i=0;i<3;i++)
							{
							printf("-----------------------------------------------------\n");
							printf("%d %s              %s            %.2f\n",i+1,k[i].type,k[i].colour,k[i].price);
			                printf("-----------------------------------------------------\n");
			           		 }
			           		 do
			           		 {
							printf("Enter the product that you want to add to cart :");
							scanf("%d",&choice);
							cart(k[choice-1].type,k[choice-1].colour,k[choice-1].price,choice);
							totalprice=totalprice+k[choice-1].price;
							printf("\ndo you want to continue shopping for hoodies[y/n/bill(b)] :");
							scanf(" %c",&c);
							}
							while(c=='y');
						    if(c=='n')
							select();
							else
							bill();
						break;
						case 4:
							strcpy(k[0].type,"Roundneck");
							strcpy(k[0].colour,"Blue");
						   k[0].price=599;
						   	strcpy(k[1].type,"Crew neck");
						   strcpy(k[1].colour,"Black");
						   k[1].price=600;
						   	strcpy(k[2].type,"sleeveless");
						   strcpy(k[2].colour,"yellow");
						   k[2].price=799;
							printf("-----------------------------------------------------\n");
							printf("type      colour               price\n");
							for(i=0;i<3;i++)
							{
						
							printf("-----------------------------------------------------\n");
							printf("%d %s      %s                %.2f\n",i+1,k[i].type,k[i].colour,k[i].price);
			                printf("-----------------------------------------------------\n");
							}
							do
			           		 {
							printf("Enter the product that you want to add to cart :");
							scanf("%d",&choice);
							cart(k[choice-1].type,k[choice-1].colour,k[choice-1].price,choice);
							totalprice=totalprice+k[choice-1].price;
							printf("\ndo you want to continue shopping for t-shirts[y/n/bill(b)] :");
							scanf(" %c",&c);
							}
							while(c=='y');
						    if(c=='n')
							select();
							else
							bill();
						break;
					}	
					break;
					case 3:
					printf("\t1.Frocks\n");
					printf("\t2.Onepiece\n");
					printf("\t3.Tops and Tees\n");
					printf("Select a category :");
					scanf("%d",&choice);
					switch(choice)
					{
						case 1:
							strcpy(k[0].type,"Sleeveless");
							strcpy(k[0].colour,"Pink");
						   k[0].price=1599;
						   	strcpy(k[1].type,"Short Sleeve");
						   strcpy(k[1].colour,"Red");
						   k[1].price=2600;
						   	strcpy(k[2].type,"fullsleeve");
						   strcpy(k[2].colour,"Lavender");
						   k[2].price=1799;
							printf("-----------------------------------------------------\n");
							printf("type      colour               price\n");
							for(i=0;i<3;i++)
							{
						
							printf("-----------------------------------------------------\n");
							printf("%d %s      %s                %.2f\n",i+1,k[i].type,k[i].colour,k[i].price);
			                printf("-----------------------------------------------------\n");
							}
							do
			           		 {
							printf("Enter the product that you want to add to cart :");
							scanf("%d",&choice);
							cart(k[choice-1].type,k[choice-1].colour,k[choice-1].price,choice);
							totalprice=totalprice+k[choice-1].price;
							printf("\ndo you want to continue shopping for frocks[y/n/bill(b)] :");
							scanf(" %c",&c);
							}
							while(c=='y');
						    if(c=='n')
							select();
							else
							bill();
						break;
						case 2:
							strcpy(k[0].type,"Sleeveless");
							strcpy(k[0].colour,"Green");
						   k[0].price=499;
						   	strcpy(k[1].type,"jumpsuit");
						   strcpy(k[1].colour,"Red");
						   k[1].price=500;
						   	strcpy(k[2].type,"full sleeve");
						   strcpy(k[2].colour,"pink");
						   k[2].price=699;
							printf("-----------------------------------------------------\n");
							printf("type      colour               price\n");
							for(i=0;i<3;i++)
							{
						
							printf("-----------------------------------------------------\n");
							printf("%d %s      %s                %.2f\n",i+1,k[i].type,k[i].colour,k[i].price);
			                printf("-----------------------------------------------------\n");
							}
							do
			           		 {
							printf("Enter the product that you want to add to cart :");
							scanf("%d",&choice);
							cart(k[choice-1].type,k[choice-1].colour,k[choice-1].price,choice);
							totalprice=totalprice+k[choice-1].price;
							printf("\ndo you want to continue shopping for frocks[y/n/bill(b)] :");
							scanf(" %c",&c);
							}
							while(c=='y');
						    if(c=='n')
							select();
							else
							bill();
						break;
						case 3:
							strcpy(k[0].type,"short-top");
							strcpy(k[0].colour,"Black");
						    k[0].price=499;
						   	strcpy(k[1].type,"sleeveless");
						    strcpy(k[1].colour,"Red");
						    k[1].price=599;
						   	strcpy(k[2].type,"full sleeve");
						    strcpy(k[2].colour,"pink");
						    k[2].price=699;
							printf("-----------------------------------------------------\n");
							printf("type      colour               price\n");
							for(i=0;i<3;i++)
							{
						
							printf("-----------------------------------------------------\n");
							printf("%d %s      %s                %.2f\n",i+1,k[i].type,k[i].colour,k[i].price);
			                printf("-----------------------------------------------------\n");
							}
							do
			           		 {
							printf("Enter the product that you want to add to cart :");
							scanf("%d",&choice);
							cart(k[choice-1].type,k[choice-1].colour,k[choice-1].price,choice);
							totalprice=totalprice+k[choice-1].price;
							printf("\ndo you want to continue shopping for tops&tees[y/n/bill(b)] :");
							scanf(" %c",&c);
							}
							while(c=='y');
						    if(c=='n')
							select();
							else
							bill();
						break;
					}
					break;
				}
		break;
		case 2:
			printf("\t1.Earrings\n");
			printf("\t2.Watches\n");
			printf("\t3.Chains");
			printf("\nSelect the accessory you'd like to shop :");
			scanf("%d",&choice);
			switch(choice)
			{
				case 1:
					strcpy(k[0].type,"studs");
					strcpy(k[0].colour,"Black");
					k[0].price=50;
					strcpy(k[1].type,"hoops");
				    strcpy(k[1].colour,"silver");
				    k[1].price=140;
				   	strcpy(k[2].type,"Dangle");
				    strcpy(k[2].colour,"pink");
				    k[2].price=99;
					printf("-----------------------------------------------------\n");
					printf("type      colour               price\n");
					for(i=0;i<3;i++)
							{
						
					printf("-----------------------------------------------------\n");
					printf("%d %s      %s                %.2f\n",i+1,k[i].type,k[i].colour,k[i].price);
			        printf("-----------------------------------------------------\n");
							}
					do
			  		 {
				printf("Enter the product that you want to add to cart :");
				scanf("%d",&choice);
				cart(k[choice-1].type,k[choice-1].colour,k[choice-1].price,choice);
				totalprice=totalprice+k[choice-1].price;
				printf("\ndo you want to continue shopping for earrings[y/n/bill(b)] :");
				scanf(" %c",&c);
					}
					while(c=='y');
				    if(c=='n')
					select();
					else
					bill();
				break;
				case 2:
				   strcpy(k[0].type,"Fastrack");
					strcpy(k[0].colour,"Black");
					 k[0].price=1499;
				   	strcpy(k[1].type,"Titan");
				    strcpy(k[1].colour,"silver");
					k[1].price=2599;
			   	strcpy(k[2].type,"Noise Smart watch");
				  strcpy(k[2].colour,"black");
					k[2].price=699;
					printf("-----------------------------------------------------\n");
					printf("type      colour               price\n");
					for(i=0;i<3;i++)
					{						
						printf("-----------------------------------------------------\n");
						printf("%d %s      %s                %.2f\n",i+1,k[i].type,k[i].colour,k[i].price);
		                printf("-----------------------------------------------------\n");
					}
					do
	           		 {
					printf("Enter the product that you want to add to cart :");
					scanf("%d",&choice);
					cart(k[choice-1].type,k[choice-1].colour,k[choice-1].price,choice);
					totalprice=totalprice+k[choice-1].price;
					printf("\ndo you want to continue shopping for watches[y/n/bill(b)] :");
					scanf(" %c",&c);
						}
					while(c=='y');
				    if(c=='n')
					select();
					else
					bill();	
				break;
				case 3:
					 strcpy(k[0].type,"Necklace");
					strcpy(k[0].colour,"white");
					 k[0].price=499;
				   	strcpy(k[1].type,"pearl");
				    strcpy(k[1].colour,"white");
					k[1].price=299;
			   	strcpy(k[2].type,"layered chain");
				  strcpy(k[2].colour,"gold");
					k[2].price=199;
					printf("-----------------------------------------------------\n");
					printf("type      colour               price\n");
					for(i=0;i<3;i++)
					{						
						printf("-----------------------------------------------------\n");
						printf("%d %s      %s                %.2f\n",i+1,k[i].type,k[i].colour,k[i].price);
		                printf("-----------------------------------------------------\n");
					}
					do
	           		 {
					printf("Enter the product that you want to add to cart :");
					scanf("%d",&choice);
					cart(k[choice-1].type,k[choice-1].colour,k[choice-1].price,choice);
					totalprice=totalprice+k[choice-1].price;
					printf("\ndo you want to continue shopping for chains[y/n/bill(b)] :");
					scanf(" %c",&c);
						}
					while(c=='y');
				    if(c=='n')
					select();
					else
					bill();	
				break;
			}
		break;
		case 3:
			 strcpy(k[0].type,"Rice");
			 k[0].price=235;
			 strcpy(k[0].colour,"---");
		   	strcpy(k[1].type,"Bread");
		   	strcpy(k[1].colour,"---");
			k[1].price=45;
		  	strcpy(k[2].type,"Oil");
			k[2].price=199;
			strcpy(k[2].colour,"---");
			strcpy(k[3].type,"orange juice");
			 k[3].price=135;
			 strcpy(k[3].colour,"---");
			 strcpy(k[4].type,"meat");
			 k[4].price=200;
			 strcpy(k[4].colour,"---");
			printf("-----------------------------------------------------\n");
			printf("item                 price per kg/one quantity\n");
			for(i=0;i<5;i++)
					{						
						printf("-----------------------------------------------------\n");
						printf("%d %s                   %.2f\n",i+1,k[i].type,k[i].price);
		                printf("-----------------------------------------------------\n");
					}
					do
	           		 {
					printf("Enter the product that you want to add to cart :");
					scanf("%d",&choice);
					cart(k[choice-1].type,k[choice-1].colour,k[choice-1].price,choice);
					totalprice=totalprice+k[choice-1].price;
					printf("\ndo you want to continue shopping groceries[y/n/bill(b)] :");
					scanf(" %c",&c);
						}
					while(c=='y');
				    if(c=='n')
					select();
					else
					bill();		
		break;
		case 4:
			strcpy(k[0].type,"HP Laptop");
			 k[0].price=56000;
			 strcpy(k[0].colour,"silver");
		   	strcpy(k[1].type,"Headphones");
		   	strcpy(k[1].colour,"black");
			k[1].price=2000;
		  	strcpy(k[2].type,"airpods");
			k[2].price=3000;
			strcpy(k[2].colour,"white");
			strcpy(k[3].type,"samsung s20");
			 k[3].price=26000;
			 strcpy(k[3].colour,"black");
			 strcpy(k[4].type,"speakers");
			 k[4].price=12000;
			 strcpy(k[4].colour,"black");
			printf("-----------------------------------------------------\n");
			printf("product            colour                   price\n");
			for(i=0;i<5;i++)
					{						
						printf("-----------------------------------------------------\n");
						printf("%d %s             %s                  %.2f\n",i+1,k[i].type,k[i].colour,k[i].price);
		                printf("-----------------------------------------------------\n");
					}
					do
	           		 {
					printf("Enter the product that you want to add to cart :");
					scanf("%d",&choice);
					cart(k[choice-1].type,k[choice-1].colour,k[choice-1].price,choice);
					totalprice=totalprice+k[choice-1].price;
					printf("\ndo you want to continue shopping for electronics[y/n/bill(b)] :");
					scanf(" %c",&c);
						}
					while(c=='y');
				    if(c=='n')
					select();
					else
					bill();	
		break;		
	}
}
int display()
{
	int choice;
	printf("The following are the categories we have that you might like to shop\n");
	printf("\t1.Clothes\n");
	printf("\t2.Accessories\n");
	printf("\t3.Grocery\n"); 
	printf("\t4.Electronics\n");
	printf("Select a category you want to shop :");
	scanf("%d",&choice);
	return choice;
	
}
void cart(char item[100],char colour[100],float price,int choice)
{
	strcpy(z[things].item,item);
	strcpy(z[things].color,colour);
	z[things].cost=price;
	things++;
}
void edit()
{
	printf("\ndo you want to remove/add any item from/to the cart\n To remove press'r'\n To add press 'a'\n To go to billing press 'b'=");
	scanf(" %c",&choice);
	if(choice=='r')
	things=delete_item();
	if(choice=='a')
	select();
}
void bill()
{
	int i;
	char c;
		edit();	
		printf("---------------------------------------------------\n--------------------------------------------\n");
		printf("product                         colour                             cost\n");
	for(i=0;i<things;i++)
	{
		printf("-----------------------------------------------------------------------------------------------\n");
		printf("%d %s                           %s                                 %f\n",i+1,z[i].item,z[i].color,z[i].cost);
		printf("-----------------------------------------------------------------------------------------------\n");
	}
	printf("\ntotal amount=%f",totalprice);
	printf("\n\nPress 'o' to place order:");
	scanf(" %c",&c);
	if(c=='o')
	address();
}
int delete_item()
{
	int i,r;
	char c;
printf("\n The items in cart are =\n");
	for(i=0;i<things;i++)
	{
		printf("\t%d %s  %s   %f\n",i+1,z[i].item,z[i].color,z[i].cost);
	}	
	printf("\nenter the item you want to remove :");
	scanf("%d",&r);
	totalprice=totalprice-z[r-1].cost;
	for(i=r;i<things;i++)
	{
		strcpy(z[i-1].item,z[i].item);
		strcpy(z[i-1].color,z[i].color);
		z[i-1].cost=z[i].cost;
		things--;
	}
	printf("\n------------selected item is succesfully removed----------\n");
	return things;
}
void address()
{
	char c,ch;
	int password;
	printf("\n------------------ENTER YOUR DETAILS---------------------------------\n");
	printf("Enter your mobile number :");scanf("%d",&s.q.number);
	printf("Enter addresss :\n");
	printf("\tCountry :");
	scanf("%s",s.q.country);
	printf("\n\tState :");
	scanf("%s",s.q.state);
	printf("\n\tDistrict :");
	scanf("%s",s.q.district);
	printf("\n\tHouse number :");
	scanf("%d",&s.q.house);
	printf("\nPAYMENT METHOD :");
	printf("\n\t1.cash on delivery(d)\n\t2.pay with card(p) :");
	scanf(" %c",&c);
	if(c=='d')
	printf("\n ORDER PLACED SUCCESSFULLY :)");	
	if(c=='p')
	{
		printf("\n choose your card\n \tcredit(c)\n\tdebit(d)");
		scanf(" %c",&ch);
		printf("\nenter your password :");
		scanf("%d",&password);
		printf("\n ORDER PLACED SUCCESSFULLY :)");
	}	
	printf("\n THANK YOU FOR CHOOSING 'THRIFTSHOP' :) :) :)");
}
