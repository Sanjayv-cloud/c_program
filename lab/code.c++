SET 1 
 
a.

#include<bits/stdc++.h> 
using namespace std; 
int main() 
{ 
float item1,item2,discountpercent; 
cin>>item1>>item2>>discountpercent; 
float total=item1+item2; 
float saved=total*(discountpercent/100); 
float dis=total-saved; 
cout<<"Total Amount: "<<total<<endl; 
cout<<"Discount Price: "<<dis<<endl; 
cout<<"Amount Saved: "<<saved; 
} 
 
b.
 
#include<bits/stdc++.h> 
using namespace std; 
 
class Accounts{ 
private: 
int employeeid; 
float salary,allowance,deduction; 
public: 
Accounts(int id,float s,float a,float d) : employeeid(id),salary(s), 
allowance(a),deduction(d){} 
 
float total(){ 
return salary+allowance-deduction; 
} 
void display() 
{ 
cout<<"Employee: "<<employeeid<<endl; 
cout<<"Salary: "<<total()<<endl; 
} 
}; 
int main() 
{ 
int employeeid; 
float salary,allowance,deduction; 
cin>>employeeid>>salary>>allowance>>deduction; 
Accounts acc(employeeid,salary,allowance,deduction); 
acc.display(); 
} 
----------------------------------------------------------- 
SET 2 
 
a.
#include<bits/stdc++.h> 
using namespace std; 
int main() 
{ 
int n; 
cin>>n; 
if(n>100 || n<0) 
{ 
cout<<"Invalid marks. Please enter a valid score between 0 and 100."; 
} 
else if(n>=95) 
{ 
cout<<"Student Grade: A Grade"; 
} 
else if(n>=80) 
{ 
cout<<"Student Grade: B Grade"; 
} 
else if(n>=60) 
{ 
cout<<"Student Grade: C Grade"; 
} 
else if(n>=50) 
{ 
cout<<"Student Grade: Just Pass"; 
} 
else 
{ 
cout<<"Student Grade: Fail"; 
} 
} 
 
 b.

#include<bits/stdc++.h> 
using namespace std; 
 
class Calculate{ 
private: 
int num1,num2; 
public: 
Calculate() : num1(0),num2(0){} 
int input(){ 
cin>>num1; 
cin>>num2; 
return 1; 
} 
void display(){ 
cout<<"Sum = "<<num1+num2<<endl;; 
cout<<"Difference = "<<num1-num2; 
} 
Calculate operator+(Calculate& other) 
{ 
Calculate result; 
result.num1=this->num1+other.num1; 
result.num2=this->num2+other.num2; 
return result; 
} 
Calculate operator-(Calculate& other) 
{ 
Calculate result; 
result.num1=this->num1-other.num1; 
result.num2=this->num2-other.num2; 
return result; 
} 
}; 
int main() 
{ 
Calculate calc1,calc2; 
calc1.input(); 
calc2.input(); 
Calculate sum=calc1+calc2; 
sum.display(); 
 
} 
 
-------------------------------------------------- 
SET 3 
 
a.
#include<bits/stdc++.h> 
using namespace std; 
 
class Shape{ 
public: 
virtual float calculateArea()const=0; 
virtual void display() const=0; 
virtual ~Shape(){} 
}; 
class Circle : public Shape{ 
private: 
float radius; 
public: 
Circle(float r) : radius(r){} 
float calculateArea() const override{ 
return 3.14159f*radius*radius; 
} 
void display() const override{ 
cout<<"Circle Area: "<<calculateArea()<<endl; 
} 
}; 
class Rectangle : public Shape{ 
private: 
float length,width; 
public: 
Rectangle(float l,float w) : length(l),width(w){} 
float calculateArea() const override{ 
return length*width; 
} 
void display() const override{ 
cout<<"Rectangle Area: "<<calculateArea()<<endl; 
} 
}; 
class Triangle : public Shape{ 
private: 
float base,height; 
public: 
Triangle(float b,float h) : base(b),height(h){} 
float calculateArea() const override{ 
return 0.5f*base*height; 
} 
void display() const override{ 
cout<<"Triangle Area: "<<calculateArea()<<endl; 
} 
}; 
int main() 
{ 
float radius,length,width,base,height; 
cin>>radius; 
Circle circle(radius); 
cin>>length>>width; 
Rectangle rectangle(length,width); 
cin>>base>>height; 
Triangle triangle(base,height); 
 
Shape* shape[3]={&circle,&rectangle,&triangle}; 
for(int i=0;i<3;i++) 
{ 
shape[i]->display(); 
} 
} 
 
 b.
 
