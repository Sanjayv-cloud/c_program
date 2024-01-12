1)) #include<iostream>
using namespace std;
int main()
{
float item1,item2,discount;
float total_amount,discount_price,amount_saved;
cin>>item1>>item2>>discount;
total_amount=item1+item2;
amount_saved = (total_amount)*(discount/100);
discount_price = (total_amount-amount_saved);
cout<<"Total Amount: "<<total_amount<<endl;
cout<<"Discount Price: "<<discount_price<<endl;
cout<<"Amount Saved: "<<amount_saved;
return 0;
}


--------------------------------------------------------------

2)) #include <iostream>
int main() {
int marks;
std::cin >> marks;
if (marks > 100 || marks < 0) {
std::cout << "Invalid marks. Please enter a valid score between 0 and 100.";
} else {
if (marks >= 95) {
std::cout << "Student Grade: A Grade\n";
} else if (marks >= 80) {
std::cout << "Student Grade: B Grade\n";
} else if (marks >= 60) {
std::cout << "Student Grade: C Grade\n";
} else if (marks >= 50) {
std::cout << "Student Grade: Just Pass\n";
} else {
std::cout << "Student Grade: Fail\n";
}
}
return 0;
}

--------------------------------------------------------------------

3)) #include <iostream>
// Abstract base class Shape
class Shape {
public:
virtual float calculateArea() const = 0;
virtual void display() const = 0;
virtual ~Shape() {}
};
// Derived class Circle
class Circle : public Shape {
private:
float radius;
public:
Circle(float r) : radius(r) {}
float calculateArea() const override {
return 3.14159f * radius * radius;
}
void display() const override {
std::cout << "Circle Area: " << calculateArea() << std::endl;
}
};
// Derived class Rectangle
class Rectangle : public Shape {
private:
float length, width;
public:
Rectangle(float l, float w) : length(l), width(w) {}
float calculateArea() const override {
return length * width;
}
void display() const override {
std::cout << "Rectangle Area: " << calculateArea() << std::endl;
}
};
class Triangle : public Shape {
private:
float base, height;
public:
Triangle(float b, float h) : base(b), height(h) {}
float calculateArea() const override {
return 0.5f * base * height;
}
void display() const override {
std::cout << "Triangle Area: " << calculateArea() << std::endl;
}
};
int main() {
float radius, length, width, base, height;

std::cin >> radius;
Circle circle(radius);
std::cin >> length >> width;
Rectangle rectangle(length, width);
std::cin >> base >> height;
Triangle triangle(base, height);
Shape* shapes[3] = {&circle, &rectangle, &triangle};
for (int i = 0; i < 3; ++i) {
shapes[i]->display();
}
return 0;
}


--------------------------------------------------------------

4)) #include <iostream>
int calculateSum(int N) {
int sum = 0;
for (int i = 1; i <= N; i++) {
sum += i;
}
return sum;
}
int main() {
int N;
std::cin >> N;
int result = calculateSum(N);
std::cout << "The sum of all numbers from 1 to " << N << " is: " << result;
return 0;
}

-----------------------------------------------------------------
5)) #include<iostream>
using namespace std;
int main(){
string a,b,c;
getline(cin,a);
getline(cin,b);
cout << "Letter Count: " << b.length();
}

-------------------------------------------

6) #include<iostream>
using namespace std;
int main(){
int n,max=0;
cin >> n;
int arr[n][n];
for(int i=0;i<n;i++){
for(int j=0;j<n;j++){
cin >> arr[i][j];
if (arr[i][j] < 20){
if (max < arr[i][j]){
max = arr[i][j];
}
}
}
}
cout << max;

}

------------------------------------------------------

7)) #include<iostream>
using namespace std;
class calender
{
private:
int a,b,c,d,e;
string s;
public:
calender(int a,int b,int c,int d,int e,string s)
{
this->a=a;
this->b=b;
this->c=c;
this->d=d;
this->e=e;
this->s=s;
}
void myfunc()
{
cout<<"Event Date: "<<a<<"/"<<b<<"/"<<c<<endl;
cout<<"Event Time: "<<d<<":"<<e<<endl;
cout<<"Description: "<<s;
}
};
int main()
{
int a,b,c,d,e;
string s;
cin>>a>>b>>c>>d>>e;
cin.ignore();
getline(cin,s);
calender cal(a,b,c,d,e,s);
cal.myfunc();
}

-----------------------------------------------------------

