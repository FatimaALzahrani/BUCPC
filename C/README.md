   ![header](https://capsule-render.vercel.app/api?type=waving&color=99D9EA&height=300&section=header&text=C.%20Game&descAlignY=51&descAlign=62)

## Table of conent :
   * [Problem](#Discription)
   * [Input](#Discription)
   * [Output](#Discription)
   * [Examples](#Discription)
   * [Explain in Arabic](#Explain_in_Arabic)
   * [Solutions](#Solutions)


## Discription
Majd and Hoor are close friends and they like playing games together. One day, they came up with a new game.
The rules of the game are as follows:<br>
•	They will make a list of N numbers to play with.<br>
•	Hoor plays first and the two players make moves in alternating turns.<br>
•	In a single move, a player chooses the maximum number in the list and removes it as well as all the other elements to its right. If there are multiple elements with the maximum value, the player chooses the leftmost element.<br>
•	The first player who is unable to make a move, loses the game.<br>
You will be given a list of N numbers. Can you tell who will win this round according to the rules?

## Input
The first line contains a single integer $T$ the number of test cases $(1 ≤ T ≤ 10)$.
The first line of each test case contains one integer $N$ $(1 ≤ N ≤ 100) $- denoting the number of elements in the list.
The second line of each test case contains $N$ numbers $a_1,a_2,..,a_n$ . $(1 ≤ a_i ≤10^5)$.


## Output
For each test case, print the name of the winner either “Majd” or “Hoor” (both without quotations)

## Examples
|standard input|standard output|
|:---:|:---:|
|2 <br> 4 <br> 4  1  2  4 <br> 5 <br> 4  2  5  3  6|Majd  <br> Majd |

## Explain_in_Arabic
**وصف السؤال :**

مجد وحور صديقتان وتحبان اللعب معًا. ذات يوم ، جاءوا بلعبة جديدة.
قواعد اللعبة كما يلي: <br>
• سيقومون بعمل قائمة بأرقام N للعب بها.<br>
• تلعب حور أولاً وتقوم هي ومجد بحركات بالتناوب.<br>
• في نقلة واحدة ، تختار اللاعبة أكبر عدد في المصفوفه وتشيله بالإضافة إلى جميع العناصر الأخرى الموجودة على يمينه. إذا كان أكبر عدد مكرر أكثر من مره ، تختار اللاعبة العنصر الموجود في أقصى اليسار.<br>
• أول لاعبة غير قادرة على القيام بحركة تخسر اللعبة.<br>
ستحصل على قائمة بأرقام N. هل يمكنك معرفة من سيفوز في هذه الجولة وفقًا للقواعد؟

<br>

**الحل :** يمكن حل هذه المسألة باستخدام "قائمة (vector/list)". وهذه الخطوات الرئيسية لحل هذه المسألة:<br>
   1- قم بتمرير كل الارقام للقائمة. <br>
   2- بنجيب أكبر عدد بالقائمة والمكان حقه واذا فيه تكرار بناخذ اول واحد لقيناه<br>
   3- بنحذف كل العناصر على يمين أكبر عدد ونزيد العداد بواحد<br>
   4- بنعيد الخطوات الين تصير القائمة فاضيه
   5- بنتاكد اذا العدد يقبل القسمة على اثنين فالفائزة حور لأنها بدأت فيعني انها هي اخر من لعب واذا فردي مجد

## Solutions
  <ol type="1">
      	<li><a href="https://github.com/FatimaALzahrani/BUCPC/blob/main/BUCPC/C/C.cpp">c++</a></li>
        <li><a href="https://github.com/FatimaALzahrani/BUCPC/blob/main/BUCPC/C/C.java">java</a></li>
        <li><a href="https://github.com/FatimaALzahrani/BUCPC/blob/main/BUCPC/C/C.py">python</a></li>
      </ol>
