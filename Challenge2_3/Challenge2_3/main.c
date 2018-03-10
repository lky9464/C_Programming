//
//  main.c
//  Challenge2_3
//
//  Created by IT on 2018. 3. 2..
//  Copyright © 2018년 MobileX. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int intArray[10];
    int uNum = 0;
    int length = sizeof(intArray)/sizeof(int) - 1; // 10
    int length2 = 0;
    
    for(int i = 0; i < sizeof(intArray)/sizeof(int); i++){
        //printf("%lu", sizeof(intArray));
        printf("10개의 정수를 입력하세요.(%d / 10) : ", i+1);
        scanf("%d", &uNum);
        if(uNum % 2 == 1){
            intArray[length2] = uNum;
            length2 += 1;
        }else{
            intArray[length] = uNum;
            length -= 1;
        }
    }
    
    
    
    
    printf("배열 요소의 출력 : ");
    
    for(int j = 0; j < sizeof(intArray)/sizeof(int); j++){
        printf("%d ", intArray[j]);
    }
    printf("\n");
    
    return 0;
}
