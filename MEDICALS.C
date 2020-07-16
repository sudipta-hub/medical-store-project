#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
struct medicine{
		 int id,price,quantity;
		 char medicinename[100],company[100],mfg_date[11],exp_date[11],info[5000];
	       }m[10];
void purchasemedicine(int number);
void enterinfoaboutmedicine(int number);
void stockofmedicine(int number);
void knowinfoaboutmedicine(int number);
void addmedicineinstore(int number,struct medicine m[]);
void deletemedicinestore(int number);
void changemedicinedetails(int number);
main()
	    {
	    int i,j,choice,number=0,c;
	    for(i=0;i<100;i++)
	       {
		 m[i].id=0;
		 m[i].price=0;
		 m[i].quantity=0;
		   strcpy(m[i].mfg_date," ");
		   strcpy(m[i].exp_date," ");
		   strcpy(m[i].medicinename," ");
		   strcpy(m[i].company," ");
		   strcpy(m[i].info," ");
		}
	       m[0].id=1;
	       m[0].price=120;
	       m[0].quantity=30;
		    strcpy(m[0].mfg_date,"14-07-2019");
		    strcpy(m[0].exp_date,"14-07-2024");
		    strcpy(m[0].medicinename,"paracetamol");
		    strcpy(m[0].company,"GHOSH MEDICAL SHOP");
		    strcpy(m[0].info,"good medicine for fever");
	       do{
	       printf("enter\n1 -purchase medicine\n2- enter information about medicine\n3- enter stock of the medicine in the store\n4- enter medicine information\n5- add medicine\n6-delete a medicine\n7change quantity of medicine");
	       scanf("%d",&choice);

	       switch(choice)
	       {
		  case 1:
		    {
		      purchasemedicine(number+1);
		      break;
		    }
		    case 2:
		     {
		      enterinfoaboutmedicine(number+1);
		      break;
		     }
		    case 3:
		      {
			stockofmedicine(number+1);
			break;
		       }
		     case 4:
		     {
		      knowinfoaboutmedicine(number+1);
		      break;
		     }
		     case 5:
		     {
		     ++number;
		     addmedicinestore(number,m);
		     break;
		    }
		     case 6:
		      {
			deletemedicinestore(number+1);
			break;
		       }
		     case 7:
		     {
		       changemedicaldetails(number+1);
		       break;
		      }

	       }
    printf(" to continue with other option enter 1 else any other number\n");
    scanf("%d",&c);
    }while(c==1);

  }

  void purchasemedicine(int number)
   {
     int id,check,i ,quantity,flag=0,c;
     char name[100];
     printf("enter 1 if you know id else any other number to enter name of medicine");
     fflush(stdin);
     scanf("%d",&check);
     if(check==1)
       {
	 printf("enter id to purchase medicine");
	 fflush(stdin);
	 scanf("%d",&id);
	 for(i=0;i<number;i++)
	 {
	   if(m[i].id==id)
	     {
	       flag=1;
	       //int c;
	       printf("these are the details of the medicine");
	       printf("name%s\nprice=%d\navailable quantity=%d\ncomapny=%s\nmfg_date=%s\nexp date=%s\n",m[i].medicinename,m[i].price,m[i].company,m[i].mfg_date,m[i].exp_date);
		 if(strcmp(m[i].info," ")==0)
		   {
		     printf("medicine review info is not available\n");
		    }
		  else
		    {
		      printf("medicine review info=%s\n",m[i].info);
		    }
     printf("do you want to purchase %s \nif yes enter 1 else any other number\n",m[i].medicinename);
     fflush(stdin);
     scanf("%d",&c);
     if(c==1)
     {
     printf("enter quantity to purchase\n" );
     scanf("%d",&quantity);
     if(m[i].quantity>quantity)
     {
      printf("total price to be paid=%d\n",quantity*m[i].price);
     }
       else{
	  printf("please enter quantity below available quantity\n");
	  }
    }
   break;
  }
 }
 if(flag==0)
 {
 printf("entered id not found\n");
 }
 }
 else
 {
 printf("enter name to search and purchase \n");
 fflush(stdin);
 gets(name);
 for(i=0;i<number;i++)
   {
     if(strcmp(m[i].medicinename,name)==0)
       {
	 flag=1;
       //	 int c;
	 printf("these are the details of the medicine");

       printf("name%s\nprice=%d\navailable quantity=%d\ncomapny=%s\nmfg_date=%s\nexp date=%s\n",m[i].medicinename,m[i].price,m[i].company,m[i].mfg_date,m[i].exp_date);
       if(strcmp(m[i].info," ")==0)
	{
	printf("medicine review info not founded\n");
	}
	else{
	  printf("medicine review info=%s\n",m[i].info);
	   }
	printf("do you want to purchase %s\n",m[i].medicinename);
	fflush(stdin);
	scanf("%d",&c);
	  if(c==1)
	   {
	    printf("enter quantity to purchase \n");
	    scanf("%d",&quantity);
	    if(m[i].quantity>quantity)
	    {
	      printf("total price to be paid =%d\n",quantity*m[i].price);
	    }
	     else
	     {
	       printf("please enter the quantity below available quantity\n");
	     }
	  }
       break;
     }

 }
 if(flag==0)
 {
   printf("entered name not found\n");
  }
 }
}
void enterinfoaboutmedicine(int number)
{
   int i,flag=0,c;
   char name[100],info[100];
   printf("enter the name of the medicine you want to  review\n");
   fflush(stdin);
   gets(name);
   for(i=0;i<number;i++)
     {
       if(strcmp(m[i].medicinename,name)==0)
	 {
	   flag=1;
	   printf("enter the details of the medicine \n");
	    printf("name%s\nprice=%d\navailable quantity=%d\ncomapny=%s\nmfg_date=%s\nexp date=%s\n",m[i].medicinename,m[i].price,m[i].company,m[i].mfg_date,m[i].exp_date);
	     if(strcmp(m[i].info," ")!=0)
	      {
		printf("review already available !\n if you want to add a review enter 1 else anyother number\n");
		fflush(stdin);
		scanf("%d",&c);
		 }
	      else
		{
		  printf("enter review(less than 100 characters)\n");
		  fflush(stdin);
		  gets(m[i].info);
		 }
		if(c==1)
		  {
		     printf("enter review(less than 100 characters)\n");
		     fflush(stdin);
		     gets(info);
		     strcat(m[i].info," ;");
		     strcat(m[i].info,info);
		   }
	       }
	    }
	if(flag==0)
	  {
	    pintf("entered name is not found try again \n");
	  }
	}
