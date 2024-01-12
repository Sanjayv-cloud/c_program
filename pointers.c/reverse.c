#include <stdio.h>
#include <string.h>

void reverseString(char *str) {
    int length = strlen(str);

    for (int i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
}

int main() {
    const int maxLength = 100;
    char arr[maxLength];

    printf("Enter a string: ");
    fgets(arr, maxLength, stdin);
    
    // Remove newline character from fgets input
    arr[strcspn(arr, "\n")] = '\0';

    reverseString(arr);

    printf("Reversed string: %s\n", arr);

    return 0;
}


// //in c++ using while

// #include<iostream>
// #include<cstring>
// using namespace std;
// void reverse(char *str,int max)
// {
//     char *start = str;
//     char *end = str+max-1;
    
//     while(start<end)
//     {
//         char temp = *start;
//         *start = *end;
//         *end = temp;
        
//         start++;end--;
//     }
// }
// int main()
// {
//     const int max = 300;
//     char arr[max];
//     cin.getline(arr,max);
//     int length = strlen(arr);
   
    reverse(arr,length);
    cout<<"Reversed string: "<<arr;
}