8)) #include <iostream>
using namespace std;
void swapUsingPointers(int* ptr1, int* ptr2) {
int temp = *ptr1;
*ptr1 = *ptr2;
*ptr2 = temp;
}
int main() {
int num1, num2;
cin >> num1;
cin >> num2;
cout << "Before swapping:" << endl;
cout << "First number: " << num1 << endl;
cout << "Second number: " << num2 << endl;
swapUsingPointers(&num1, &num2);
cout << "After swapping:" << endl;
cout << "First number: " << num1 << endl;
cout << "Second number: " << num2 << endl;
return 0;
}

---------------------------------------------------------

9)) #include <iostream>
#include <string>
int main() {
std::string input;

std::cin >> input;
bool isPalindrome = true;
for (int i = 0; i < input.length() / 2; i++) {
if (input[i] != input[input.length() - i - 1]) {
isPalindrome = false;
break;
}}
if (isPalindrome) {
std::cout << "The string is a palindrome" << std::endl;
} else {
std::cout << "The string is not a palindrome" << std::endl;
}
return 0;
}

------------------------------------------------------------------

10)) #include<iostream>
using namespace std;
int findPos(int pos)
{
static int x=1;
x=x*2;
if(pos>x)
{
return findPos(pos);
}
if(pos==x){return x;}
return x/2;
}
int main()
{
int num;
cin>>num;
cout<<findPos(num);

return 0;
}

-----------------------------------------------------------

11)) #include <iostream>
using namespace std;
class Accounts {
private:
int empId;
double salary, basic, allowances, deductions;
public:
Accounts(int empId) : empId(empId) {}
void setEmployeeInfo(double basic, double allowances, double deductions) {
this->basic = basic;
this->allowances = allowances;
this->deductions = deductions;
}
double calculateSalary() {
salary = basic + allowances - deductions;
return salary;
}
void display() {
salary = calculateSalary();
cout << "Employee: " << empId << endl;
cout << "Salary: " << salary << endl;
}
};
int main() {
int empId;
double basic, allowances, deductions;
cin >> empId;
cin >> basic;
cin >> allowances;
cin >> deductions;
Accounts acc(empId);
acc.setEmployeeInfo(basic, allowances, deductions);
acc.display();
return 0;
}

------------------------------------------------------------

12)) #include<iostream>
using namespace std;
class myClass{
private:
int n;
public:
myClass(int n){
this -> n = n;
}
friend int operator+(myClass &mc1 , myClass &mc2);
friend int operator-(myClass &mc1, myClass &mc2);
};
int operator+(myClass &mc1, myClass &mc2){
return mc1.n + mc2.n;
}
int operator-(myClass &mc1, myClass &mc2){
return mc1.n - mc2.n;
}
int main(){
int a,b,sum,diff;
cin >> a >> b;

myClass obj1(a);
myClass obj2(b);

sum = obj1 + obj2;
diff = obj1 - obj2;

cout << "Sum = " << sum<<"\n";
cout << "Difference = " << diff;
}

--------------------------------------------------------------

13)) #include <iostream>
class ToyCar {
private:
int wheels;
int bodies;
int figures;
public:
ToyCar(int w, int b, int f) : wheels(w), bodies(b), figures(f) {}
int maxCars() {
int max_wheels = wheels / 4;
int max_bodies = bodies;
int max_figures = figures / 2;
int min_value = max_wheels;
if (max_bodies < min_value) {
min_value = max_bodies;
}
if (max_figures < min_value) {
min_value = max_figures;
}
return min_value;
}
};
int main() {
int w, b, f;
std::cin >> w >> b >> f;
ToyCar car(w, b, f);
std::cout << "Max cars that can be built: " << car.maxCars() << std::endl;
return 0;
}

-----------------------------------------------------------------------

14)) #include <iostream>
class FloatPair {
private:
float x;
float y;
public:
FloatPair(float val1 = 0.0f, float val2 = 0.0f) : x(val1), y(val2) {}
friend float product(const FloatPair& obj1, const FloatPair& obj2);
};
float product(const FloatPair& obj1, const FloatPair& obj2) {
return obj1.x * obj1.y * obj2.x * obj2.y;
}
int main() {
float val1, val2, val3, val4;
std::cin >> val1 >> val2 >> val3 >> val4;
FloatPair obj1(val1, val2);
FloatPair obj2(val3, val4);
float result = product(obj1, obj2);
std::cout << "Product of the private attributes of the two objects: " << result << std::endl;
return 0;
}

------------------------------------------------------------------

