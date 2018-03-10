//
//  main.c
//  NumSwapping
//
//  Created by IT on 2018. 2. 26..
//  Copyright © 2018년 MobileX. All rights reserved.
//

#include <stdio.h>

void Swap(int * a, int * b, int * c){
    int temp = *a;
    *a = *b;
    *b = *c;
    *c = temp;
    
    printf("%d %d %d\n", *a, *b, *c);
}
int main(int argc, const char * argv[]) {
    
    int num1 = 1;
    int num2 = 2;
    int num3 = 3;
    
    printf("%d %d %d\n", num1, num2, num3);
    
    Swap(&num1, &num2, &num3);
    
    
    return 0;
}
