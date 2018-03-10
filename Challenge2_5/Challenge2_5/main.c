//
//  main.c
//  Challenge2_5
//
//  Created by IT on 2018. 3. 3..
//  Copyright © 2018년 MobileX. All rights reserved.
//
// Bubble sort

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int sizeOfArray;
    
    printf("배열의 크기를 설정하세요. : ");
    scanf("%d", &sizeOfArray);
    
    int intArray[sizeOfArray];
    
    //printf("%lu", sizeof(intArray));
    
    for(int i = 0; i < sizeOfArray; i++){
        printf("%d번째 인자를 입력하세요 ( %d / %d ) : ", i + 1, i + 1,   sizeOfArray);
        scanf("%d", &intArray[i]);
    }
 
    for(int j = 0; j < sizeOfArray - 1; j++){
        for(int i = 0; i < sizeOfArray - 1; i++){
            int temp;
            if(intArray[i] > intArray[i+1]){
                temp = intArray[i+1];
                intArray[i+1] = intArray[i];
                intArray[i] = temp;
            }
        }
    }
    
    for(int i = 0; i < sizeOfArray; i++){
        printf("%d ", intArray[i]);
    }
    printf("정렬완료.\n");
    
    
    
    return 0;
}
