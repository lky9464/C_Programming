//
//  main.c
//  ArrayAndPointer2
//
//  Created by IT on 2018. 2. 23..
//  Copyright © 2018년 MobileX. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int num1 = 10, num2 = 20, num3 = 30;
    
    int * arr[3] = {&num1, &num2, &num3};
    
    //printf("%d\n", **arr);
    //printf("%d\n", *arr[1]);
    //printf("%d\n", *arr[2]);
    
    char * strArray[3];
    strArray[0] = "cㅊ";
    strArray[1] = "bㅠ";
    strArray[2] = "aㅁ";
    
    
    
    
    printf("%s\n", strArray[0]);
    printf("%s\n", strArray[1]);
    printf("%s\n", strArray[2]);
    
    return 0;
}
