#include "main.h"

int main(void) {
	system("clear");
	puts("Welcome to StoopidShell!");
	puts("You can do anything you want in StoopidShell.");
	puts("(Just don't enter multiple strings...)");
        while (1) {
                char user_input[32];
                printf("StoopidShell: ");
                if(scanf("%s",user_input) == 1) {;
                	if (strcmp(user_input,"cat") == 0) {
				cat();
			} if (strcmp(user_input,"crunch") == 0) {
				crunch();
			} else if (strcmp(user_input,"help") == 0) {
				puts("Available commands: help, cat, crunch");
			}
		} else {
			puts("Nothing was entered...");
		}
        }
}

