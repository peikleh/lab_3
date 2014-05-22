/* 
 * File:   main.c
 * Author: nevin.leh
 *
 * Created on May 22, 2014, 11:23 AM
 */

#include <stdio.h>
#include <stdlib.h>

void problem_1(int condition_A, int condition_B);
void problem_2(int condition_A, int condition_B);
void problem_3(int condition_A, int condition_B);
void problem_4(int chk_num);
void problem_5(int num_A, int num_B);
void extra_credit();


void problem_1(int condition_A, int condition_B){
    if(condition_A!=0 && condition_B==0){
        printf("X \n.");
    }else {
        printf("Y \n.");
    }
}
void problem_2(int condition_A, int condition_B){
    if(!condition_A && !condition_B){
        printf("Y \n.");
    }else{
        printf("X \n");
    }
}
void problem_3(int condition_A, int condition_B){
    if(!( condition_A || condition_B)){
        printf("Y \n.");
    }else{
        printf("X \n.");
    }
}

void problem_4(int chk_num){
    switch(chk_num){
        case 0:
        case 1:
        case 2:
        case 3:
        printf("Too low \n.");
        break;
        case 4:
        case 5:
            printf("Just Right \n.");
            break;
        case 6:
        case 7:
        case 8:
        case 9:
            printf("too high \n.");
            break;
        default:
            printf("Sorry, 0-9 is all I can do \n.");
        
    }
}
void problem_5(int num_A, int num_B){
    if(!(num_A || num_B)||(num_A && num_B)){
        printf(" X \n.");
    }else{
        printf(" Y \n.");
    }
}
void extra_credit(){
    float x=1.1;
    if(x== (float) 1.1){
        printf("this should print.\n");
    }
    
}


int main() {
    problem_1( 1, 1);
    problem_1( 0, 1); 
    problem_1( 1, 0); 
    problem_1( 0, 0);
    
      problem_2(1,1);
      problem_2(1,0);
      problem_2(0,1);
      problem_2(0,0);
      
      problem_3(1,1);
      problem_3(1,0);
      problem_3(0,1);
      problem_3(0,0);
      
      problem_4(-5);
      
      problem_5(1,1);
      problem_5(1,0);
      problem_5(0,1);
      problem_5(0,0);
      extra_credit();
      
      
    return (EXIT_SUCCESS);
}

