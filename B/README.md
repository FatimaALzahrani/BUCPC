   ![header](https://capsule-render.vercel.app/api?type=waving&color=99D9EA&height=300&section=header&text=B.%20Stock%20Market&descAlignY=51&descAlign=62)

## Table of conent :
   * [Problem](#Discription)
   * [Input](#Input)
   * [Output](#Output)
   * [Examples](#Examples)
   * [Explain in Arabic](#Explain_in_Arabic)
   * [Solutions](#Solutions)


## Discription
Majd has decided to invest some money in the stock market. She bought one stock, the stock’s price was X dollars, and she waited so she could sell this stock at a higher price than the price she bought it for. One day, the price of this stock became Y dollars, and Majd decided to sell it on this day. Can you tell her how much profit she made from this investment? 

## Input
The first line contains an integer T, the number of test cases. Each test case consists of one line that contains two integers X and Y (1 ≤ X < Y ≤ 100), the price the stock was bought for and the price the stock was sold for. 

## Output
For each test case, print in a single line one integer, the profit earned from this stock. 

## Examples
|standard input|standard output|
|:---:|:---:|
|4 <br>4 10<br>1 100 <br>2 86 <br>18 50|6<br>99<br>84<br>32|

## Explain_in_Arabic
**وصف السؤال :**

المسألة تتحدث عن مستثمرة تُدعى مجد قامت بشراء سهم في سوق الأسهم. قامت مجد بشراء السهم بسعر X دولار، وقررت أن تبيعه عندما يصبح سعره أعلى من السعر الذي اشترته به. في يوم ما، ارتفع سعر السهم إلى Y دولار، وقررت مجد أن تبيعه في هذا اليوم. المطلوب هو حساب الربح الذي حققته مجد من هذا الاستثمار.

المدخلات:
يحتوي السطر الأول على عدد صحيح T، وهو عدد حالات الاختبار. تتكون كل حالة اختبار من سطر واحد يحتوي على عددين صحيحين X وY، والسعر الذي تم شراء السهم به والسعر الذي تم بيع السهم به.<br>
هدفك هو حساب الربح الذي حققته مجد من هذا الاستثمار.
<br>

**الحل :** يمكن حل هذه المسألة بطرح العدد الثاني "السعر الذي تم بيع السهم به" من العدد الأول "السعر الذي تم شراء السهر فيه" <br>
   لأنه بيحسب قيمة الربح فبالتالي بيطرح السعر اللي باعه فيه من السعر الاصلي اللي اشتراه به
   <br>

## Solutions
  <ol type="1">
      	<li><a href="https://github.com/FatimaALzahrani/BUCPC/blob/main/B/B.cpp">c++</a></li>
        <li><a href="https://github.com/FatimaALzahrani/BUCPC/blob/main/B/B.java">java</a></li>
        <li><a href="https://github.com/FatimaALzahrani/BUCPC/blob/main/B/B.py">python</a></li>
      </ol>
