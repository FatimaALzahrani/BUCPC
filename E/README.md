   ![header](https://capsule-render.vercel.app/api?type=waving&color=FF4B56&height=300&section=header&text=E.%20Bulbs&descAlignY=51&descAlign=62)

## Table of conent :
   * [Problem](#Discription)
   * [Input](#Input)
   * [Output](#Output)
   * [Examples](#Examples)
   * [Note](#Note)
   * [Explain in Arabic](#Explain_in_Arabic)
   * [Solutions](#Solutions)


## Discription
Ghadi wants to light up a string of m bulbs for the occasion of Eid Al-Adha. Initially, all bulbs are turned off. There are n buttons, each of them is connected to a subset of bulbs. Ghadi can press any of these buttons. When the button is pressed, it turns on all the bulbs it's connected to. If Ghadi presses the button that is already connected to some bulbs that are turned on, they do not change their state and remain turned on.
Write a program to determine if Ghadi can light up all m bulbs by pressing the available buttons.



## Input
The first line of the input contains integers $n$ and $m$ $(1 ≤ n, m ≤ 100)$ — the number of buttons and the number of bulbs respectively.
Each of the next $n$ lines contains $x_i$ $(0 ≤ x_i ≤ m)$ — the number of bulbs that are turned on by the $i-th$ button, and then $x_i$ numbers $y_ij$ $(1 ≤ y_ij ≤ m)$ — the numbers of these bulbs.


## Output
If it's possible to turn on all m bulbs print "YES", otherwise print "NO".


## Examples
|standard input|standard output|
|:---:|:---:|
|3    4 <br>2   1    4<br>3   1    3    1<br>1   2 | YES|
| 3   3 <br>1   1<br>1   2<br>1   1 | NO |


## Note
In the first sample you can press each button once and turn on all the bulbs. In the 2 sample it is impossible to turn on the 3-rd lamp.


## Explain_in_Arabic
**وصف السؤال :**
غدي تريج أن تضيء سلسلة من المصابيح بمناسبة عيد الأضحى. في البداية ، تم إيقاف تشغيل جميع المصابيح. توجد أزرار n ، كل منها متصل بمجموعة فرعية من المصابيح. يمكن لغدي الضغط على أي من هذه الأزرار. عند الضغط على الزر ، يتم تشغيل جميع المصابيح المتصلة به. إذا ضغطت غدي على الزر المتصل بالفعل ببعض المصابيح التي تم تشغيلها ، فإنها لا تغير حالتها وتظل قيد التشغيل.
اكتب برنامجًا لتحديد ما إذا كان بإمكان غدي أن تضيء جميع المصابيح بالضغط على الأزرار المتاحة.

<br>

**الحل :**  بما أنه ما يهتم بالتكرار لأن اذا المصباح مضاء من قبل ما بياثر بالنتيجة فبنستخدم (set) عشان نعرف عدد المصابيح الفريده التي تمت اضاءتها:<br>

1- بنخزن الارقام بset <br>
2- اذا كان طول القائمة حقتنا يساوي عدد المصابيح بنطبع ترو لانه يعني كل المصابيح مضاءه , فير كذا فولس


## Solutions
  <ol type="1">
      	<li><a href="https://github.com/FatimaALzahrani/BUCPC/blob/main/BUCPC/E/E.cpp">c++</a></li>
        <li><a href="https://github.com/FatimaALzahrani/BUCPC/blob/main/BUCPC/E/E.java">java</a></li>
        <li><a href="https://github.com/FatimaALzahrani/BUCPC/blob/main/BUCPC/E/E.py">python</a></li>
      </ol>
