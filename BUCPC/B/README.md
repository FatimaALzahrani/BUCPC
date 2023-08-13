   ![header](https://capsule-render.vercel.app/api?type=waving&color=F7F7F7&height=300&section=header&text=B.%20Parentheses%20Validity%20Checker&descAlignY=51&descAlign=62)

## Table of conent :
   * [Problem](#Discription)
   * [Input](#Discription)
   * [Output](#Discription)
   * [Examples](#Discription)
   * [Explain in Arabic](#Explain_in_Arabic)
   * [Solutions](#Solutions)


## Discription
You've encountered a fascinating sequence of strings, each composed solely of the characters `(`, `)`, `[`, and `]`. You're tasked with determining their validity based on the following rules:
(a) An empty string is inherently valid.
(b) If two strings, A and B, are both valid, then their concatenation, AB, is also considered valid.
(c) If a string A is valid, then the enclosed versions, namely (A) and [A], are also valid.
Write a powerful program that can process this sequence of strings and accurately ascertain their validity. Your program should operate under the assumption that the maximum length of each string does not exceed 128 characters.

## Input
The input file commences with a positive integer `n`, followed by a sequence of `n` strings. Each string comprises only the characters `(`, `)`, `[`, and `]`, and they are presented one string per line.

## Output
For each input string, produce an output of 'Yes' or 'No', signifying whether the string adheres to the specified rules of validity.

## Examples
|standard input|standard output|
|:---:|:---:|
|3 <br> ([]) <br> (([()]))) <br> ([()[]()])()|Yes <br> No <br> Yes|

## Explain_in_Arabic
**وصف السؤال :**

لديك سلسلة نصية مكونة من الاقواس () و []. مهمتك هي تحديد ما إذا كانت كل سلسلة صالحة وفقًا للقواعد التالية:
- النص الفارغ صالح بالفعل.
- إذا كانت سلسلتان A و B صالحتين، فإن AB هو أيضًا صالح.
- إذا كانت سلسلة A صالحة، فإن الاقواس المحاطة بها (A) و [A] هي أيضًا صالحة.
هدفك هو كتابة برنامج قوي يمكنه معالجة هذه المتسلسلة من السلاسل النصية وتحديد ما إذا كانت كل سلسلة تتبع هذه القواعد الصحيحة. والسلاسل المعطاه لن تتجاوز طول 128 حرفًا.
<br>
**الحل :**
  
  يمكن حل هذه المسألة باستخدام "المكدس (Stack)". يمكننا استخدام المكدس للتحقق من توازن الأقواس والأقواس المربعة في النص. وهذه الخطوات الرئيسية لحل هذه المسألة:
   قم بتمرير كل حرف في النص بالتسلسل.
   1- إذا كان القوس هو ( أو [، نضيفه إلى المكدس.
   2- إذا كان القوس هو ) أو ]، بنتأكد من أعلى المكدس:
     أ. إذا كان المكدس فارغًا، فهذا يعني أنه لا يوجد توازن لأن مافي فتحه يقفلها، فالنص غير صالح.
     ب. إذا كان المكدس غير فارغ والحرف في الرأس يتوافق مع القوس الحالي، قم بإزالة الحرف من المكدس.
     ج. إذا كان المكدس غير فارغ والحرف في الرأس لا يتوافق مع القوس الحالي، فإنه غير صالح .
   3- بعد انتهاء معالجة جميع الأقواس، تحقق مما إذا كان المكدس فارغًا. إذا كان كذلك، فإن النص صالح، وإلا فإنه غير صالح.

## Solutions
  <ol type="1">
      	<li><a href="https://github.com/FatimaALzahrani/BUCPC/blob/main/BUCPC/B/B.cpp">c++</a></li>
        <li><a href="https://github.com/FatimaALzahrani/BUCPC/blob/main/BUCPC/B/B.java">java</a></li>
        <li><a href="https://github.com/FatimaALzahrani/BUCPC/blob/main/BUCPC/B/B.py">python</a></li>
      </ol>
