   ![header](https://capsule-render.vercel.app/api?type=waving&color=F7F7F7&height=300&section=header&text=C.%20Good%20String&descAlignY=51&descAlign=62)

## Table of conent :
   * [Problem](#Discription)
   * [Input](#Input)
   * [Output](#Output)
   * [Examples](#Examples)
   * [Explain in Arabic](#Explain_in_Arabic)
   * [Solutions](#Solutions)


## Discription
A string is called k − good if there exists some character that appears at least k consecutive times in that string. Your task is to find if a given string S is a k − good string or not and if it is find the first character that satisfies the condition. 

## Input
The input consists of one line. You will be given string S consisting only of lowercase English letters (1 ≤ |S| ≤ $10^3$) and an integer K (1 ≤ K ≤$10^3$) separated by a space


## Output
If the string is a k − good string print "YES" (without the quotes and case insensitive) and the first character that satisfies the condition separated by a space. If not, print "NO" (without the quotes and case insensitive). 


## Examples
|standard input|standard output|
|:---:|:---:|
|abcaa 5|NO |
| helloo 2 | YES l |
|eefaa 2 |YES e | 

## Explain_in_Arabic
**وصف السؤال :**

المسألة تتطلب منا أن نقوم بفحص سلسلة نصية معينة للتحقق مما إذا كانت هذه السلسلة "k-good" أم لا. سلسلة "k-good" هي سلسلة تحتوي على حرف يظهر على الأقل k مرات متتالية فيها. إذا كانت السلسلة "k-good"، فيجب علينا طباعة "YES" تليها أول حرف يظهر k مرات متتالية، وإذا لم تكن "k-good" فيجب علينا طباعة "NO".

إذا كانت السلسلة S "k-good"، يجب طباعة "YES" متبوعًا بأول حرف يظهر k مرات متتالية في السلسلة. إذا لم تكن "k-good" يجب طباعة "NO".

<br>

**الحل :** يمكن حل هذه المسألة بطرق كثيره جدا , وهذه احدى الطرق لحل هذه المسألة:<br>
   1-  يتم قراءة السلسلة النصية s والعدد k من المدخلات. <br>
   2- يتم استخدام متغير re لتخزين الحرف المطلوب ويتم تهيئته بالقيمة '0' كقيمة افتراضية.<br>
   3-يتم استخدام حلقتين تضمان البحث عن الحرف المناسب:<br>
   4- الحلقة الخارجية تمر على الأحرف الواحدة تلو الأخرى.<br>
   5- الحلقة الداخلية تحسب عدد مرات ظهور الحرف الخارجي في السلسلة.<br>
   6- إذا تم العثور على حرف يظهر k مرات، يتم تخزينه في المتغير re ويتم الخروج من الحلقتين.<br>
   7- بعد الخروج من الحلقة الخارجية، يتم التحقق من قيمة المتغير re. إذا كان '0' يتم طباعة "NO"، وإلا يتم طباعة "YES" مع الحرف الذي تم العثور عليه.

## Solutions
  <ol type="1">
      	<li><a href="https://github.com/FatimaALzahrani/BUCPC/blob/main/C/C.cpp">c++</a></li>
        <li><a href="https://github.com/FatimaALzahrani/BUCPC/blob/main/C/C.java">java</a></li>
        <li><a href="https://github.com/FatimaALzahrani/BUCPC/blob/main/C/C.py">python</a></li>
      </ol>
