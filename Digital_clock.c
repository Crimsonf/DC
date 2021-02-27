#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    int HH,MM,SS; /*HH resembles hours MM resembles mintues SS resmbeles secounds*/
    int d = 1; /*setting a delay so it can happen as a secound*/
    printf("Set time: \n");

    printf("Input the amount of secounds\n");
    scanf("%d",&SS);

    printf("Input the amount of secounds\n");
    scanf("%d",&MM);

    printf("Input the amount of secounds\n");
    scanf("%d",&HH);

    /*we gonna set a timer for it that when it reachs more than 24 hours in total it will input a new day */
    /*adding on a restrictions so if the user inputed more than 60 to the secounds or the mins or more than 24 hours it will close by itself telling that user there was an error*/
    if(HH>24 || MM >60 || SS >60){
        printf("It appears there is an error in one of you inputs \n Please try again :)");
        exit(0);
    }
  while(1){

    SS++; /*it will add 1 each time*/
    if (SS>59){/*limiting the secound to only reach 60*/
        MM++; /*adding one min everytime the secounds reach 59*/
        SS = 0; /*restarting it all over again*/
    }
    if (MM > 59){
        HH++; /*To add an hour everytime 60 mins happen*/
        MM= 0;/*Restarting it all over again*/
    }
    if(HH >24){
            HH = 1;

    }
    printf("\n Clock : %02d:%02d:%02d\n",HH,MM,SS);
    sleep(d);/*Since the code moves so fast we will lower it so it can be an actaul clock*/
    /*so it won't pile up we gonna use system(cls) */
     system("cls");
  }
    return 0;
}
