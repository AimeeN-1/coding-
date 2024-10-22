/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby,
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main()
{
    char twitter[280]; 
    int mostcommon2;
    int mostcommon1;
    int charCounter;
    int i;
    int j;
    int numCounter;
    int lowerCharCounter;
    int upperCharCounter;
    int spaceCounter;
    char mostcommonchar;
    printf("give a statement\r\n");
    fgets(twitter,280, stdin);
    printf("%s\n\r", twitter);

for(i=1; twitter[i]; i++){
    if(twitter[i] != ' '){
    charCounter ++;
    }
}
    printf("\nthe total number of characters in your message is %d\n", charCounter);
    
    
    for(i=0; twitter[i]; i++){
    if(twitter[i] <= 57 && twitter[i] >= 48){
    numCounter ++;
    }
}
    printf("\nthe total number of numbers in your message is %d\n", numCounter);
    
     for(i=0; twitter[i]; i++){
    if(twitter[i] <= 122 && twitter[i] >= 97){
    lowerCharCounter ++;
    }
}
    printf("\nthe total number of lower case characters in your message is %d\n", lowerCharCounter);
    
    
     for(i=0; twitter[i]; i++) {
    if(twitter[i] <= 47 && twitter[i] >= 32)
     spaceCounter ++; 
    else if(twitter[i] <= 64 && twitter[i] >= 58)
        spaceCounter ++;
    else if(twitter[i] <= 96 && twitter[i] >= 91)
     spaceCounter ++;
     else if(twitter[i] <= 126 && twitter[i] >= 123)
     spaceCounter ++;

}
    printf("\nthe total number of alphanumeric characters and spaces in your message is %d\n", spaceCounter);
    
    for(i=0; twitter[i]; i++){
        for(j=0; twitter[j]; j++) 
        if(twitter[i]==twitter[j]){
            mostcommon2++;
        }
        {
      
}
if(mostcommon1 < mostcommon2){
    mostcommon1=mostcommon2;
    mostcommonchar=twitter[i];
}
mostcommon2=0;
    }
   printf("\nthe most common character is %c", mostcommonchar ); 
}  
    