#include<bits/stdc++.h> 
using namespace std; 
int main() 
{ 
int w,b,f; 
cin>>w>>b>>f; 
int wheel=w/4; 
int body=b; 
int figure=f; 
 
int smallest=wheel; 
if(body<wheel) 
{ 
cout<<"Max cars that can be built: "<<body; 
} 
if(figure<wheel) 
{ 
cout<<"Max cars that can be built: "<<figure; 
} 
else 
{ 
cout<<"Max cars that can be built: "<<wheel; 
} 
} 
 
------------------------------------------------------- 
SET 4 
 
a.
#include<bits/stdc++.h> 
using namespace std; 
 
int add(int n) 
{ 
int sum=0; 
for(int i=1;i<=n;i++) 
{ 
sum+=i; 
} 
return sum; 
} 
int main() 
{ 
int num; 
cin>>num; 
int result=add(num); 
cout<<"The sum of all numbers from 1 to "<<num<<" is: "<<result; 
} 
 
 b.

#include<bits/stdc++.h> 
using namespace std; 
class Floatpair{ 
private: 
float x,y; 
public: 
Floatpair(float _x,float _y) : x(_x),y(_y){} 
friend float product(const Floatpair & fp1,const Floatpair& fp2); 
}; 
float product(const Floatpair & fp1,const Floatpair& fp2){ 
return fp1.x*fp2.x*fp1.y*fp2.y; 
} 
int main() 
{ 
float x1,y1,x2,y2; 
cin>>x1>>y1>>x2>>y2; 
Floatpair pair1(x1,y1); 
Floatpair pair2(x2,y2); 
float result=product(pair1,pair2); 
cout<<"Product of the private attributes of the two objects: "<<result; 
} 
 
-------------------------------------------------------------------------
SET 5 
 
a.

--------
 
b. 
 
#include<bits/stdc++.h> 
using namespace std; 
 
class Parent{ 
public: 
int add(int a,int b){ 
return a+b; 
} 
}; 
 
class Child1 :public Parent{ 
public: 
int sub(int a,int b){ 
return a-b; 
} 
}; 
class Child2 :public Parent{ 
public: 
int mul(int a,int b){ 
return a*b; 
} 
}; 
int main() 
{ 
int num1,num2; 
cin>>num1>>num2; 
 
Child1 one; 
Child2 two; 
 
cout<<one.add(num1,num2)<<endl; 
cout<<one.sub(num1,num2)<<endl; 
cout<<two.mul(num1,num2); 
} 
 -----------------------------------------------------------
SET 6 
 
 a.

#include<bits/stdc++.h> 
using namespace std; 
int main() 
{ 
int n,i,j,k=0; 
cin>>n; 
int a[n][n]; 
for(i=0;i<n;i++) 
{ 
for(j=0;j<n;j++) 
{ 
cin>>a[i][j]; 
if(k<a[i][j] && a[i][j]<20) 
{ 
k=a[i][j]; 
} 
} 
} 
cout<<k; 
} 
 
 b.
 
#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n][n];
    float res = true;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >>  arr[i][j];
        }
    }
    
    int tot = 0;
    for(int i=0;i<1;i++){
        for(int j=0;j<n;j++){
            tot += arr[i][j];
        }
    }
    
    for(int i=0;i<n;i++){
        int row = 0;
        for(int j=0;j<n;j++){
            row += arr[i][j];
            }if (row != tot){
                res = false;
                break;
        }
    }
    
    for(int i=0;i<n;i++){
        int row = 0;
        for(int j=0;j<n;j++){
            row += arr[j][i];
            }if (row != tot){
                res = false;
                break;
        }
    }
    
    int row = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if (i==j){
                row += arr[i][j];
            }
            }
        }if (row != tot){
                res = false;
    }
    
    if(res){
        cout << "The matrix is a magic square.";
    }
    else{
        cout << "The matrix is not a magic square.";
    }
        }
 ----------------------------------------------------------------------
 
SET 7 
 
a.
 
#include <iostream> 
using namespace std; 
class A 
{ 
public: 
void answer(int a, int b, int c, int d, int e, string f) 
{ 
cout<<"Event Date:"<<a<<"/"<<b<<"/"<<c<<endl; 
cout<<"Event Time: "<<d<<":"<<e<<endl; 
cout<<"Description: "<<f<<endl; 
} 
}; 
int main() 
{ 
int a,b,c,d,e; 
string f; 
cin>>a>>b>>c>>d>>e; 
cin.ignore(); 
getline(cin,f); 
A obj; 
obj.answer(a,b,c,d,e,f); 
return 0; 
} 
 
 b.
 
