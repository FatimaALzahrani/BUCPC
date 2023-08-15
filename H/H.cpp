#include"bits/stdc++.h"

using namespace std;

signed main () {
    //تعريف متغيرات لتخزين نتائج الفريقين الأول والثاني
    int a, b;
   //السماح للمستخدم بادخال نتائج الفريقين
    cin >> a >> b;
    //قارن بين A و B: 
    // * إذا كان A > B، طباعة "first".
    // * إذا كان B > A، طباعة "second".
    // * غير كذا بيكونون متساويين فبنطبع "draw".
    cout << (a > b ? "first" : a < b ? "second" : "draw") << endl;
    //السطر اللي فوق مجرد اختصار للسطور الجايه
    /*
    if(a > b)
        cout<<"first";
    else if(a < b)
        cout<<"second";
    else
        cout<<"draw";
    */
}
