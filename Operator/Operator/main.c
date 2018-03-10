//
//  main.c
//  Operator
//
//  Created by IT on 2018. 2. 19..
//  Copyright © 2018년 MobileX. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int a, b, result;
    char oper;
    printf("연산 기호를 입력하세요.ex) +, -, *, / : ");
    scanf("%c", &oper);
    
    if(oper == '+' || oper == '-' || oper == '*' || oper == '/') {
    
        printf("연산할 정수를 차례로 입력하세요.\n");
        printf("정수1 : ");
        scanf("%d", &a);
        printf("정수2 : ");
        scanf("%d", &b);
    
        switch (oper){
            case '+':
                result = a + b;
                printf("연산 결과는 %d입니다.\n", result);
                break;
            case '-':
                result = a - b;
                printf("연산 결과는 %d입니다.\n", result);
                break;
            case '*':
                result = a * b;
                printf("연산 결과는 %d입니다.\n", result);
                break;
            default:
                result = a / b;
                printf("연산 결과는 %d입니다.\n", result);
        }
    }else{
        printf("잘못된 입력입니다.\n");
    }
    
    
    return 0;
}
