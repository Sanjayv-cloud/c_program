#include<stdio.h>
int main(){
    FILE *fb;
    fb = fopen("/home/gaming/sna","r");
    if(fb == NULL){
        printf("the file does not exist");
    }
    else{
        char ch;
        while((ch=fgetc(fb))!=EOF){
            printf("%c",ch);
        }
        fclose(fb);
    }
}