//
//  main.c
//  Challenge2_4
//
//  Created by IT on 2018. 3. 2..
//  Copyright © 2018년 MobileX. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    
    char word[] = {};
    
    printf("회문검사, 단어를 입력하세요. : ");
    scanf("%s", word);
    
    int a = strlen(word);
    
    for(int i = 0; i <= (a/2); i++) {
        if(word[i] == word[a - i - 1]){
            printf("");
           
            
        }else{
            printf("회문이 아닙니다.\n");
            return 0;
        }
    }
    printf("회문입니다.\n");
    
    return 0;
}
