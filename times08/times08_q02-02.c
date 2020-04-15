/** 
 * @ *Author : Lucifer_程曾
 * @Date: 2020-03-28 17:02:19
 * @LastEditTime: 2020-03-28 17:59:24
 * @Description: Programmed by Lucifer
 */
/* times08_q02-02.c */
extern int printf(const char *,...);
extern int A;

int func(int i){
    printf("%d+%d=",A,i);
    A+=i;
    printf("%d\n",A);
}
