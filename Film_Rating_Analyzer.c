#include <stdio.h>


int main(){
    double movierating=0.0;
    char moviename[]="";

    printf("enter movie name : ");
    scanf("%s",moviename);

    printf("enter movie rating between 0.0-5.0 : ");
    scanf("%lf",&movierating);

    if(movierating>=0.0 && movierating <=2.0){
        printf("flop\n");
 }
 else if(movierating>=2.1 && movierating <=3.4){
        printf("semi-hit\n");
 }   
  else if(movierating>=3.5 && movierating <=4.5){
        printf("hit\n");
 }else{
    printf("super hit\n");
 }      
 return 0;
}