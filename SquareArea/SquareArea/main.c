//
//  main.c
//  SquareArea
//
//  Created by IT on 2018. 2. 19..
//  Copyright © 2018년 MobileX. All rights reserved.
//


// show area of square on coordinates

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    float x1, y1, x2, y2;
    printf("첫번째 점의 x y 좌표를 차례로 입력하세요. : ");
    scanf("%f %f", &x1, &y1);
    printf("두번째 점의 x y 좌표를 차례로 입력하세요. : ");
    scanf("%f %f", &x2, &y2);
    
    float width, height;
    
    width = x1 - x2;
    if(width < 0) {
        width = -width;
    }
    
    height = y1 - y2;
    if(height < 0) {
        height = -height;
    }
    
    float area = width * height;
    
    printf("넓이는 %f 입니다.\n", area);
    
    return 0;
}
