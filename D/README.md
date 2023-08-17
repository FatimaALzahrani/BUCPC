   ![header](https://capsule-render.vercel.app/api?type=waving&color=FFF200&height=300&section=header&text=D.%20software&descAlignY=51&descAlign=62)

## Table of conent :
   * [Problem](#Discription)
   * [Input](#Input)
   * [Output](#Output)
   * [Examples](#Examples)
   * [Note](#Note)
   * [Explain in Arabic](#Explain_in_Arabic)
   * [Solutions](#Solutions)


## Discription
Fatima works as a programmer in a software research company. She is currently analyzing a user's code which can be represented as a string S consisting only of certain characters. Fatima has made an important discovery, she realized that if a substring of length 4 of the code is repeated at least three times in the full string S, then the user has a special ability.
Can you help Fatima to calculate how many unique strings that give the user special abilities?


## Input
The only line contains a string S that represents the code sequence of the user $(1≤|S|≤105)$
The string S consists of only lowercase English letters.


## Output
Print the number of unique strings that gives the patient special abilities.


## Examples
|standard input|standard output|
|:---:|:---:|
| sdfagerbx | 0 |
| aaaaaaaa | 1 |
|aaabcdbaaabcdabaaabcd|3|


## Note 
A substring is a contiguous sequence of characters within a string.
In the third example, the strings "aaab", "aabc" and "abcd" are repeated at least 3 times as substrings in the string "aaabcdbaaabcdabaaabcd".


## Explain_in_Arabic
**وصف السؤال :**

تعمل فاطمة كمبرمجة في شركة أبحاث برمجيات. تقوم حاليًا بتحليل رمز مستخدم يمكن تمثيله كسلسلة S تتكون فقط من أحرف معينة. حققت فاطمة اكتشافًا مهمًا ، فقد أدركت أنه إذا تكررت سلسلة فرعية بطول 4 من الكود ثلاث مرات على الأقل في السلسلة الكاملة S ، فسيكون للمستخدم قدرة خاصة.
هل يمكنك مساعدة فاطمة في حساب عدد السلاسل الفريدة التي تمنح المستخدم قدرات خاصة؟

يعني ابغاكم تحسبون كل السلاسل الفرعية المكونه من اربع احرف وتكررت ثلاث مرات فأكثر
<br>

**الحل :** يمكن حل هذه المسألة باستخدام "(map)", والسبب في ذلك اننا نبغا نحسب عدد مرات تكرار شي معين . وهذه الخطوات الرئيسية لحل هذه المسألة:<br>
   1- بنخزن جميع السلاسل الفرعية من السلسله الاساسيه ويكون طولهم 4 , 
   وحركه `mp[s.substr(i,4)]++` بتفيدنا بانها تحسب كم مره تكررت هذه السلسه الفرعية وتخليها كقيمة لها  واذا ما كانت موجودة من قبل بتضيفها للماب وتخلي قيمتها واحد لين يجي احد مكرر معها وتصير تزيد<br>
   2- بنمر على الماب حقتنا واذا كانت السلسله تكررت 3 مرات واكثر بنزود العداد بواحد<br>
   3- نطبع قيمة العداد واللي بتكون عدد السلاسل الفرعية اللي طولهم 4 وتكرروا 3 مرات فاكثر<br>

## Solutions
  <ol type="1">
      	<li><a href="https://github.com/FatimaALzahrani/BUCPC/blob/main/D/D.cpp">c++</a></li>
        <li><a href="https://github.com/FatimaALzahrani/BUCPC/blob/main/D/D.java">java</a></li>
        <li><a href="https://github.com/FatimaALzahrani/BUCPC/blob/main/D/D.py">python</a></li>
      </ol>
