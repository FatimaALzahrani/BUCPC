   ![header](https://capsule-render.vercel.app/api?type=waving&color=A349A4&height=300&section=header&text=H.%20SaudiCPC%20Fund&descAlignY=51&descAlign=62)

## Table of conent :
   * [Problem](#Discription)
   * [Input](#Input)
   * [Output](#Output)
   * [Examples](#Examples)
   * [Explain in Arabic](#Explain_in_Arabic)
   * [Solutions](#Solutions)


## Discription
Saudi Venture Capital Company (SVC) is an early-stage investment fund headed by entrepreneurs. They are always looking for startup teams with great ideas. SVC believes in the gems found within the SaudiCPC community. In partnership with the SaudiCPC Foundation, the SaudiCPC Fund was founded to support the relentlessly resourceful and imaginative founders who exist in the community.
Sara, one of the BUCPC contestants with great ideas and potentials for a bright future, has a great idea for a new contest scoreboard, a decentralized multifunctional scoreboard. Sara wanted to present her new idea to SVC for a chance to be eligible and win the SaudiCPC Fund for her newest decentralized scoreboard.
Sara simulated what the scoreboard does but in a much simpler fashion for a quick demo to SVC. She wrote a software that takes 2 integers A and B representing the number of solved problems of two teams in a contest. Sara's software needs to print "first" if the first team would rank higher, i.e., has higher number of solved problems, or "second" if the second team would rank higher. Otherwise, the software needs to print "draw".
Sara quickly finished her simulation and it was a great presentation. Can you do a similar simulation?


## Input
The first line contains two integers  $A,B$ $(0≤A,B≤10^9)$ − the number of solved problems by the first and second teams, respectively.


## Output
Print "first" if the first team ranks higher, "second" if the second team ranks higher, or "draw" if both teams have the same number of solved problems.


## Examples
|standard input|standard output|
|:---:|:---:|
| 2 <br>0 | first |
| 1 <br>1 | draw |
| 2 <br>4 | second |


## Explain_in_Arabic
**وصف السؤال :**
تتحدث المسألة عن شركة Saudi Venture Capital Company (SVC)، وهي صندوق استثماري في مراحل مبكرة يهدف إلى دعم الشركات الناشئة بأفكار رائعة. تبحث الشركة دائمًا عن فرق ناشئة لديها أفكار مبتكرة. تؤمن SVC بالمواهب المتاحة داخل مجتمع SaudiCPC. بالتعاون مع مؤسسة SaudiCPC، تأسس SaudiCPC Fund لدعم المؤسسين المبدعين والمبتكرين الذين ينتمون إلى هذا المجتمع.

تمتلك سارة، إحدى المشاركات في مسابقة BUCPC، أفكارًا رائعة وإمكانات لمستقبل مشرق. لديها فكرة رائعة للوحة نتائج مسابقات جديدة، وهي لوحة نتائج متعددة الوظائف ومفتوحة المصدر. ترغب سارة في تقديم فكرتها الجديدة لـ SVC لفرصة للحصول على دعم من SaudiCPC Fund للوحتها النتائج المتعددة الوظائف.

لتوضيح فكرتها، قامت سارة بتطوير برنامج يأخذ عددين صحيحين A و B يمثلان عدد المشكلات المحلولة لفريقين في مسابقة. برنامج سارة يحتاج إلى طباعة "first" إذا كان الفريق الأول سيحتل المركز الأعلى، أي أنه لديه عدد أكبر من المشكلات المحلولة، أو "second" إذا كان الفريق الثاني سيحتل المركز الأعلى. وإلا فإن البرنامج يجب أن يطبع "draw".

لقد أنجزت سارة محاكاة لوظيفة اللوحة وقدمتها بشكل سريع لـ SVC. هل يمكنك تنفيذ محاكاة مماثلة؟

<br>

**الحل :** 
1. قراءة قيمة A و B. <br>
2. قارن بين A و B: <br>
    * إذا كان A > B، طباعة "first".<br>
    * إذا كان B > A، طباعة "second".<br>
    * غير كذا بيكونون متساويين فبنطبع "draw".

## Solutions
  <ol type="1">
      	<li><a href="https://github.com/FatimaALzahrani/BUCPC/blob/main/H/H.cpp">c++</a></li>
        <li><a href="https://github.com/FatimaALzahrani/BUCPC/blob/main/H/H.java">java</a></li>
        <li><a href="https://github.com/FatimaALzahrani/BUCPC/blob/main/H/H.py">python</a></li>
      </ol>
