/**
 * @Author : Lucifer_程曾
 * @Date: 2020-04-08 13:46:19
 * @LastEditTime: 2020-04-14 10:53:04
 * @Description: Programmed by Lucifer
 * @FilePath: \Homework\zTest\Test.java
 */
package zTest;
public class Test {
    public static void main(String[] args) {
        String str = "";
        for (int i = 0; i < args.length; i++) {
            if (!str.contains(args[i]))
                System.out.println(args[i]);
        }
    }
}