15)) #include <iostream>
class Parent {
public:
Parent(int a, int b) : a(a), b(b) {}
void add() const {
std::cout << a + b << std::endl;
}
protected:
int a, b;
};
class Child1 : public Parent {
public:
Child1(int a, int b) : Parent(a, b) {}
void sub() const {
std::cout << a - b << std::endl;
}
};
class Child2 : public Parent {
public:
Child2(int a, int b) : Parent(a, b) {}
void mul() const {
std::cout << a * b << std::endl;
}
};
int main() {
int a, b;
std::cin >> a;
std::cin >> b;
Child1 ob1(a, b);
Child2 ob2(a, b);
ob1.add();
ob1.sub();
// ob2.add();
ob2.mul();
return 0;
}

----------------------------------------------------------------

16)) #include<iostream>
using namespace std;
int main(){
int n;
cin >> n;
int arr[n][n];
float res = true;

for(int i=0;i<n;i++){
for(int j=0;j<n;j++){
cin >> arr[i][j];
}
}

//Initial Value
int tot = 0;
for(int i=0;i<1;i++){
for(int j=0;j<n;j++){
tot += arr[i][j];
}
}

//Row check
for(int i=0;i<n;i++){
int row = 0;
for(int j=0;j<n;j++){
row += arr[i][j];
}if (row != tot){
res = false;
break;
}
}

//Col check
for(int i=0;i<n;i++){
int row = 0;
for(int j=0;j<n;j++){
row += arr[j][i];
}if (row != tot){
res = false;
break;
}
}

// diagnoal check
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

------------------------------------------------------------

17)) #include <iostream>
class Account {
public:
virtual void deposit(double amount) = 0;
virtual void withdraw(double amount) = 0;
virtual double getBalance() const = 0;
virtual ~Account() {}
};
class SavingsAccount : public Account {
private:
double balance;
public:
SavingsAccount(double initialBalance) : balance(initialBalance) {}
void deposit(double amount) override {
balance += amount;
}
void withdraw(double amount) override {
if (amount <= balance) {
balance -= amount;
} else {
std::cout << "Insufficient funds." << std::endl;
}
}
double getBalance() const override {
return balance;
}
};
int main() {
double initialBalance;
std::cin >> initialBalance;
SavingsAccount savings(initialBalance);
double depositAmount, withdrawAmount;
std::cin >> depositAmount;
savings.deposit(depositAmount);
std::cout << "Balance after deposit: " << savings.getBalance() << std::endl;
std::cin >> withdrawAmount;
savings.withdraw(withdrawAmount);
std::cout << "Balance after withdrawal: " << savings.getBalance() << std::endl;
return 0;
}

------------------------------------------------------------

18)) #include<iostream>
using namespace std;
class myClass{
private:
int n;
public:
myClass(int n){
this -> n = n;
}
friend int operator+(myClass &mc1 , myClass &mc2);
friend int operator-(myClass &mc1, myClass &mc2);
};
int operator+(myClass &mc1, myClass &mc2){
return mc1.n + mc2.n;
}
int operator-(myClass &mc1, myClass &mc2){
return mc1.n - mc2.n;
}
int main(){
int a,b,sum,diff;
cin >> a >> b;

myClass obj1(a);
myClass obj2(b);

sum = obj1 + obj2;
diff = obj1 - obj2;

cout << "Sum = " << sum<<"\n";
cout << "Difference = " << diff;
}

-----------------------------------------------------------------

19)) #include<iostream>
#include <vector>
int main () {
std::vector<int> numbers;
int num;
while (true) {
std::cin >> num;
if (num < 0) {
break;
}
numbers.push_back(num);
}
if (!numbers.empty()) {
int sum = 0;
for (int n : numbers) {
sum += n;
}
double average = static_cast<double>(sum) / numbers.size();
std::cout << "Sum: " << sum << std::endl;
std::cout << "Average: " << average << std::endl;
} else {
std::cout << "No positive integers entered." << std::endl;
}
return 0;
}

-------------------------------------------------------------------------

20)) #include <iostream>
#include <vector>
template <typename Iterator>
int accumulate(Iterator begin, Iterator end) {
using ValueType = typename std::iterator_traits<Iterator>::value_type;
ValueType sum = ValueType(); // Initialize sum with the default value
for (Iterator it = begin; it != end; ++it) {
sum += *it;
}
return sum;
}
int main() {
int n;
std::cin >> n;
std::vector<int> vec(n);
for (int i = 0; i < n; ++i) {
std::cin >> vec[i];
}
auto sum = accumulate(vec.begin(), vec.end());
std::cout << "Accumulated sum: " << sum << std::endl;
return 0;
}