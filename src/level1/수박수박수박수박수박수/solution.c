#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(int n) {
    // 리턴할 값은 메모리를 동적 할당해주세요.
    char* answer = (char*)malloc(n*500*sizeof(char));
    int i;
    
    for(i=0;i<n;i++){
        if(i%2==0) {
            strcat(answer, "수");
        }
        else if(i%2==1) {
            strcat(answer, "박");
        }
    }
    
    return answer;
}