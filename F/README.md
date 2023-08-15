   ![header](https://capsule-render.vercel.app/api?type=waving&color=FFAEC9&height=300&section=header&text=F.%20Gifts&descAlignY=51&descAlign=62)

## Table of conent :
   * [Problem](#Discription)
   * [Input](#Discription)
   * [Output](#Discription)
   * [Examples](#Discription)
   * [Explain in Arabic](#Explain_in_Arabic)
   * [Solutions](#Solutions)


## Discription
Ahmed and Mohammed are brothers, Their father Mark gave each of them $N$ presents. The price of the gifts Ahmed received are given to you as $a_1,a_2..,a_n$ and The price of the gifts Mohammed received are given to you as $b_1,b_2..,b_n$
Now Mark wants to know if he is a fair father or not, he will be fair if the sum of prices of gifts of both his children is the same. Can you help Mark and tell him if he is a fair father or not?.


## Input
The first line contains an integer $N (1 ≤ N ≤ 100)$ the number of gifts each one got.
Next line contains $N$ integers separated by a single space $a_1,a_2..,a_n$ $(1 ≤ a_i≤ 100)$. $a_i$ represent the price of the $i−th$ gift Ahmed received.
Next line contains $N$ integers separated by a single space $b_1,b_2..,b_n$ $(1 ≤ b_i≤ 100)$. $b_i$ represent the price of the $i−th$ gift Mohammed received.


## Output
print "fair"if the sum of prices of the gifts that Ahmed and Mohammed received is equal, and "not fair"otherwise. 


## Examples
|standard input|standard output|
|:---:|:---:|
| 4 <br>1  10  5  6 <br>1  2  3  5 | not fair |
| 2 <br>4   2 <br> 3   3  | fair |


## Explain_in_Arabic
**وصف السؤال :**
أحمد ومحمد شقيقان ، وقدم والدهما هدايا لكل منهما. سعر الهدايا التي تسلمها أحمد هو: $a_1 ، a_2 .. ، a_n$ ، وثمن الهدايا التي تسلمها محمد: $b_1، b_2 ..، b_n$
يريد ,والدهم الآن معرفة ما إذا كان أبًا عادلًا أم لا ، فسيكون عادلاً إذا كان مجموع أسعار الهدايا لكل من طفليه هو نفسه. هل يمكنك مساعدة الوالد وإخباره ما إذا كان أباً عادلاً أم لا؟.

<br>

**الحل :** الحل بكل بساطة اننا بنجمع قيم هدايا احمد وقيم هدايا محمد ونشوف اذا نفس السعر فهو عادل واذا غير متساويه فهو غير عادل , وتنحل بكثير طرق 


## Solutions
  <ol type="1">
      	<li><a href="https://github.com/FatimaALzahrani/BUCPC/blob/main/BUCPC/F/F.cpp">c++</a></li>
        <li><a href="https://github.com/FatimaALzahrani/BUCPC/blob/main/BUCPC/F/F.java">java</a></li>
        <li><a href="https://github.com/FatimaALzahrani/BUCPC/blob/main/BUCPC/F/F.py">python</a></li>
      </ol>
