//  函数学习
// Created by 26814 on 2025/7/1.
//
#include <stdio.h>
int sum(int a,int b){
    int result;
    result = a + b;
    return result;
}

int demo03(){
    int a;
    int b;
    scanf("%d %d",&a,&b);
    int he = sum(a,b);
    printf("%d\n",he);
    return 0;
}
