//
//  main.c
//  HourMinuteSecond
//
//  Created by IT on 2018. 2. 21..
//  Copyright © 2018년 MobileX. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int userTime;
    printf("초(second)를 입력하세요. : ");
    scanf("%d", &userTime);
    
    int hour, minute, second;
    
    hour = userTime / 3600;
    minute = (userTime - (hour * 3600)) / 60;
    second = userTime - (hour * 3600) - (minute * 60);
    
    printf("시 : %d, 분 : %d, 초 : %d\n", hour, minute, second);
    return 0;
}
