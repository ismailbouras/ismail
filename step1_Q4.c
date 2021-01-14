#include<stdio.h>
#include<stdlib.h>

int main()
{


 int i,count,total=0;

do {
    printf("Entrer les entiers positifs\n");
    scanf("%d" , &i);

    if(i>-1){
    count++;
    total+=i; //total= total+i
    }

}


while (i>-1);

    printf("la moyenne des %d entiers positifs est %.2f ",count,(float)total/count);


    return 0;



}
