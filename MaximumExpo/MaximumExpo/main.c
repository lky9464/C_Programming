//
//  main.c
//  MaximumExpo
//
//  Created by IT on 2018. 2. 21..
//  Copyright © 2018년 MobileX. All rights reserved.
//
// 2^k <= n, max. of k?

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int userNum;
    printf("2^k <= n, n을 입력하세요. : ");
    scanf("%d", &userNum); // 우항n
    
    int MaxN = 2;
    int k = 0;
    
    
    for(k; MaxN <= userNum; k++) {
        MaxN = MaxN * 2;
    }
    
    printf("공식을 만족하는 k의 최대값은 %d 입니다.\n", k);
    
    return 0;
}
