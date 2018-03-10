//  main.c
//  TemperatureConversion
//
//  Created by IT on 2018. 2. 19..
//  Copyright © 2018년 MobileX. All rights reserved.
//
// Celsius -> Fahrenheit, Fahrenheit -> Celsius
// Fahrenheit = 1.8 * Celsius + 32
// Celsius = (Fahrenheit - 32) / 1.8
#include <stdio.h>


void CelToFah(float Cel) {
    float Fah;
    Fah = 1.8 * Cel + 32;
    printf("화씨 %f도 입니다.\n", Fah);
}

void FahToCel(float Fah) {
    float Cel;
    Cel = (Fah - 32) / 1.8;
    printf("섭씨 %f도 입니다.\n", Cel);
}

int main(int argc, const char * argv[]) {
    float Fah, Cel;
    char temp;
    
    printf("섭씨온도(C)입니까 화씨온도(F)입니까? : ");
    scanf("%c", &temp);
    
    if(temp == 'C' || temp == 'c') {
        printf("몇 도(C) 입니까? : ");
        scanf("%f", &Cel);
        CelToFah(Cel);
    }else if(temp == 'F' || temp == 'f') {
        printf("몇 도(F) 입니까? : ");
        scanf("%f", &Fah);
        FahToCel(Fah);
        
    }else{
        printf("?\n");
    }
    return 0;
}