void knowinfoaboutmedicine(int number){
  int i ,flag=0;
  char name[100];
  printf("enter the name of the medicine you want to see in review or info\n");
  fflush(stdin);
  gets(name);
   for(i=0;i<number;i++)
     {
       if(strcmp(m[i].medicinename,name)==0)
	{
	  flag=1;
	  printf("these are the details of the medicine");
	  printf("name%s\nprice=%d\navailable quantity=%d\ncomapny=%s\nmfg_date=%s\nexp date=%s\n",m[i].medicinename,m[i].price,m[i].company,m[i].mfg_date,m[i].exp_date);
	   if(strcmp(m[i].info," ")!=0)
	     {
	       printf("review of info=%s\n",m[i].info);
	      }
	    else
	    {
	     printf("review info not available\n");
	    }
	   }
	}
     if(flag==0)
     {
      printf("entered name is not found");
     }
   }
void stockofmedicine(int number){
 int i;
 if(number!=0)
    {
     printf("all available items are \n");
     for(i=0;i<number;i++)
       {
	 if(m[i].id!=0)
	 {
	    printf("name%s\nprice=%d\navailable quantity=%d\ncomapny=%s\nmfg_date=%s\nexp date=%s\n",m[i].medicinename,m[i].price,m[i].company,m[i].mfg_date,m[i].exp_date);

	    if(strcmp(m[i].info,"")!=0)
	     {
	       printf("review or inf%s\n",m[i].info);
	      }
	    else
	      {
		printf("review or info not available\n");
	       }
	     }
	  }
	}
     else{
       printf("no items of medicines available");
       }
     }
