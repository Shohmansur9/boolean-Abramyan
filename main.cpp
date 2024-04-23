#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#define speed ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int main()
{
//    setlocale(LC_ALL, "RUSSIAN");
    /// #1
//    int n;
//    cin >> n;
//    bool alfa = (n > 0);
//    cout << boolalpha << alfa;

    /// #2
//    int n; cin >> n;
//    bool alfa = ( n % 2 == 0);
//    cout << boolalpha << alfa;

    /// #3
//    int n; cin >> n;
//    bool alfa = (n % 2);
//    cout << boolalpha << alfa;

    /// #4
//    int a,b;
//    cin >> a >> b;
//    bool alfa = (a > 2 && b <= 3);
//    cout << boolalpha << alfa;

    /// #5
//    int a,b;
//    cin >> a >> b;
//    bool alfa = (a >= 0 && b < -2);
//    cout << boolalpha << alfa;

    /// #6
//    int a,b,c;
//    cin >> a >> b >> c;
//    bool alfa = (a < b && b < c);
//    cout << boolalpha << alfa;

    /// #7
//    int a,b,c;
//    cin >> a >> b >> c;
//    bool alfa = (b < a && b > c || b > a && b < c);
//    cout << boolalpha << alfa;

    /// #8
//    int a,b;
//    cin >> a >> b;
//    bool alfa = (a % 2 && b % 2);
//    cout << boolalpha << alfa;

    /// #9
//    int a,b;
//    cin >> a >> b;
//    bool alfa = (a % 2 || b % 2);
//    cout << boolalpha << alfa;

    /// #10
//    int a,b;
//    cin >> a >> b;
//    bool alfa = (a % 2 && b % 2 == 0 || a % 2 == 0 && b % 2);
//    cout << boolalpha << alfa;

    /// #11
//    int a,b;
//    cin >> a >> b;
//    bool alfa = (a % 2 == 0 && b % 2 == 0 || a % 2 && b % 2);
//    cout << boolalpha << alfa;

    /// #12
//    int a,b,c;
//    cin >> a >> b >> c;
//    bool alfa = (a > 0 && b > 0 && c > 0);
//    cout << boolalpha << alfa;

    /// #13
//    int a,b,c;
//    cin >> a >> b >> c;
//    bool alfa = (a > 0 || b > 0 || c > 0);
//    cout << boolalpha << alfa;

    /// #14
//    int a,b,c;
//    cin >> a >> b >> c;
//    bool alfa = (a>0 && b<=0 && c<=0  ||  a<=0 && b>0 && c<=0  || a<=0 && b<=0 && c>0);
//    cout << boolalpha << alfa;

    /// #15
//    int a,b,c;
//    cin >> a >> b >> c;
//    bool alfa = (a>0 && b>0 && c<=0  ||  a<=0 && b<=0 && c>0  || a<=0 && b>0 && c>0);
//    cout << boolalpha << alfa;

    /// #16
//    int n;
//    cin >> n;
//    bool alfa = (n % 2 == 0 && n > 9 && n < 100);
//    cout << boolalpha << alfa;

    /// #17
//    int n;
//    cin >> n;
//    bool alfa = (n % 2 && n > 99 && n < 1000);
//    cout << boolalpha << alfa;

    /// #18
//    int a,b,c;
//    cin >> a >> b >> c;
//    bool alfa = (a == b || a == c || b == c);
//    cout << boolalpha << alfa;

    /// #19
//    int a,b,c;
//    cin >> a >> b >> c;
//    bool alfa = (a == -1*b || a == -1*c || b == -1*c);
//    cout << boolalpha << alfa;

    /// #20
//    int n;
//    cin >> n;
//    int a = n % 10;
//    int b = n / 10 % 10;
//    int c = n / 100;
//    bool alfa = (a != b && a != c && b != c);
//    cout << boolalpha << alfa;

    /// #21
//    int n;
//    cin >> n;
//    int a = n % 10;
//    int b = n / 10 % 10;
//    int c = n / 100;
//    bool alfa = (a > b && b > c);
//    cout << boolalpha << alfa;

    /// #22
//    int n;
//    cin >> n;
//    int a = n % 10;
//    int b = n / 10 % 10;
//    int c = n / 100;
//    bool alfa = (a > b && b > c || a < b && b < c);
//    cout << boolalpha << alfa;

    /// #23
//    int n;
//    cin >> n;
//    int a = n % 10;
//    int b = n / 10 % 10;
//    int c = n / 100 % 10;
//    int d = n / 1000 ;
//    bool alfa = (a == d && b == c);
//    cout << boolalpha << alfa;

    /// #24
//    int a,b,c;
//    cin >> a >> b >> c;
//    bool alfa = ((pow(b,2)-4*a*c) >= 0);
//    cout << boolalpha << alfa;

    /// #25
//    int x,y;
//    cin >> x >> y;
//    bool alfa = (x < 0 && y > 0);
//    cout << boolalpha << alfa;

    /// #26
//    int x,y;
//    cin >> x >> y;
//    bool alfa = (x > 0 && y < 0);
//    cout << boolalpha << alfa;

    /// #27
//    int x,y;
//    cin >> x >> y;
//    bool alfa = (x < 0 && y > 0 || x < 0 && y < 0);
//    cout << boolalpha << alfa;

    /// #28
//    int x,y;
//    cin >> x >> y;
//    bool alfa = (x > 0 && y > 0 || x < 0 && y < 0);
//    cout << boolalpha << alfa;

    /// #29
//    int x,y,x1,y1,x2,y2;
//    cin >> x >> y >> x1 >> y1 >> x2 >> y2;
//    bool alfa = (x1 < x && y1 > y && x2 > x && y2 < y);
//    cout << boolalpha << alfa;

    /// #30
//    int a,b,c;
//    cin >> a >> b >> c;
//    bool alfa = (a == b && a == c && b == c);
//    cout << boolalpha << alfa;

    /// #31
//    int a,b,c;
//    cin >> a >> b >> c;
//    bool alfa = (a == b || a == c || b == c);
//    cout << boolalpha << alfa;

    /// #32
//    int a,b,c;
//    cin >> a >> b >> c;
//    bool alfa = ( pow(a,2) == pow(b,2) + pow(c,2)
//                 || pow(b,2) == pow(a,2) + pow(c,2)
//                 || pow(c,2) == pow(b,2) + pow(a,2));
//    cout << boolalpha << alfa;

    /// #33
//    int a,b,c;
//    cin >> a >> b >> c;
//    bool alfa = (a+b>c && a+c>b && b+c>a);
//    cout << boolalpha << alfa;

    /// #34
//    int x,y;
//    cin >> x >> y;
//    bool alfa = ((x + y) % 2);
//    cout << boolalpha << alfa;

    /// #35
//    int x1,y1,x2,y2;
//    cin >> x1 >> y1 >> x2 >> y2;
//    bool alfa = ((x1+y1) % 2 == (x2+y2) % 2);
//    cout << boolalpha << alfa;

    /// #36
//    int x1,y1,x2,y2;
//    cin >> x1 >> y1 >> x2 >> y2;
//    bool alfa = (x1 == x2 || y1 == y2);
//    cout << boolalpha << alfa;

    /// #37
//    int x1,y1,x2,y2;
//    cin >> x1 >> y1 >> x2 >> y2;
//    bool alfa = ( abs(x1-y1)<=1 && abs(x2-y2)<=1);
//    cout << boolalpha << alfa;

    /// #38
//    int x1,y1,x2,y2;
//    cin >> x1 >> y1 >> x2 >> y2;
//    bool alfa = ( abs(x1-x2) == abs(y1-y2));
//    cout << boolalpha << alfa;

    /// #39
//    int x1,y1,x2,y2;
//    cin >> x1 >> y1 >> x2 >> y2;
//    bool alfa = ( abs(x1-x2) == abs(y1-y2) || x1==x2 || y1==y2);
//    cout << boolalpha << alfa;

    /// #40
//    int x1,x2,y1,y2;
//    cin >> x1 >> y1 >> x2 >> y2;
//    bool alfa = ( abs(x1-x2)==1 && abs(y1-y2)==2 || abs(x1-x2)==2 && abs(y1-y2)==1);
//    cout << boolalpha << alfa;

}
