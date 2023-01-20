># C++ Basics
# FlowChart
* Start/End - Oval
* Input/Output - Parallelogram
* Process - Rectangle
* Decisions - Diamond

# Basic Program
```cpp
#include <iostream>
using namespace std;

int main(){
  cout << "Hello World" << endl;
  // or
  cout << "Hello World" << "\n";
   // or
  cout << "Hello World\n" ;  
  // or
  cout << "Hello World" ;
  cout << endl;
  // or
  cout << "Hello World" ;
  cout << "\n";
}
```

# Type Casting
1. Implicit Conversion
* Also known as ‘automatic type conversion’. Done by the compiler on its own, without any external trigger from the user.
* Generally takes place when in an expression more than one data type is present. In such condition type conversion (type promotion) takes place to avoid lose of data.
* All the data types of the variables are upgraded to the data type of the variable with largest data type.
* bool -> char -> short int -> int -> 
* unsigned int -> long -> unsigned -> 
* long long -> float -> double -> long double
```cpp
	int x = 10; // integer x
	char y = 'a'; // character c

	// y implicitly converted to int. ASCII
	// value of 'a' is 97
	x = x + y;

	// x is implicitly converted to float
	float z = x + 1.0;

	cout << "x = " << x << endl /// 107
		<< "y = " << y << endl /// a
		<< "z = " << z << endl; /// 108

	return 0;
}
```
* It is possible for implicit conversions to lose information, signs can be lost (when signed is implicitly converted to unsigned), and overflow can occur (when long long is implicitly converted to float).
```cpp
! Important

char ch = 123456;
cout<< ch; /// @

// Here from 4 slots of int - last 1 slot from right - comes in to store char - lastslot boolean of 123456 ~ @'s ASCII'
```
2. Explicit Expression
*  This is done by explicitly defining the required type in front of the expression in parenthesis. This can be also considered as forceful casting.
```cppp
    double x = 1.2;
    // Explicit conversion from double to int
    int sum = (int)x + 1;
    cout << "Sum = " << sum;
  
    return 0;
}
```
# Data Types
* 32 bits memory
1. int - 4byte - 32bits
2. char - 1byte - 8bits
3. float - 8byte
4. double - 8bytes
5. bool - 1bit
* sizeof(a)

# Store Negative number
### `Negative number to Binary`
1. Ignore -ve sign
2. Convert into Binary
3. Take 2's complement and store
```cpp
* Ex : -5 -> 11111111 11111111 11111111 11111011
1. 5
2. 00000000 00000000 00000000 00000101
3. 11111111 11111111 11111111 11111011
```
### `Binary to  Negative number`
1. Take 2's complement
2. Convert into Number and store
3. Since first bit was negative so add negative sign
```cpp
* Ex : 11111111 11111111 11111111 11111011 -> -5 
1. 11111111 11111111 11111111 11111011
2. 00000000 00000000 00000000 00000101
3. -5
```
```cpp
// Giving -ve number to unsigned
unsigned int a = -112
cout << a; /// 4294987184

// -112 -> `store` -> some binary - > 1111111111.....10110
// 1111111111.....10110 -> `print` -> Think as positive number since unsigned -> Hige value since most significant bit is 1
```
# Operators
* int/int = int
* int/float or float/int = float
* int/double or double/int = double
* && || ! - Logical Operators

# Input
### cin
```cpp
cin >> a >> b;
// Input : 
// 1. 2
//    3
// 2. 1    2
// 3. 1 2
```
* How give input - Type two values by enter, space, tab - It will get stored
* Cin does not read :-
1. Space "_"
2. Tab "\t"
3. Enter "\n"
* For this we have `cin.get()`

### cin.get()
* It picks character!
* Even it could have taken space - and store as 32
* Even it could have taken tab - and store as 9
* Even it could have taken enter - and store as 10
* So input could be space, tab or even enter
```cpp
a = cin.get()
cout << a << endl /// 49

Input :
1  2
```
* From 1 2 it picked 1
* So a has the value of 1 as char
* But it stores int - so ASCII of 1 = 49
* Therefore 49 got stored
* 
> # Patterns
* Basic pattern :
```cpp
int i,j,k;

for(i=1; i<=row; i++){
    for(j=1; j<=col; j++){
        if(....){
            cout<< "*";
        }else{
            cout<< " ";
        }
    }
    cout<< endl;
}
```
# Bitwise Operators
* & | ~ ^
### XOR 
* opposite-1
### NOT ~
* 2- 0000000..0010 -> 2's - 111111...1101 -> again 2's - 000000...0011 -> -3
* ~5 = -6

# Left - Right Shift
* Padding = 0 in case of positive numbers
* Padding = compiler dependent in case of negat ive numbers

* left : num<<x - *2 x times
* right : num>>x - /2 x times

* `Exception`
* 0100......0010 << 1 = 1000......0100 = `negative number`

# For loop
1. for( ; ; ) is valid - infinite loop -Initialization, condition, update are optional
2. for(int a=0,b=1; a>=0 && b>=1; a--,b--) is valid
3. initialization is only once
4. initi -> cond -> loop -> inc -> cond -> loop... till cond fails

# Scope
* Can't redeclare in `same block`
* Has block scope

# Operator Precedence
* Unary, Conditional, Assignment - Right to Left