void addmedicineinstore(int number,struct medicine m[])
  {
      char name[100];
      printf("enter medicine id\n");
      scanf("%d",&(m[number].id));
      fflush(stdin);
      printf("enter medicine name");
      fflush(stdin);
      gets(name);
      strcpy(m[number].medicinename,name);
      printf("enter the company name\n");
      fflush(stdin);
      gets(m[number].company);
      printf("enter manufactured date\n");
      fflush(stdin);
      gets(m[number].mfg_date);
      printf("enter expiry date\n");
      fflush(stdin);
      gets(m[number].exp_date);
      printf("enter quantity\n");
      fflush(stdin);
      scanf("%d",&(m[number].quantity));
      printf("enter price\n");
      fflush(stdin);
      scanf("%d",&(m[number].price));
      strcpy(m[number].info," ");
      printf("medicine with i'd %d added successfully\n",m[number].id);
  }

void deletemedicinestore(int number)
  {
   int id,i,flag=0,num;
   printf("enter id to be deleted\n");
   fflush(stdin);
   scanf("%d",&id);
   for(i=0;i<number;i++)
    {
      if(m[i].id==id)
       {
	 flag=1;
	   m[i].id=0;
	       m[i].price=0;
	       m[i].quantity=0;
		    strcpy(m[i].mfg_date," ");
		    strcpy(m[i].exp_date," ");
		    strcpy(m[i].medicinename," ");
		    strcpy(m[i].company," ");
		    strcpy(m[i].info," ");
		    num=i;

		    break;
		 }
	       }
	if(flag==1)
	   {
	      printf("medicine with %d is deketed succesfully\n",num);
	    }
	 }
void changemedicinedetails(int number)
    {
      int id,quantity,choice,c,i;
      printf("enter id to change details\n");
      scanf("%d",&id);
      for(i=0;i<number;i++)
	{
	  if(m[i].id==id&&m[i].id!=0)
	   {
	     do
	       {
		 printf("enter\n1-change quantity\n2-change price\n3-change name\n4-change company\n5-change manufacturing date\n6-change expiry date\n7-change info\n anyother number to exit");
		   scanf("%d",&choice);
		   if(choice==1)
		    {
		     int quantity;
		     printf("enter quantity to be changed");
		     fflush(stdin);
		     scanf("%d",&quantity);
		     m[i].quantity=quantity;
		     printf("quantity changed successfully\n");
		    }
		   if(choice==2)
		    {
		      int price;
		      printf("enter price to be changed");
		     fflush(stdin);
		     scanf("%d",&price);
		     m[i].price=price;
		     printf("price changed successfully\n");
		   }
		   if(choice==3)
		    {
		      char name[100];
		      printf("enter name  to be changed");
		     fflush(stdin);
		     gets(name);

		    strcpy( m[i].medicinename,name);
		     printf("name changed successfully\n");
		    }
		   if(choice==4)
		   {
		     char company[100];
		      printf("enter company  to be changed");
		     fflush(stdin);
		     gets(company);

		    strcpy( m[i].company,company);
		     printf("company changed successfully\n");
		    }
		  if(choice==5)
		  {
		     char mfg[11];
		      printf("enter manufacturing date  to be changed");
		     fflush(stdin);
		     gets(mfg);

		    strcpy( m[i].mfg_date,mfg);
		     printf("manufacturing date changed successfully\n");
		   }
		 if(choice==6)
		   {
		     char exp[11];

		      printf("enter expiry  to be changed");
		     fflush(stdin);
		     gets(exp);

		    strcpy( m[i].exp_date,exp);
		     printf("expiry date changed successfully\n");
		   }
		  if(choice==7)
		  {
		     char info[100];
		      printf("enter info  to be changed");
		     fflush(stdin);
		     gets(info);

		    strcpy( m[i].info,info);
		     printf("info changed successfully\n");
		    }
		   if(choice<=0&&choice>7)
		   {
		     printf("enter valid choice\n");
		   }
		     printf("enter 1 to change other details else any other number \n");
		     fflush(stdin);
		     scanf("%d",&c);
		     }while(c==1);
		     break;

		     }
		  }
	      }






