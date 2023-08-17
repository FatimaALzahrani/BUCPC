   ![header](https://capsule-render.vercel.app/api?type=waving&color=FF7F27&height=300&section=header&text=G.%20Throwing%20cards%20away&descAlignY=51&descAlign=62)

## Table of conent :
   * [Problem](#Discription)
   * [Input](#Input)
   * [Output](#Output)
   * [Examples](#Examples)
   * [Explain in Arabic](#Explain_in_Arabic)
   * [Solutions](#Solutions)


## Discription
You have a deck of cards with numbers from 1 to n, where card 1 is at the top and card n is at the bottom. The following operation is performed repeatedly as long as there are at least two cards in the deck:<br>

1. Discard the top card.<br>
2. Move the card that is now on top of the deck to the bottom of the deck.<br>
Your task is to simulate this process and determine the sequence of discarded cards and the last remaining card.


## Input
Each line of input (except the last) contains an integer $n$ $(1 ≤ n ≤ 50)$. The last line contains a single integer '0', which should not be processed.




## Output
For each input number, print two lines of output. The first line presents the sequence of discarded cards, and the second line reports the last remaining card. The output should follow the given format.



## Examples
|standard input|standard output|
|:---:|:---:|
| 7 <br>19<br>10<br>6<br>0 |Discarded cards: 1, 3, 5, 7, 4, 2<br>Remaining card: 6<br>Discarded cards: 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 4, 8, 12, 16, 2, 10, 18, 14<br>Remaining card: 6<br>Discarded cards: 1, 3, 5, 7, 9, 2, 6, 10, 8<br>Remaining card: 4<br>Discarded cards: 1, 3, 5, 2, 6<br>Remaining card: 4|


## Explain_in_Arabic
**وصف السؤال :**
لديك مجموعة أوراق بأرقام من 1 إلى n ، حيث تكون البطاقة 1 في الأعلى والبطاقة n في الأسفل. يتم إجراء العملية التالية بشكل متكرر طالما أن هناك بطاقتان على الأقل في المجموعة:
1. تجاهل البطاقة العلوية.
2. انقل البطاقة الموجودة الآن أعلى السطح إلى أسفل المجموعة.
مهمتك هي محاكاة هذه العملية وتحديد تسلسل البطاقات المهملة وآخر بطاقة متبقية.

يعني بيكون عندنا بطاقات مرتبة من 1 للعدد المدخل اذا ما كان صفر  , واحنا بنسوي عليهم عمليتين نطلع العدد الاول كمخرج واللي بعده نرجعه ورا ونكرر العمليه الين ما يبقا الا عدد واحد ونحط بالباقي  , ولو كان العدد صفر بنطلع خلاص <br>
هنا مثال لو كان ال n=7

<img width="317" alt="ex" src="https://github.com/FatimaALzahrani/BUCPC/assets/107775566/48ecfadd-7830-44b8-858f-124945087b4a">

<br>

**الحل :** 
1. قراءة عدد البطاقات n.<br>
2. داخل حلقة while تستمر حتى تكون قراءة n (n != 0).<br>
   * إنشاء (queue) q لتمثيل التجميع , ليه كيو لانها تقدر تحذف من قدام
   * قم بإضافة بطاقات من 1 إلى n إلى القائمة q.
   * طباعة "Discarded cards:".
   * داخل حلقة while تستمر ما دام حجم القائمة q أكبر من 1:
      - طباعة البطاقة الأمامية في القائمة q وإزالتها.
      - حفظ البطاقة الأمامية الجديدة في المتغير p.
      - إذا لم تكن القائمة q فارغة، قم بطباعة فاصلة.
      - أضف البطاقة p إلى نهاية القائمة q.
      - طباعة البطاقة المتبقية في القائمة q.
      - قم بإزالة البطاقة المتبقية من القائمة q.
3. كرر الخطوة 1 حتى يتم قراءة n  (n != 0).

## Solutions
  <ol type="1">
      	<li><a href="https://github.com/FatimaALzahrani/BUCPC/blob/main/G/G.cpp">c++</a></li>
        <li><a href="https://github.com/FatimaALzahrani/BUCPC/blob/main/G/G.java">java</a></li>
        <li><a href="https://github.com/FatimaALzahrani/BUCPC/blob/main/G/G.py">python</a></li>
      </ol>
