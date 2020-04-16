
extern int printf(const char *, ...);
extern int scanf(const char *, ...);
extern int number;

/*extern void input_and_print()*/
void input_and_print(){
    printf("input a number:\n");
    scanf("%d",&number);
    printf("input is %d\n",number);
}