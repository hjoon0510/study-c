// page195 ,
structure-point-195.c
//
https://stackoverflow.com/questions/43444299/using-strcpy-to-copy-a-string-to-a-member-of-a-structure-via-the-pointer-operato
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MALLOC_CODE 0
struct data {
        char name[20];
        char tel[20];
        int height;
        int weight;
};// data structure
int main()
{
#if MALLOC_CODE == 1
        struct data * p = (struct data *) malloc(sizeof(struct data));
        strcpy(p->name, "KimCheolSoo");
        strcpy(p->tel, "123-4567");
        p->height = 170;
        p->weight = 55;
#else
        // struct data my = { "김철수", "123-4567", 170,55
};
        struct data my;
        strcpy(my.name, "kimCheolsoo");
        strcpy(my.tel, "123-4567");
        my.height = 170;
        my.weight = 55;
        struct data* p;
        p = &my;
#endif
        printf("이름     : %s \n", p->name);
        printf("전화번호 : %s\n", p->tel);
        printf("키       : %d \n", (*p).height);
        printf("몸무게   : %d \n", (*p).weight);
#if MALLOC_CODE == 
        free(p);
#endif
}
