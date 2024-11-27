#include<iostream>
using namespace std;
int main() {
int age ,a;
cout <<"chand sal dary?";
cin >> age;
cout << "age osve bashgah moshtryan hasti benevis 1 vagarna benevis 2:";
cin >> a;
if(age<12)
 cout <<"10 toman";
  else if((age>12 ) && (age<18) &&(a ==1))
     cout << "12 toman";
     else if((age>12 ) && (age<18) &&(a ==2))
       cout<<"15 toman";
       else if ((age>18 ) && (age<60) &&(a ==1))
         cout <<"20 toman";
         else if ((age>12 ) && (age<60) &&(a ==2))
            cout << "25 toman";
            else
            cout<< "10 toman";
            return 0;
}