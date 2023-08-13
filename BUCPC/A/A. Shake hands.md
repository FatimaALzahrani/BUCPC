# Table of conent :
    * [Problem](#Discription)
    * [Input](#Discription)
    * [Output](#Discription)
    * [Examples](#Discription)
    * [Explain in Arabic](#Explain_in_Arabic)
    * [Solutions](#Solutions)

## Discription
The Google Club for developer students at Al-Baha University (GCDBU) holding a competition for competitive programming (BUCPC). This would not have been possible without the amazing efforts of GCDBU member and the College of Computer Science and Information Technology, especially Dr. Nizar Al-Sharif and Dr. Maha Al-Omari . Al baha University has been going above and beyond in investing into youth and technology. Fatima, the winner of the first BUCPC contest, wonders how many hands she will shake while getting her medal. Fatima will shake hands with all the judging committee on the stage. Fatima knows that in a group of N people, the total number of different possible handshakes (i.e., everyone shakes hands with everyone) is $(N⋅(N-1))/2$, but Fatima only cares about the number of different people she will shake hands with. Can you help Fatima answer this question?

## Input
You will be given one integer N $(2≤N≤100)$, the number of people on the stage (Fatima and all the judges).

## Output
Print one integer, the number of people Fatima will handshake.

## Examples
|standard input|standard output|
|:---:|:---:|
|2|1|
|5|4|

## Explain_in_Arabic
قام نادي قوقل بمسابقة البرمجة التنافسية لجامعة الباحة بمساعدة د.نزار ود.مها , فازت الطالبة فاطمة وتسائلت عن عدد الايادي (الناس) اللي بتصافحهم أثناء حصولها على ميداليتها مع العلم انها بتصافح جميع أعضاء لجنة التحكيم على المنصة.
المدخلات : بتكون عدد الناس على المسرح (فاطمة وأعضاء لجنة التحكيم) وبيكون العدد اكثر من 2 واقل من 100 فعادي نستخدم نوع بيانات صغير (int , byte) 
المخرجات : عدد الناس اللي بتصافحهم فاطمة
الحل : عدد الناس على المسرح (n) ناقص 1 , والسبب ان فاطمة بتصافح جميع الناس في المسرح عدا نفسها