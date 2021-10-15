#include "../std_lib_facilities.h"

int main()
{ 
try{
        //(1) Cout << "Success!\n"; 
        cout << " (1) Success!\n"; 
        //(2) cout << "Success!\n; 
        cout << " (2) Success!\n";
        //(3) cout << "Success" <<" !\n" 
        cout << " (3) Success!\n"; 
        //(4) cout << success << '\n';  
        cout << " (4) Success!" << "\n";
        //(5) string res = 7; vector<int> v(10); v[5] = res; cout << "Success!\n"; 
        int res = 7; vector<int> v(10); v[5] = res; cout << " (5) Success!\n";
        //(6) vector<int> v(10); v(5) = 7; if (v(5)!=7) cout << "Success!\n";
        vector<int> v2(10); v2[5] = 7; if (v2[5]!=7) cout << " (6) Success!\n";
        //(7) if (cond) cout << "Success!\n"; else cout << "Fail!\n";
        if (5!=3) cout << " (7) Success!\n"; else cout << "Fail!\n";
        //(8) bool c = false; if (c) cout << "Success!\n"; else cout << "Fail!\n";
        bool c = false; if (c!=true) cout << " (8) Success!\n"; else cout << "Fail!\n";
        //(9) string s = "ape"; boo c = "fool"<s; if (c) cout << "Success!\n";
        string s = "ape"; bool c2 = "fool"<s; if (!c2) cout << " (9) Success!\n";
        //(10) string s = "ape"; if (s=="fool") cout << "Success!\n";
        string s2 = "ape"; if (s2!="fool") cout << " (10) Success!\n";
        //(11) string s = "ape"; if (s=="fool") cout < "Success!\n";
        string s3 = "ape"; if (s3!="fool") cout << " (11) Success!\n";
        //(12) string s = "ape"; if (s+"fool") cout < "Success!\n";
        string s4 = "ape"; if (s4!="fool") cout << " (12) Success!\n";
        //(13) vector<char> v(5); for (int i=0; 0<v.size(); ++i) ; cout << "Success!\n";
        vector<char> v3(5); for (int i=0; i<v3.size(); ++i); cout << " (13) Success!\n";
        //(14) vector<char> v(5); for (int i=0; i<=v.size(); ++i) ; cout << "Success!\n";
        vector<char> v4(5); for (int i=0; i<=v4.size(); ++i); cout << " (14) Success!\n";
        //(15) string s = "Success!\n"; for (int i=0; i<6; ++i) cout << s[i];
        string s5 = " (15) Success!\n"; for (int i=0; i<6; ++i); cout << s5;
        //(16) if (true) then cout << "Success!\n"; else cout << "Fail!\n";
        if (true) cout << " (16) Success!\n"; else cout << "Fail!\n";
        //(17) int x = 2000; char c = x; if (c==2000) cout << "Success!\n";
        int x = 2000; int c3 = x; if (c3==2000) cout << " (17) Success!\n";
        //(18) string s = "Success!\n"; for (int i=0; i<10; ++i) cout << s[i];
        string s6 = " (18) Success!\n"; for (int i=0; i<1; ++i) cout << s6;
        //(19) vector v(5); for (int i=0; i<=v.size(); ++i) ; cout << "Success!\n";
        vector<int> v5(5); for (int i=0; i<=v5.size(); ++i); cout<< " (19) Success!\n";
        //(20) int i=0; int j = 9; while (i<10) ++j; if (j<i) cout << "Success!\n";
        int i=0; int j=9; while(i<10) ++i; if (j<=i) cout << " (20) Success!\n";
        //(21) int x = 2; double d = 5/(x–2); if (d==2*x+0.5) cout << "Success!\n";
        int x2=2; double d=5/(x2-1); if(d==2*x2+1) cout << " (21) Success!\n";
        //(22) string<char> s = "Success!\n"; for (int i=0; i<=10; ++i) cout << s[i];
        string s7=" (22) Succes!\n"; for(int i=0; i<=10; ++i); cout << s7;
        //(23) int i=0; while (i<10) ++j; if (j<i) cout << "Success!\n";
        int i2=0; int j2=0; while(i2<10) ++i2; if(i2>j2) cout << " (23) Success!\n";
        //(24) int x = 4; double d = 5/(x–2); if (d=2*x+0.5) cout << "Success!\n";
        int x3=4; double d2=5/(x3-3); if(d2=2*x3/1+1) cout << " (24) Success!\n";
        //(25) cin << "Success!\n";
        cout << " (25) Success!\n";



   
    return 0;

    }

catch (exception& e) {
    cerr << "error: " << e.what() << '\n';
    keep_window_open();
    return 1;
    }

catch (...) {
    cerr << "Oops: unknown exception!\n";
    keep_window_open();
    return 2;
    }
}
