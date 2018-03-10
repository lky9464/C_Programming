//
//  main.c
//  RecursiveFactorial
//
//  Created by IT on 2018. 2. 21..
//  Copyright © 2018년 MobileX. All rights reserved.
//

#include <stdio.h>

int factorial(int expo){
    if(expo == 0){
        return 1;
    }
    int result;
    result = 2 * factorial(expo - 1);
    
    return result;
}

int main(int argc, const char * argv[]) {
    int expo;
    printf("정수 입력 : ");
    scanf("%d", &expo);
    
    printf("2의 %d승은 %d입니다.\n", expo, factorial(expo));
    return 0;
}
