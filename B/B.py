#بنسمح للمستخدم يدخل عدد يمثل عدد حالات الاختبار ونخزنه بالمتغير تي
T = int(input())
# بنعيد الخطوات الاتيه لكل تست كيس 
for _ in range(T):
    #بنسمح للمستخدم يدخل عددين
    a, b = map(int, input().split())
    #بنطبع طرح العدد الثاني من الاول لحساب الربح
    print(b - a)
