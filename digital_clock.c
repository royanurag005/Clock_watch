#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>//for sleep
#include<time.h>
// #include<windows.h>
#include<direct.h>
int main(){
int comp;
int hr,min,sec,i;
hr=min=sec=0;
char inp[3];
char inpp[3]="AM";
//input of Time 
printf("THIS IS A PROGRAM DEVELOPED BY ANURAG ROY:\n\n\n");
printf("Enter time in (HR : MIN) below-\n");
scanf("%d %d",&hr,&min);
printf("Kindly enter AM or PM :\n");
scanf("%s",inp);

//Now compairing the input with the Time of the day
if(inp==inpp){
    comp=2;
}
else{
    comp=1;

}
    Loopstrt:
for(i=1;i<=43200;i++){
    sec++;
    if(sec>59){
        min++;
        sec=0;
    }
    if(min>59){
        hr++;
        min=0;
        sec=0;//
    }
    if(hr>11){
        hr=0;
        min=0;
    }
       // sec=0;//
        //comp++;
        // if(comp==1){
        //     comp=2;
        // }
        // if(comp==2){
        //     comp=1;
        // }
            sleep(1);
                system("cls");

    // system("cls");
    printf("%d\t%d\t%d",hr,min,sec);
    if(i%2==0){
        printf("\tAM");
    }
    else{
        printf("\tPM");
    }
        if(comp==1){
            comp=2;
        }
        if(comp==2){
            comp=1;
        }
   // system("cls");
    
        goto Loopstrt;
}

    // sleep(1000);

    // system("cls");
    // printf("%d\t:%d:\t%d",hr,min,sec);
    // if(i%2==0){
    //     printf("\tAM");
    // }
    // else{
    //     printf("\tPM");
    // }


    return 0;
}