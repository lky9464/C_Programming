//
//  main.c
//  Operator2
//
//  Created by IT on 2018. 2. 19..
//  Copyright © 2018년 MobileX. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int a, b;
    
    printf("몫과 나머지를 구합니다. 나눗셈 연산을 진행할 수를 차례로 입력하세요.\n");
    printf("정수1 : ");
    scanf("%d", &a);
    printf("정수2 : ");
    scanf("%d", &b);
    
    int qout, rmd;
    qout = a / b;
    rmd = a - (qout * b);
    
    printf("몫 : %d, 나머지 : %d \n", qout, rmd);
    
    return 0;
}
