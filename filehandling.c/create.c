#include<stdio.h>
int main(){
FILE *fb;
fb = fopen("textfile.txt","a");
fprintf(fb,"%s"," nice work buddy\n");
fclose(fb);
}