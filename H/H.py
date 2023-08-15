# نعرف متغيرات تمثل درجات الفرق ونخلي المستخدم يدخلهم
a=int(input())
b=int(input())
# قارن بين A و B: 
#     * إذا كان A > B، طباعة "first".
if a>b:
    print("first")
#     * إذا كان B > A، طباعة "second".
elif a < b:
    print("second")
#     * غير كذا بيكونون متساويين فبنطبع "draw".
else: 
    print("draw")