># Leetcode1 - 1281
### In Decimal
* Last Digit = n%10
* Number without last digit = n/10

### In Binary
* Last Digit = n&1
* Number without last digit = n>>1 (beware of negative numbers binary)

># Leetcode2 - 191 
### n&1 -> 1 if last digit =1
### To check last digit =1 -> n&1
1. Convert to binary
2. Take last digit -> Right shift -> till num!=0

# Decimal and Binary
1. Approach 1
1. Find last digit : digit = num % 2
2. ans= ans + digit * pow(10,i)
3. num = num/2
4. Repeat steps until n!=0
  
2. Approach 2
1. Find last bit : bit = num&1 
2. ans= ans + bit * pow(10,i)
3. n= n>>1
4. Repeat steps until n!=0

# Create number from digits
1. When we have digits in reverse order
* ans= ans + digit * pow(10,i)
2. Normal order
* ans= ans*10 + digit
* Note: All this is valid for int range : 2^32 - 2^32-1

# Decimal to Binary
1. digit = n%10
2. if digit==1 , ans = ans + pow(2,i)
3. n=n/10
4. Repeat until n==0

# Leetcode3 - 7
* ans= ans*10 + digit
* `ans > INT_MAX/10 || ans < INT_MIN/10` -> out of bound
* INT_MAX = 2^32 -1
* INT_MIN = -2^32

# Leetcode4 - 1009
* decimal to binary to complement to decimal
* to find complement of binary - ~n & mask
* create mask :-
1. right shift n x times till n!=0
2. left shift mask and do |1 exact x times
Edge case : n==0, ans=1

# Leetcode5 - 231
* power of 2 check - 2^0 to 2^30
* check by mul by 2 till ans<INT_MAX/2

# Switch
```cpp
switch(exp){
    case const : -----
                  break;
    case const : -----
                  break;
    case const : -----
                  break;
    default : ----
        }
```
* Case const can be int/char
* Case const `can't be float/string`
* Use of `continue in switch is not valid`
* Default case is optional
* You can do nested switching

### How to end infinite loop - use exit(0)
* There are primarily two types of exit() :-
1. exit(0) Exit successfully: which means program has run successfully and then it is terminated. i.e. program has been executed without any error or interrupt.
2. exit(1) Exit Failure: which means the abnormal termination of the program, i.e. some error or interrupt has occurred.
* We can use different integer other than 1 to indicate different types of errors.

# Break & Continue
* Break - Come out of inner most loop
* Continue - Skip iteration

# Function
* Function signature - return_type func_name(params)
* In case of void return type - either don't return or `return;`
# Pass by Value
* Copy creates - Different address

### `& has lower precedence than ==`

># Array
* For similar kind of items
* Contiguous memory location
* Access with Indexing
* Array when passed in functions are passed as reference since - we pass array address while calling and so every changes made in the function will be affected on original array! 
* Array Signature - update(int a[], int n)
* Array Calling - update(arr, 3)
  
### Array Declaration
```cpp
int arr[];

int arr[]={3,6,7,9,3} // size=5

int arr[5]; // [G,G,G,G,G]

int arr[10]={1,7} // [1,7,0,0,0,0,0] // Initialize some rest will be 0

int arr[5]={0} // [0,0,0,0,0]

int arr[5]={1} // [1,0,0,0,0]

int arr[5] = {7, 8, 4, 9, 10,7,6,3}; // error: excess elements in array initializer
```

### Access
```cpp
int arr[]={3,6,7,9,3}
arr[3] //9
arr[9] // Garbage 

for (int i = 0; i < size; i++) {
    cin >> arr[i];
    cout << arr[i] << endl;
  }
```

### Size
```cpp
int arr[]={3,6,7,9,3};
int arr_size = sizeof(arr)/sizeof(int); ///5

int arr[10]= {6,4};
int arr_size = sizeof(arr)/sizeof(int); /// 10 but we needed 2 if we use this way to iterate array, so better explicitly pass size

int size;
cin>>size;
int arr[size]; // Worst Practice
int arr[100]; // Better Practice
```

># Linear Search

# Question - Find Duplicate
* a^a = 0
* a^0 = a

# Leetcode - 1207 - ?
# Find Duplicate -  x^x^x - ?
# Leetcode - 442 - ?

># Time Complexity
* The amount of time taken by an algo to run `as a function of length of the input`
1. Big O - upper bound
2. Theta 0 - avg case complexity 
3. Omega - lower bound

### O(n!) > O(2^n) > O(n^3) > O(n^2) > O(nlogn) > O(n) > O(logn) > O(1)

### 10^8 Operation Rule - Most of the modern machines can perform in 10^8 operations/second
1. < [10,11] - O(n!), O(n^6)
2. < [15..18] - O(2^n * n^2)
3. < 100 - O(n^4)
4. < 400 - O(n^3)
5. < 2000 - O(n^2 * logn)
6. < 10^4 - O(n^2)
7. < 10^6 - O(n logn)
8. < 10^8 - O(n), O(logn)

># Binary Search
* Applied only on `Monotonous data` - inc or dec
* `start+(end-start)/2` - Chalaki in place of (start+end)/2

### Total Occurence = (Last Index- First Index) + 1
># Pair
```cpp
pair<int,int> p;
p.first = 5;
p.second = 7;
```