//
//  main.c
//  Challenge3_3
//
//  Created by LeeKY on 13/03/2018.
//  Copyright © 2018 MobileX. All rights reserved.
//
//  Random Number
//  RAND_MAX() == 2147483647
#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    
    printf("난수의 범위 : 0부터 %d까지 \n", RAND_MAX/RAND_MAX + 98);
    
    
    
    for(int i = 0; i < 5; i++){
        
        int a = rand() % 100; // 랜덤한 수를 100으로 나눈 나머지 값 (a는 무조건 0~99의 수)
        printf("난수 출력 : %d\n", a);
    }
    
    return 0;
}
