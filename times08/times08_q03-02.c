/** 
 * @ *Author : Lucifer_程曾
 * @Date: 2020-03-28 17:59:38
 * @LastEditTime: 2020-03-28 18:06:58
 * @Description: Programmed by Lucifer
 */

extern int printf(const char *, ...);
extern int scanf(const char *, ...);
extern int number;

/*extern void input_and_print()*/
void input_and_print(){
    printf("input a number:\n");
    scanf("%d",&number);
    printf("input is %d\n",number);
}