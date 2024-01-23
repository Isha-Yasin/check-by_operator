
#include <stdio.h>
#include <string.h>

int main() {
    char ch; 
    char reAgain[3];
    int i;

    do {
        int vowels, consonant, digit, space = 0;

        printf("Enter characters: \n");
        scanf("%s",&ch);

            if (ch ==  'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
               printf("Vowal.\n");
            }
            else if ((ch >= 'a' && ch <= 'z')) {
               printf("Const.\n");
            }
            else if (ch >= '0' && ch <= '9') {
                printf("digit.\n");
            }
            else if (ch == ' ') {
                printf("Space\n");
            }
            else if (ch == '+' || ch == '-' || ch == '*' || ch == '/') {
                printf("Mathematical opt. \n");
            }
            else{
            	printf("Special character. \n");
			}
       

printf("Do you want to restart the program? Enter 'Yes' or 'No':  ");
        scanf("%s", reAgain);
        getchar();
    } while (strcmp(reAgain, "yes") == 0);
      while (strcmp(reAgain, "no"));
      printf("Exit Program!");
    return 0;
}

