// #include<stdio.h>
// #include<string.h>
// #include<stdlib.h>

// //encrypt code here
// void encrypt(char *text,char *key,int text_length,int key_length){

//     for(int i=0;i<text_length;i++){
//         text[i] = text[i] ^ key[i % key_length]; 
//          }
         
// } 
// //decrypt code here
// void decrypt(char *text,char *key,int text_length,int key_length){


//     for(int i=0;i<text_length;i++){
//         text[i] = text[i] ^ key[i % key_length]; 
//          }
         
// } 

// int main() {
//     // your code goes here
//     char text[] = "sanjay";
//     char key[]  = "safe";
//     int ch;
//     int text_length = strlen(text);
//     int key_length = strlen(key);


//     printf("1 = encrypt , 2 = decrypt:");
//     scanf("%d", &ch);

//     if(ch == 1){
//         encrypt(text,key,text_length,key_length);
//         printf("the encrypt key is %s\n",text);
//     }
//     else if (ch == 2)
//     {
//         encrypt(text,key,text_length,key_length);
//         printf(" the decrypt key is%s\n",text);
//     }
//     else
//     printf("Invalid Input");
    
// printf("no %s",text);


// }

#include<stdio.h>
#include<string.h>
// function for encrypt decrypt using xor
void xor_encrypt_decrpt (char *text,char *key){
    int text_length = strlen(text);
    int key_length  = strlen(key);
    for(int i=0 ; i < text_length; ++i ){
        text[i] = text[i] ^ key[i%key_length];
    }
}

int main(){
    char text[]="hello gaming!!";
    char key[] = "private";
    // original string 
    printf("\nthe original string : %s\n",text);

     xor_encrypt_decrpt(text,key);
    // encrypt key
    printf("enrypted key is: %s\n",text);

    xor_encrypt_decrpt(text,key);

    //decrypt key
    printf("decrypted key for text is %s\n",text);


}

