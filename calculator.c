// a calculator program by Darshini

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main()
{

 float n1,n2,result=0; // declaration of datatypes.
 int choice,choice1;

 
 while(1)
 {
  
    print:
     system("cls");
     system("color f0");
     printf("______________________________________________________________________________________________________________________________________________________________\n");
     printf("                                                        1. Addition\n\n");
     printf("                                                        2. Subtraction\n\n");
     printf("                                                        3. Multiplication\n\n");
     printf("                                                        4. Division\n\n");
     printf("                                                        5. Exit\n\n\n\n");
     printf("                                                       Enter your choice:");
    
      while(scanf("%d",&choice)==0)

    // code for invalid choice

     {
      system("cls");
      printf("invalid choice\n");
      scanf("%*s");
      printf("press enter to go back ");
      getch();
      goto print;
     }
    
    
     
         if(choice==0 || choice>5) 
        
      {
        system("cls");
        printf(" please enter  the valid choice.\n");
        printf("press enter to back.\n");
        getch();      
        goto print; 
      }
     

    system("cls");
    
    switch(choice)
   {

                                                                                          //addition

    case 1:
      system("color f4");
      while(1)
       {
        add:   
        system("cls");
        printf("                                                                                 ADDITION\n\n");
        
               float a[5],sum=0;                                 //array size declaration
               int n,i;              
                                                  

           printf("                                                                  How many numbers do you want to add?\n");
           while(scanf("%d",&n)==0)                                // while loop for invalid input
            {
              system("cls");
              printf("                                                               Enter a valid number.\n");
              scanf("%*s");
              printf("                                                               Press enter to go back");
              getch();
              goto add;
            }
             
           if(n>10)
            {
             system("cls");
             printf("                                                                           ADDITION\n\n");
             printf("                                                               Can't add more than 10 numbers.\n\n\n\n");
             printf("                                                               Press 'ENTER'to go back previous screen.\n");
             getch();
             goto add;
            }
           if(n==0 || n==1)
            {
             system("cls");
             printf("                                                                          ADDITION\n\n");
             printf("                                                                You can't give %d as number of integers.\n\n\n\n" ,n);
             printf("                                                                Press 'ENTER'to go back previous screen.\n");
             getch();
             system("cls");
             goto add;
            }
            
         
      system("cls");
      printf("                                                                                              ADDITION\n\n");

     // ask user for input

      printf("                                                                                     Enter %d numbers to add:",n);
 
      for(i=0;i<n;i++)
      {
        scanf("%f",&a[i]);
        sum=sum+a[i];
      }
      system ("cls");
      printf("                                                                                              ADDITION\n\n");
      printf("                                                                                      Sum = %f",sum);
      getch();  

     print1:
     system("cls");
     printf("                                                                                               ADDITION\n\n");
     printf("                                                                                        1.to continue....\n");
     printf("                                                                                        2.to end..\n\n");
     printf("                                                                                          Your choice: \n");
     while(scanf("%d",&choice1)==0)
     {
      system("cls");
      printf("                                                                                              ADDITION\n\n");
      printf("                                                                                          Invalid choice\n");
      scanf("%*c");
      printf("                                                                                          Press enter to go back\n");
      getch();
      system("cls");
      goto print1;
    }

    
     if(choice1==0 || choice1>2)
     {
      system("cls");
      printf("                                                                                             ADDITION\n\n");
      printf("                                                                                         Please enter  the valid choice.\n");
      printf("                                                                                         Press enter to back.\n");
      getch();
      system("cls");
      goto print1;
     }
    
         
   switch(choice1)
   {
    case 1:
     system("cls");
     printf("                                                                                              ADDITION\n\n");
     printf("                                                                                           Press any key to  continue  addition\n");
     getch();
     system("cls");
     goto add;
         
    case 2:
     system("cls");
     printf("                                                                                               ADDITION\n\n");
     printf("                                                                                           Print any key to end addition..\n");
     getch();
     system("cls");
     goto print;         
   }
   }
getch();
break;
                                                                                          // subtraction 
    case 2:
     system("color f2");
     while(1)
     {
       float n1,n2, sum;

    sub:
     system("cls");
     printf("                                         SUBTRACTION \n\n");
     printf("                          Enter two numbers to subtract:" );
     scanf("%f%f",&n1,&n2);
  
     sum=n1-n2;    
     
     system("cls");
     printf("                                      SUBTRACTION \n\n\n\n\n");
     printf("                                 %f-%f=%f",n1,n2,sum);
     getch();  

    print2:
     system("cls");
     printf("                                      SUBTRACTION\n\n\n\n\n");
     printf("                               1.to  Continue....\n");
     printf("                               2.to End..\n\n\n");
     printf("                                      Your choice: \n");
     while(scanf("%d",&choice1)==0)
     {
      system("cls");
      printf("                                   SUBTRACTION\n\n\n\n\n");
      printf("                                Invalid choice\n\n");
      scanf("%*s");
      printf("                              Press enter to go back\n");
      getch();
      system("cls");
      goto print2;
     }

     
      if(choice1==0 || choice1>2)
      {
       system("cls");
       printf("                                   SUBTRACTION\n\n");
       printf("                              Please enter  the valid choice.\n\n");
       printf("                              Press enter to back.\n");
       getch();
       system("cls");
       goto print2;
     }
     switch(choice1)
     {
      case 1:
       system("cls");
       printf("                                   SUBTRACTION\n\n");
       printf("                              Press any key to continue subtraction\n");
       getch();
       system("cls");
       goto sub;
         
      case 2:
       system("cls");
       printf("                                   SUBTRACTION\n\n"); 
       printf("                             Press any key to end subtraction..\n");
       getch();
       system("cls");
       goto print;         
     }
     }
getch();
break;

case 3:                                                                        // MULTIPLICATION
 system("color f5");
 while(1)
 {
  product: 
   system("cls");  
   printf("                                                                                        MULTIPLICATION\n\n");          
  
   float a[10],product=1;
   int i,n;
   printf("                                                                                       How many numbers do you want to multiply?\n");
           
   while(scanf("%d",&n)==0)
   {
    system("cls");
    printf("                                                                                       Enter a valid number.\n");
    scanf("%*s");
    printf("                                                                                       Press enter to go back");
    getch();
    system("cls");
    goto product;
   }

   if(n>10)
   {
    system("cls");
    printf("                                                                                           MULTIPLICATION\n\n");
    printf("                                                                                         Can't multiply more than 10 numbers.\n\n\n\n");
    printf("                                                                                         Press 'ENTER'to go back previous screen.\n");
    getch();
    goto product;
   }

   if(n==0 || n==1)
   {
    system("cls");
    printf("                                                                                            MULTIPLICATION\n\n");
    printf("                                                                                          You can't give %d as number of integers.\n\n\n\n" ,n);
    getch();
    system("cls");
    goto product; 
   }
        
  system("cls");
  printf("                                                                                                MULTIPLICATION\n\n\n\n\n");
  printf("                                                                                            Enter  %d numbers to multiply :",n);
  for(i=0;i<n;i++)
  {
  scanf("%f",&a[i]);

  product=product*a[i];
  }
  system("cls");
  printf("                                                                                                 MULTIPLICATION\n\n\n\n\n");
  printf("                                                                                           Product =%f\n",product);
  getch();

  print3:
   system("cls");
   printf("                                                                                                 MULTIPLICATION\n\n\n\n\n");
   printf("                                                                                            1.to  Continue....\n");
   printf("                                                                                            2.to  End..\n\n\n");
   printf("                                                                                            Your choice: \n");
   while(scanf("%d",&choice1)==0)
   {
    system("cls");
    printf("                                                                                                MULTIPLICATION\n\n\n\n\n");
    printf("                                                                                             Invalid choice\n");
    scanf("%*s");
    printf("                                                                                            Press enter to go back\n");
    getch(); system("cls");
    goto print3;   
   }      
   if(choice1<1||choice1>2)
   {
    system("cls");
    printf("                                                                                                MULTIPLICATION\n\n\n\n\n");
    printf("                                                                                            Enter a valid  choice.\n\n");
    printf("                                                                                            Press enter to go back");
    getch();
    system("cls");
    goto product;  
   }
         
   switch(choice1)
   {
    case 1:
     system("clsr");
     printf("                                                                                              MULTIPLICATION\n\n\n\n\n");
     printf("                                                                                           Press any key to continue multiplication\n");
     getch();
     system("cls");
     goto   product;

    case 2:
     system("cls");
     printf("                                                                                             MULTIPLICATION\n\n\n\n\n");
     printf("                                                                                           Press any key to  end multiplication..\n");
     getch();
     system("cls");
     goto print;
   }
 }
 getch();
 break;

case 4:                                                  //division
 system("color f1");
 while(1)
 {
  div:   
   printf("                                                                                                DIVISION\n\n\n");
   printf("                                                                                              Enter two numbers:");
   scanf("%f%f",&n1,&n2);
   result=n1/n2;
   system("cls"); 
   printf("                                                                                                DIVISION\n\n\n\n\n");
   printf("                                                                                             %f /%f =  %f\n\n \n",n1,n2,result);
   getch();
  print4:
   system("cls");
   printf("                                                                                               DIVISION\n\n\n");
   printf("                                                                                           1.to Continue....\n");
   printf("                                                                                           2.to  End..\n\n\n");
   printf("                                                                                           Your choice: \n");
  while(scanf("%d",&choice)==0)
  {
   system("cls"); 
   printf("                                                                                               DIVISION\n\n\n");
   printf("                                                                                           Invalid choice\n\n");
   scanf("%*s");
   printf("                                                                                           Press enter to go back\n");
   getch();
   system("cls");
   goto print4;
  }
   switch(choice)
   {
    case 1:
     system("cls");
     printf("                                                                                             DIVISION\n\n\n");
     printf("                                                                                          Press any key to  continue division\n");
     getch();
     system("cls");
     goto div;

    case 2:
     system("cls");
     printf("                                                                                             DIVISION\n\n\n");
     printf("                                                                                          Press any key to  end division.\n");
     getch();
     system("cls");
     goto print;
   }
 }

 getch();
 break;

case 5:
 exit(0);     

}
}
 
return 0;
}

