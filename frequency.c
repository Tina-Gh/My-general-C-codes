#include <stdio.h> 
#include <string.h> 
#include <stdlib.h> 
 
int main() 
{ 
 int i,j; 
 int freqency[26]; 
 
 for (int temp=0;temp<26;temp++) 
 { 
  /* code */freqency[temp]=0; 
 } 
 
 char* text=malloc(sizeof(char*)); 
 gets(text); 
 
 //printf("%s\n",text); 
 int length=strlen(text); 
 
 
 
 for (int i = 0; i<length; i++) 
 { 
  freqency[text[i]-'a']++; 
  //printf("*\n"); 
 } 

 
 
 for (j=0; j<26 ; j++) 
 { 
  printf("%c=%d\n",('a'+j),freqency[j]); 
    } 
 
 
 return 0; 
} 