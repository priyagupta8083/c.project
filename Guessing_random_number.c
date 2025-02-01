// c.project
#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main(){
    int random, guess;
    int no_of_guess=0;
    srand(time(NULL));


    printf("welcome to the world of Guessing numbers\n");
    random = rand() % 100+1;//generating between 0 t0 100 
    //printf("number generated is:%d",random);

    do{
        printf("\nplease enter your Guess between(1to100):\n");
        scanf("%d",&guess );
        no_of_guess++;

        if(guess<random){
            printf("Guess larger number.\n");
        }else if(guess>random){
            printf("Guess a smaller number. \n");
        }else{
            printf("Congratulations !! You have successfully guessed the Number in %d attempts",no_of_guess);
        }
    }
    while(guess!=random);
    printf("\n Bye Bye , Thanks for playing");
    printf(" Developed by:priya");
}
