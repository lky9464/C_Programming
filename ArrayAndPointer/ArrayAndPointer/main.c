//
//  main.c
//  ArrayAndPointer
//
//  Created by IT on 2018. 2. 23..
//  Copyright © 2018년 MobileX. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int arr[] = {1, 2, 3, 4, 5, 6};
    int length = sizeof(arr) / sizeof(int);
    
    int * front = &arr[0];
    int * rear = &arr[length - 1];
    
    int temp = 0;
    
    for(int i = 0; i < length; i++){
        
        if(i == 0){
            temp = front[0];
            front[0] = rear[length-1];
            rear[length-1] = temp;
            printf("%d ", front[0]);
        }else{
            
            printf("%d ", front[length-i-1]);
        }
    }
    printf("\n");
    
    
    
    
    return 0;
}
