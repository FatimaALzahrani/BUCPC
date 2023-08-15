   ![header](https://capsule-render.vercel.app/api?type=waving&color=FF7F27&height=300&section=header&text=G.%20Towers&descAlignY=51&descAlign=62)

## Table of conent :
   * [Problem](#Discription)
   * [Input](#Discription)
   * [Output](#Discription)
   * [Examples](#Discription)
   * [Explain in Arabic](#Explain_in_Arabic)
   * [Solutions](#Solutions)


## Discription
Kofta wants to go to the restaurant fast, he found out that he can jump over the roof of some towers which might help him reach the restaurant faster.
There are n towers and the restaurant is at the n-th tower (each tower has a height denoted in array H). Jumping over towers isn't that easy. If kofta stands on tower i, he has two options:<br>
1- He jumps to any tower j (j > i) such that $H_j ≤ H_i$ , which consumes no power unit.<br>
2- He jumps to to any tower j (j > i) such that $H_j>H_i$, which consumes one power unit.<br>
In both cases, no tower between i and j should be higher than either. In other words, for every k (I < k < j), the following condition must be fulfilled: $H_k ≤ H_i$ and $H_k ≤ H_j$.<br>
Kofta needs your help; he will ask you many queries. In each query, he will give you the tower he is standing on and the amount of power units he has at the moment. He wants you to tell him the index of the farthest tower he can reach (farthest here means as close as possible to n).



## Input
The first line contains a single integer $T$ $(1≤T≤10^3)$ , denoting the number of test cases. Description of each test case follows.<br>
The first line of each test case contains two space-separated integers $n$ and $q$  $(1≤n,q≤10^5)$, denoting the number of towers and queries, respectively.<br>
The second line of each test case contains $n$ space-separated integers $h_1,h_2,…,h_n$  $(1≤h_i≤10^9)$  where $h_i$ denotes the height of the i-th tower.<br>
$q$ lines follow for queries, where each line contains two space-separated integers  $x$ $(1 ≤x ≤n)$ and  $p$ $(0 ≤p ≤n)$, denoting the index of the tower Kofta will start at and the number of power units Kofta has, respectively.


## Output
For each test case, print a single integer for each query denoting the index of farthest tower Kofta can reach.


## Examples
|standard input|standard output|
|:---:|:---:|
| 1 <br> 7   5 <br>4   1   2   5   8   11   3<br>1   2<br>1   0<br>3   3<br>4   1<br>6   3 |5<br>3<br>7<br>5<br>7 |


## Explain_in_Arabic
**وصف السؤال :**
المسألة تتحدث عن شخص يُدعى "كفتة" يرغب في الذهاب إلى المطعم بسرعة. اكتشف أنه يمكنه القفز فوق أسطح بعض الأبراج مما قد يساعده في الوصول إلى المطعم بسرعة أكبر.<br>

هناك n أبراج والمطعم في البرج رقم n (كل برج له ارتفاع محدد في مصفوفة H). القفز فوق الأبراج ليس أمرًا سهلاً. إذا وقف كفتة على البرج رقم i، لديه خيارين: <br>

1. القفز إلى أي برج j (حيث j > i) بحيث $H_j ≤ H_i$ ، وهذا لا يستهلك وحدة طاقة.<br>
2. القفز إلى أي برج j (حيث j > i) بحيث $H_j > H_i$، وهذا يستهلك وحدة طاقة واحدة.<br>
في كلتا الحالتين، لا يجب أن يكون هناك برج بين i و j أعلى من أي منهما. بعبارة أخرى، لكل قيمة k (حيث I < k < j)، يجب أن تتحقق الشرط التالي: $H_k ≤ H_i , H_k ≤ H_j$. <br>
كفتة يحتاج إلى مساعدتك. سيطلب منك العديد من الاستفسارات. في كل استفسار، سيعطيك رقم البرج الذي يقف عليه وكمية وحدات الطاقة التي لديه في اللحظة الحالية. يريد منك أن تخبره بفهم البرج الأبعد الذي يمكنه الوصول إليه (أقرب إلى n).

<br>

**الحل :** 

1. قراءة البيانات المدخلة: قراءة عدد الأبراج n وارتفاعات الأبراج في مصفوفة H. <br>
2. بدء التحقق من القفزات: ابتداءً من البرج الأخير (برج n) والتحرك إلى البرج الأقل ارتفاعًا، قم بالتحقق مما إذا كان بإمكان كفتة القفز من البرج الحالي إلى برج آخر وفقًا للشروط المحددة. <br>
3. حساب القفزات الممكنة: لكل برج، احسب ما إذا كان من الممكن لكفتة القفز إلى البرج التالي بدون استهلاك وحدات طاقة أو مع استهلاك وحدة طاقة واحدة.<br>
4. تحديث البيانات: قم بتحديث بيانات المسافة واستهلاك الطاقة لكل برج. <br>
5. إجابة الاستفسارات: استجب للاستفسارات التي يقدمها كفتة بتقديم رقم البرج الأبعد الذي يمكنه الوصول إليه وفقًا لوحدات الطاقة المتاحة. <br>

## Solutions
  <ol type="1">
      	<li><a href="https://github.com/FatimaALzahrani/BUCPC/blob/main/BUCPC/G/G.cpp">c++</a></li>
        <li><a href="https://github.com/FatimaALzahrani/BUCPC/blob/main/BUCPC/G/G.java">java</a></li>
        <li><a href="https://github.com/FatimaALzahrani/BUCPC/blob/main/BUCPC/G/G.py">python</a></li>
      </ol>
