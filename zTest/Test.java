/** 
 * @Author : Lu7fer
 * @Date: 2020-04-17 22:19:00
 * @LastEditTime: 2020-04-19 22:13:48
 * @FilePath: \C-language-study-homework\zTest\Test.java
 * @Stu_ID: 2019X....X229_Lu7fer
 * @Github: https://github.com/Lu7fer/C-language-study-homework
 * @Copyright
-------------------------------------------
Copyright (C) 2020 - Lu7fer
C-language-study-homework is free software: you can redistribute it and/or modify it under the terms
of the GNU General Public License as published by the Free Software Foundation,
either version 3 of the License, or (at your option) any later version.
 
You should have received a copy of the GNU General Public License along with C-language-study-homework. 
If not, see <http: //www.gnu.org/licenses/>.
-------------------------------------------
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