#include<bits/stdc++.h> 
using namespace std; 
 
class Account{ 
private: 
float balance; 
float deposit,withdrawal; 
public: 
Account(float b,float d,float w) : balance(b),deposit(d),withdrawal(w){} 
 
float calculatedeposit(){ 
return balance+deposit; 
} 
float calwithdraw() 
{ 
return calculatedeposit()-withdrawal; 
} 
void display() 
{ 
cout<<"Balance after deposit: "<<calculatedeposit()<<endl; 
cout<<"Balance after withdrawal: "<<calwithdraw(); 
} 
}; 
int main() 
{ 
float balance; 
float deposit,withdrawal; 
cin>>balance>>deposit>>withdrawal; 
Account acc(balance,deposit,withdrawal); 
acc.display(); 
} 
 
------------------------------------------------------------ 
SET 8 
 
a.

#include<bits/stdc++.h> 
using namespace std; 
 
int swap(int* ptr1,int* ptr2) 
{ 
int temp = *ptr1; 
*ptr1=*ptr2; 
*ptr2=temp; 
return 1; 
} 
int main() 
{ 
int num1,num2; 
cin>>num1>>num2; 
cout<<"Before swapping:"<<endl; 
cout<<"First number: "<<num1<<endl; 
cout<<"Second number: "<<num2<<endl; 
swap(&num1,&num2); 
cout<<"After swapping:"<<endl; 
cout<<"First number: "<<num1<<endl; 
cout<<"Second number: "<<num2<<endl; 
} 
 
b. 
 
#include<bits/stdc++.h> 
using namespace std; 
int main() 
{ 
int num,den; 
cin>>num>>den; 
 
try{ 
if(den==0) 
{ 
throw runtime_error("Division by zero is not allowed."); 
} 
int result=num/den; 
cout<<"Result of division: "<<result<<endl; 
} 
catch(const runtime_error& e) 
{ 
cout<<"Error: "<<e.what()<<endl; 
} 
cout<<"Program finished execution."; 
} 
 
------------------------------------------------------------ 
SET 9 
 
a.

#include<bits/stdc++.h> 
using namespace std; 
int main() 
{ 
string input; 
cin>>input; 
bool pal=true; 
for(int i=0;i<input.length()/2;i++) 
{ 
if(input[i] !=input[input.length()-i-1]) 
{ 
pal=false; 
break; 
} 
} 
if(pal) 
{ 
cout<<"The string is a palindrome"; 
} 
else 
{ 
cout<<"The string is not a palindrome"; 
} 
} 
 
 b.
 
#include<iostream> 
#include<vector> 
using namespace std; 
int main() 
{ 
vector<int> numbers; 
int num; 
while(true){ 
cin>>num; 
if(num<0) 
{ 
break; 
} 
numbers.push_back(num); 
} 
if(!numbers.size()==0) 
{ 
int sum=0; 
for(int n : numbers) 
{ 
sum+=n; 
} 
cout<<"Sum: "<<sum<<endl; 
float average=static_cast<double>(sum)/numbers.size(); 
cout<<"Average: "<<average; 
} 
else{ 
cout<<"No positive integers entered."; 
} 
} 
 ---------------------------------------------------------------
SET 10 
 
a.
 
#include<bits/stdc++.h> 
using namespace std; 
 
int power(int n) 
{ 
int powe=0; 
while(pow(2,powe)<=n) 
{ 
powe++; 
} 
return pow(2,powe-1); 
} 
int main() 
{ 
int num; 
cin>>num; 
int result=power(num); 
cout<<result; 
} 
 
 
b.
 
#include<iostream> 
#include<vector> 
using namespace std; 
template<typename Iterator> 
int accumulate(Iterator begin,Iterator end){ 
using ValueType = typename iterator_traits<Iterator>::value_type; 
ValueType sum = ValueType(); 
for(Iterator it = begin; it != end;++it){ 
sum += *it; 
} 
return sum; 
} 
int main() 
{ 
int n; 
cin>>n; 
vector<int> vec(n); 
for(int i=0;i<n;++i){ 
cin>>vec[i]; 
} 
auto sum = accumulate(vec.begin(), vec.end()); 
cout<<"Accumulated sum: "<<sum<<endl; 
return 0; 
}
