#include <stdio.h>
#include <stdlib.h>


int main(){
    /*Read File*/
    FILE * input;    
    int a[25];
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
            /*printf("%c\n", a[i]);*/
            }

  
  
    /*Encrypt the message*/
   int n, k = 1, b = 0;
   
   for(n = 0; n<26; n++){
       if(b<122){
       b = a[n]+ k;
       printf("%c\n", b);
       }
       else{
       b = 97;
       printf("%c\n", b);
       }
   }
   

    /*for(int n = 0; n<26; n++){
     
     printf("%c %d\n", n+65, n+65);
    }*/



 return 0;
}
