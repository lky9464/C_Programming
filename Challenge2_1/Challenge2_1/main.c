//
//  main.c
//  Challenge2_1
//
//  Created by IT on 2018. 2. 26..
//  Copyright © 2018년 MobileX. All rights reserved.
//  10index Array, divide odd, even

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int arr[10];
    int odd[] = {};
    int even[] = {};
    
    int j = 0, k = 0;
    
    for(int i = 0; i < (sizeof(arr) / sizeof(int)); i++){
        printf("정수를 입력하세요.( %d / 10 )  : ", i + 1);
        scanf("%d", &arr[i]);
        
        if(arr[i] % 2 == 1){
            odd[j] = arr[i];
            j++;
        }else{
            even[k] = arr[i];
            k++;
        }
    }
    printf("홀수 출력 : ");
    for(int a = 0; a < j; a++){
        printf("%d ", odd[a]);
    }
    printf("\n");
    
    printf("짝수 출력 : ");
    for(int a = 0; a < k; a++){
        printf("%d ", even[a]);
    }
    printf("\n");
    
    return 0;
}
