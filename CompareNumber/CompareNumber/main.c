//
//  main.c
//  CompareNumber
//
//  Created by IT on 2018. 2. 23..
//  Copyright © 2018년 MobileX. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int intArray[5];
    
    for(int i = 0; i < 5; i++) {
        printf("정수를 입력하세요. (%d/5) : ", i + 1);
        scanf("%d", &intArray[i]);
    }
    
    int max = 0;
    int min = 0;
    int sum = 0;
    
    for(int j = 0; j < 5; j++) {
        if(intArray[j] > max) { //find max.
            max = intArray[j];
        }
        
        if(j == 0){ //find min.
            if(intArray[0] < intArray[1]) {
                min = intArray[0];
            }else{
                min = intArray[1];
            }
        }else{
            if(intArray[j] < min) {
                min = intArray[j];
            }
        }
        
        sum += intArray[j]; //find sum;
    }
    printf("\n");
    
    printf("입력된 정수 중에서 최댓값 : %d\n", max);
    printf("입력된 정수 중에서 최댓값 : %d\n", min);
    printf("입력된 정수들의 총합 : %d\n", sum);
    return 0;
}
