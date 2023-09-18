#include<stdio.h>
int main(){
FILE *fb;
fb = fopen("textfile.txt","a");
fprintf(fb," nice work\n");
fclose(fb);
}