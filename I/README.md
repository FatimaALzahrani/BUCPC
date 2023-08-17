   ![header](https://capsule-render.vercel.app/api?type=waving&color=454545&height=300&section=header&text=I.%20Strings%20Queries&descAlignY=51&descAlign=62)

## Table of conent :
   * [Problem](#Discription)
   * [Input](#Input)
   * [Output](#Output)
   * [Examples](#Examples)
   * [Explain in Arabic](#Explain_in_Arabic)
   * [Solutions](#Solutions)


## Discription
String processing is a very important and challenging topic in competitive programming. There are so many algorithms that can be applied on strings and they often require a lot of focus to know them and be able to efficiently use them to solve a problem. Some contestants really excel at solving strings problems. This is one of these problems. Try to solve it.<br>

You are given n strings of lowercase characters and equal length m, each one has an initial score of zero, and you are given $q$ queries of two types:	<br>
   - "1 index": print the score of the index-th string.<br>
   - "2 $i_1 len_1 i_2 len_2$ ": this type consists of 2 pairs of integers: ($i_1,len_1$) , ($i_2,len_2$) describing the following operation: let $s$ be the prefix of the $i_1$-th string with length exactly $len_1$ and t be the prefix of the $i_2$-th string with length exactly $len_2$, and let $P$ be length of the longest common prefix of $s$ and $t$. Now it is possible for all strings' scores to change. For each of them, its score is increased by the number of its prefixes which are either a prefix of $s$ or a prefix of $t$ and with a length greater than or equal to $P$. If $P$ is zero (no common prefix), nothing happens.<br>
Can you answer the queries?

## Input
The first line contains a single integer $t$ $(1≤t≤10)$ — the number of test cases.
Then, the description of each test case follows.<br>
The first line of each test case contains three integers $n$, $m$, and $q$ $(1≤n×m≤2×10^5,1≤q≤10^5)$ — the number of strings, the length of each of them, and the number of queries, respectively.<br>
Then, $n$ lines follow, each line contains a string with length $m$.
The next $q$ lines describe the queries.<br>
The first integer of the i-th line is  $t_i$, the query type of the i-th query ($t_i=1$ or $t_i=2$).<br>
If $t_i=1$ , then follows an integer index — index of the required score (1≤index≤n).<br>
If $t_i=2$ , then follows four integers: $i_1,len_1,i_2,len_2$ as explained above, $(1≤i_1,i_2≤n)$, $(1≤len_1, len_2≤m)$.<br>
It's guaranteed that the sum of n×m over all test cases won't exceed $2×10^5$, and the sum of all $q$ over all test cases won't exceed $10^5$. And it's guaranteed that there is at least one query of the first type in each test case.


## Output
For each query of type 1, in all test cases, output one line with a single integer denoting the required score.


## Examples
|standard input|standard output|
|:---:|:---:|
|2<br>1 1 1<br>a<br>1 1<br>4 4 5<br>abcd<br>abgf<br>abgg<br>accc<br>2 4 4 3 4<br>1 1<br>1 2<br>1 3<br>1 4| 0<br>2<br>3<br>4<br>4 |


## Explain_in_Arabic
**وصف السؤال :**

هذه المسألة تتعامل مع مجموعة من السلاسل المكونة من أحرف صغيرة، حيث لكل سلسلة في البداية نقطة ابتدائية تساوي صفر. تحتوي المسألة على نوعين من الاستعلامات:<br>

نوع الاستعلام 1: بناءً على فهرس معين، اطبع نقطة السلسلة الموافقة لهذا الفهرس.<br>

نوع الاستعلام 2: بناءً على اثنين من أزواج الفهارس والأطوال، قم بتنفيذ عملية على جزئين فرعيين من سلاسل مختلفة. تحسب العملية طول أطول بادئة مشترك بين هذين الجزئين. لكل سلسلة، يتم زيادة نقطتها بمقدار عدد بادئاتها التي تكون إما بادئة للجزء الفرعي الأول أو بادئة للجزء الفرعي الثاني، وتكون طولها أكبر من أو يساوي طول أطول بادئة مشترك. إذا كان طول أطول بادئة مشترك هو صفر (لا توجد بادئة مشتركة)، لا يحدث أي تغيير.<br>

الهدف هو معالجة هذه الاستعلامات لمختلف حالات الاختبار.

<br>

**الحل :** 

1. يتم تعريف هيكل بيانات Trie، وهو عبارة عن شجرة تستخدم لتمثيل السلاسل. 
2. يتم تعريف مصفوفة ثنائية الأبعاد ptr لتخزين مؤشرات إلى العقد في الشجرة لكل سلسلة.
3. يبدأ البرنامج باستقبال عدد حالات الاختبار tt.
4. ثم يقوم بمعالجة كل حالة اختبار بالتفصيل:
    - يقوم بإنشاء شجرة Trie فارغة Root.
    - يقوم بقراءة العدد n (عدد السلاسل)، و m (طول كل سلسلة)، و q (عدد الاستعلامات).
    - يقوم بتعبئة مصفوفة ptr بمؤشرات إلى العقد في الشجرة المناسبة لكل حرف في السلاسل.
    - يُجري عمليات الاستعلام وحساب النقاط بناءً على طريقة معينة حسب الحالة.
        - إذا كان n أقل من m:
            * يقوم بحساب مجموعات من البادئات المشتركة ويخزنها في مصفوفات.
            * يقوم بمعالجة الاستعلامات من النوع 1 ويطبع النقاط المخزنة.
            * يقوم بمعالجة الاستعلامات من النوع 2 ويقوم بزيادة النقاط بناءً على القواعد المحددة.
        - إذا كان n أكبر من أو يساوي m:
            * يقوم بمعالجة الاستعلامات من النوع 1 ويحسب مجموع النقاط للسلسلة المحددة.
            * يقوم بمعالجة الاستعلامات من النوع 2 ويقوم بزيادة النقاط بناءً على القواعد المحددة.
            <br>
**المخرجات:** لكل استعلام من النوع 1 في كل حالة اختبار، يُطبع سطر واحد يحتوي على عدد صحيح واحد، وهو النقاط المحسوبة.


## Solutions
  <ol type="1">
      	<li><a href="https://github.com/FatimaALzahrani/BUCPC/blob/main/I/I.cpp">c++</a></li>
        <!-- <li><a href="https://github.com/FatimaALzahrani/BUCPC/blob/main/I/I.java">java</a></li>
        <li><a href="https://github.com/FatimaALzahrani/BUCPC/blob/main/I/I.py">python</a></li> -->
      </ol>
