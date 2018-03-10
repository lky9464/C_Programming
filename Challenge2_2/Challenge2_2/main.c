//
//  main.c
//  Challenge2_2
//
//  Created by IT on 2018. 2. 27..
//  Copyright © 2018년 MobileX. All rights reserved.
//
//  decimal to binary

#include <stdio.h>


int main(int argc, const char * argv[]) {
    
    int decimal;
    int binary[] = {};
    printf("2진수로 변환 할 10진수 정수를 입력하세요. :");
    scanf("%d", &decimal );
    //int temp = decimal;
    
    int i;
    int j = 0;
    for(i = decimal; i > 0; i /= 2){
        j = j + 1; //index number
        for(j; j < sizeof(binary)/sizeof(int)+1; j++){
            if(i % 2 == 0){
                binary[j] = 0;
            }else{
                binary[j] = 1;
            }
        }
    }
    for(int k = 0; k < sizeof(binary) / sizeof(int); k++){
        printf("%d", binary[k]);
    }
    printf("\n");
    
    
    
    
    return 0;
}
