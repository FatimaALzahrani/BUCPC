#include <iostream>
#include <stack>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    //نعرف متغير يمثل حالات الاختبار
    int T;
    //بنسمح للمستخدم يدخل عدد يمثل عدد حالات الاختبار
    cin >> T;
    //بنعيد الخطوات الاتيه لكل تست كيس 
    while (T--) {
       //بنسمح له يدخل عددين
        int a,b;
        cin>>a>>b;
        //بنطبع حال طرح العدد الثاني من الاول لحساب قيمة الربح
        cout<<b-a;
    }
    return 0;
}
