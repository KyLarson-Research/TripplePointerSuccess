
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void p(char **a, char ***b){
    *a = (char*)malloc(sizeof(char)*6);
    *b = (char**)malloc(sizeof(char*)*3);
    char *c =(char*)malloc(sizeof(char)*6);
    char *d =(char*)malloc(sizeof(char)*8);
    strcpy(c, "Point");
    strcpy(*a, "point");
    strcpy(d, "address");
    b[0][0] = *a;
    b[0][1] = c;
    b[0][2] = d;
    
    return;
}

int main(void) {
    char *a, **b;
    int i;
    p(&a, &b);
    for(i=0; i<3; i++){
       printf("a  %p %s  b %p %s \n", a, a, b[i], b[i]);
    }
    return 0;
}




