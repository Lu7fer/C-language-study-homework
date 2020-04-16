

/* times08_q02-02.c */
extern int printf(const char *,...);
extern int A;

int func(int i){
    printf("%d+%d=",A,i);
    A+=i;
    printf("%d\n",A);
}
