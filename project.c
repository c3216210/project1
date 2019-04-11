#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
    /*Read File*/
    FILE * input;    
    char a[25];
    int i = 0;
    input = fopen("data.txt", "r");
    if(input == NULL) {
        perror("fopen()");
        }
        for(i = 0; i<26; i++) {

        a[i] = fgetc(input);
        if( feof(input) ) {
            break ;
            }
            }

  
  printf("The encrytion of rotation message:\n");
    /*Encrypt the rotation cipher message*/
   int n/*Set the initial*/, k = 6/* the key value*/, b = 0/*Set the initial*/;
     
   for(n = 0; n<26; n++){
       
       /*Read the given text then encrypt by the key*/
       b = a[n]+ k;
       
       /*Print out the message*/
       if(b<=122){
       printf("%c", b);
       }
       else{
       b = b - 26;
       printf("%c", b);
       }
   }
   printf("\n");
    printf("\n");
    
   /*Decrypt the rotation cipher message*/
    printf("The dnecrytion of rotation message:\n");
  int j = 0;/*the value of key*/
   for(n = 0; n < 26; n++){
       
       /* Read the given text then decrypt by the key*/
      
       b = a[n]-j;
       
       /*Print out the message*/
       if(b>=97){
       printf("%c", b);
       }
       else{
       b = b + 26;
       printf("%c", b);
       }
   }
       printf("\n");
  printf("\n");
  
   /*Encrypt the substutution cipher message*/
    printf("The encrytion of substitution message:\n");

    printf("\n");
      printf("\n");
      
   /*Decrypt the substitution cipher message*/
    printf("The decrytion of substitution message:\n");

  
  



 return 0;
}
