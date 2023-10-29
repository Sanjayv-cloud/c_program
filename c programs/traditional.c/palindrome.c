#include<stdio.h>
int main() {

int result =0 ,q,n,rem ;
printf("Enter the number of terms: ");  //taking input from user for no.of
scanf("%d",&n);

q = n;

while (q!=0)
{
   rem = q%10;
   result = result * 10 + rem ;
   q =  q/10;
}

if (n==result)
{
    printf("it is palidrome");
}
else
{
    printf("not a pallindrome");
}

}

// for words 
// #include <stdio.h>
// #include <string.h>

// int isPalindrome(char *str) {
//     int len = strlen(str);
//     for (int i = 0, j = len - 1; i < j; i++, j--) {
//         if (str[i] != str[j]) {
//             return 0; // Not a palindrome
//         }
//     }
//     return 1; // It's a palindrome
// }

// int main() {
//     char str[100];

//     printf("Enter a string: ");
//     scanf("%s", str);

//     if (isPalindrome(str)) {
//         printf("%s is a palindrome.\n", str);
//     } else {
//         printf("%s is not a palindrome.\n", str);
//     }

//     return 0;
// }
