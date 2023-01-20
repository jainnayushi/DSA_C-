1. ch - 'a' to 'z' - lower, 'A' to 'Z' - upper, '0' to '9' - numeric

```cpp
char ch;
cin >> ch;
if(ch>='a' && ch<='z'){
  cout<<ch<<"lower"<<endl;
}
else if(ch>='A' && ch<='Z'){
  cout<<"upper"<<endl;
} else if (ch>='0' && ch<='9'){
  cout<<"numeric"<<endl;
}

2a /// numeric
e4 /// lower
```

2. n - Sum of all even numbers
```cpp
int a,n,sum=0;
  cin>>n;
for (a=0;a<=n; a=a+2){
 sum+=a;
}
  cout<<sum;
```

3. Farenheit to celsius
```cpp
// [(°F-32)×5]/9.
float f;
cin>>f;
cout<< ((f-32)*5)/9;
}
```

4. n - prime, not-prime
```cpp
int i,n,flag=0;
cin>>n;
  for(i=2;i<n;i++){
    if(n%i==0){
      flag=1;
      break;}
  }
  if(flag==0){cout<<"prime";}
  else{cout<<"not prime";}
```
or
```cpp
#include <iostream>
#include <math.h>
using namespace std;
bool isPrime(int n){
    int i;
    for(i=2; i<n; i++){
        if(n%i==0){
            return false;}
    }
    return true;
}
int main() {
    int n;
    cin>>n;
    isPrime(n)?cout<<"Prime":cout<<"Not a Prime";
    return 0;
}
```

5. Print prime no between a and b
```cpp
int a,b,i, prime=0;
  cin>> a >> b;
  for(i=a;i<=b;i++){
    if(i==1 || i==0){
      continue;
    }
    flag=0;
    for(int j=2;j<=i/2;j++){
      if(i%j==0){
        prime=1;
        break;
      }
    }
    if(prime==0){
      cout << i << " ";
    }
  }
```
6.
****
****
****
****
column =row =n
```cpp
int n;
cin>>n;
int i=1;
while(i<=n){
  int j=1;
  // for each row run j's loop
  while(j<=n){
    cout<<"*"; // prints row
    j++;
  }
  cout<<endl;
  i++;
}
```
7.
111
222
333
column =row =n
```cpp
int n;
cin>>n;
int i=1;
while(i<=n){
  int j=1;
  // for each row run j's loop
  while(j<=n){
    cout<<i; // for each row it runs full loop once
    j++;
  }
  cout<<endl;
  i++;
}
```

8.
1234
1234
1234
1234
column =row =n
```cpp
int n;
cin>>n;
int i=1;
while(i<=n){
  int j=1;
  // for each row run j's loop
  while(j<=n){
    cout<<j; // for each row it runs full loop once so we want j's value
    j++;
  }
  cout<<endl;
  i++;
}
```
9.
  4321
  4321
  4321
  4321
column =row =n
```cpp
int n;
cin>>n;
int i=1;
while(i<=n){
  int j=1;
  // for each row run j's loop
  while(j<=n){
    cout<<j; // for each row it runs full loop once so we want n-j +1's value
    j++;
  }
  cout<<endl;
  i++;
}
```

10.
123
456
789
```cpp
int n;
cin>>n;
int i=1,k=1;
while(i<=n){
  int j=1;
  while(j<=n){
    cout<<k;
    k++;
    j++;
  }
  cout<<endl;
  i++;
}
```
11.
*
* *
* * *
row=n, col=i
```cpp
int n;
cin>>n;
int i=1;
while(i<=n){
  int j=1;
  while(j<=i){
    cout<<"*"<<" ";
    j++;
  }
  cout<<endl;
  i++;
}
```
12.
1
2 2
3 3 3
4 4 4 4
row=n, col=i, num=i
```cpp
int n;
cin>>n;
int i=1;
while(i<=n){
  int j=1;
  while(j<=i){
    cout<<i<<" ";
    j++;
  }
  cout<<endl;
  i++;
}
```
13.
1 
2 3 
4 5 6 
7 8 9 10
row=n, col=i, num=k
```cpp
int n,k=1;
cin>>n;
int i=1;
while(i<=n){
  int j=1;
  while(j<=i){
    cout<<k<<" ";
    j++;
    k++;
  }
  cout<<endl;
  i++;
}
```
14.
1
23
345
4567
row=n, col=i, num=k(k value starts each row value)
```cpp
int n;
cin>>n;
int row=1;
while(row<=n){
  int col=1,value=row;
  while(col<=row){
    cout<<value<<" ";
    col++;
    value++;
  }
  cout<<endl;
  row++;
}
```
15.
1
21
321
4321
row=n,col=i,k=starts with i, keep on decreasing for a row
or
x=i-j+1
```cpp
int n;
cin>>n;
int i=1;
while(i<=n){
  int j=1,k=i;
  while(j<=i){
    cout<<k<<" ";
    j++;
    k--;
  }
  cout<<endl;
  i++;
}
or
int n;
cin>>n;
int i=1;
while(i<=n){
  int j=1;
  while(j<=i){
    cout<<i-j+1<<" ";
    j++;
  }
  cout<<endl;
  i++;
}
```
16.
AAA
BBB
CCC
row=n,col=n,k=starts with A+i-1, so that A, then A+1=B, then A+2=C for a row
```cpp
int n;
cin >> n;
int i = 1;
while (i <= n) {
  int j = 1;
  char k = 'A' + i - 1;
  while (j <= n) {
    cout << k << " ";
    j++;
  }
  cout << endl;
  i++;
}
```
17.
ABC
ABC
ABC
row=n,col=n,k=starts with A and keep on inc k 
```cpp
int n;
cin >> n;
int i = 1;
while (i <= n) {
  int j = 1;
  char k = 'A';
  while (j <= n) {
    cout << k << " ";
    j++;
    k++;
  }
  cout << endl;
  i++;
}
```
18.
ABC
BCD
CDE
row=n,col=n,k=starts with A+i-1 and keep on inc k 
```cpp
int n;
cin >> n;
int i = 1;
while (i <= n) {
  int j = 1;
  char k = 'A'+i-1;
  while (j <= n) {
    cout << k << " ";
    j++;
    k++;
  }
  cout << endl;
  i++;
}
```
19.
A 
B C 
D E F 
G H I J
row=n,col=n,k=starts with A+i-1 and keep on inc k
```cpp
int n;
char k = 'A';

cin >> n;
int i = 1;
while (i <= n) {
  int j = 1;
  while (j <= i) {
    cout << k << " ";
    j++;
    k++;
  }
  cout << endl;
  i++;
}
```
20.
D
C D
B C D
A B C D
row=n,col=n,k=starts with A+n-i and keep on inc k
```cpp
int n;

cin >> n;
int i = 1;

while (i <= n) { // note - left triangle me i<=n
  int j = 1;
  char k = 'A' +n- i ;
  while (j <= i) {
    cout << k << " ";
    j++;
    k++;
  }
  cout << endl;
  i++;
}
```
21. Imp!
_ _ _ *
_ _ * *
_ * * *
row=n,col=n,space = n-i, star=i
```cpp
int n;

cin >> n;
int i = 1;

while (i <= n) {
  int space = n-i;
  while (space>0) {
    cout << " " << " ";
    space--;
  }
  int j = 1;
  while (j <= i) {
    cout << "*" << " ";
    j++;
  }
  cout << endl;
  i++;
}
```
22. Imp! Concept Clearing!
****
_***
__**
___*
row=n,col=k,space = i-1, star= n-i+1
```cpp
int n;

cin >> n;
int i = 1;

while (i <= n) {
  int space = i-1;
  while (space ) { // note! right triangle me space>0
    cout << " "
         << " ";
    space--;
  }
  int j = 1;
  int k= n-i+1;
  while (j <= k) {
    cout << "*"
         << " ";
    j++;
  }
  cout << endl;
  i++;
}
```
23.
___1
__22 
_333
4444
row=n,col=i,space = n-i, star=i start with row value
```cpp
int n;

cin >> n;
int i = 1;

while (i <= n) {
  int space = n-i;
  while (space > 0) {
    cout << " "
         << " ";
    space--;
  }
  int j = 1;
  int k= i;
  while (j <= i) {
    cout << k
         << " ";
    j++;
  }
  cout << endl;
  i++;
}
``` 
24. Very Imp! Concept Clearing!
_ _ _ 1
_ _ 1 2 1
_ 1 2 3 2 1
1 2 3 4 3 2 1
row=n,col=i,space = n-i, 1st triangle - value=1 start with row value and
keep on inc, 2nd triangle - start=i-1 and keep on dec start
```cpp
int n;

cin >> n;
int i = 1;

while (i <= n) {
  int space = n - i;
  while (space) {
    cout << " "
         << " ";
    space--;
  }
  int j = 1;
  int k = 1;
  while (j <= i) {
    cout << k << " ";
    j++;
    k++;
  }
  int z = i - 1;
  while (z > 0) {
    cout << z << " ";
    z--;
  }

  cout << endl;
  i++;
}
// ```
25. Very Very Imp! Concept Clearing!
1 2 3 4 5 5 4 3 2 1
1 2 3 4 * * 4 3 2 1
1 2 3 * * * * 3 2 1
1 2 * * * * * * 2 1
1 * * * * * * * * 1
First triangle - col=n-i+1, value starts with 1 and keep on inc
Second triangle - col = (i-1)*2, value = *
Third triangle - col = n-i+1, value starts with n-i+1 and keep on decreasing
```cpp 
int n;

cin >> n;
int i = 1;

while (i <= n) {
  int j = 1;
  while (j <= n - i + 1) {
    cout << j << " ";
    j++;
  }

  int star = (i - 1) * 2;
  int k = 1;
  while (k <= star) {
    cout << "*"
         << " ";
    k++;
  }

  int z = n - i + 1;
  int p = n-i+1;
  while (z) {
    cout << p << " ";
    z--;
    p--;
  }

  cout << endl;
  i++;
}
```
Note 
* left triangle me i<=n
* right triangle(left space) me z>0

26. Saurabh Sir Concept
*********
**** ****
***   ***
**     **
*       *

i-5, j-9, 
  for i=1 - j<=5 || j>=5
  for i=2 - j<=4 || j>=6
```cpp
int n,i,j;
cin >> n;
for(i=1;i<=n;i++){
 for(j=1;j<=2*n-1;j++){
   if(j<=n+1-i || j>=n-1+i){
     cout<<"*"<<" ";
   }else{
     cout<<" "<<" ";  
   }
 }
 cout<<endl;
 }
 ```
27. Saurabh Sir concept
   A1
  AB12
 ABC123
ABCD1234

i-4, j-8,
for i=1 - j=4,5
for i=2 - j= 3,4,5,6
j>=n+1-i && j<n+i
start k ='A' but when k==5 make it '1' and keep on inc
```cpp
int n, i, j;
cin >> n;
for (i = 1; i <= n; i++) {
  char k = 'A';
  for (j = 1; j <= 2 * n; j++) {
    if (j >= n - i + 1 && j <= n + i) {
      if (j == n + 1) {
        k = '1';
      }
      cout << k;
      k++;
    } else {
      cout << " ";
    }
  }
  cout << endl;
}
```
28.
For upper and lower diag - use k which is different for upper and lower part
*
**
***
****
***
**
*

i-7, j-4, k=0
for i=1 - j=1, k=1
for i=2 - j= 1,2, k=2
for i=4 - j=1,2,3,4, k=4
for i=5 - j=1,2,3, k=3
for i=6 - j=1,2, k=2

so j<=k 
k++ till i=4 after that k--
```cpp
int n, i, j,k=0;
cin >> n;
for (i = 1; i <= 2*n-1; i++) {
  `i<=4?k++:k--;`
  for (j = 1; j <= n; j++) {
    if (j<=k) {
      cout << "*";
    } else {
      cout << " ";
    }
  }
  cout << endl;
}
```
29.
      *       
    * * *     
  * * * * *   
* * * * * * * 
  * * * * *   
    * * *     
      * 
```cpp
int n, i, j;
cin >> n;
for (i = 1; i <= 2 * n - 1; i++) {
  if(i<5){
  for (j = 1; j <=2*n-1; j++) {
      if (j>=n-i+1 && j<=n+i-1) {
      cout << "*"<<" ";
    }else{
        cout<<" "<<" ";
    }
    }}else{
    for (j = 1; j <=2*n-1; j++) {
      if (j>=i-n+1 && j<=3*n-i-1) {
      cout << "*"<<" ";
    }else{
        cout<<" "<<" ";
    }
    }}
   
  cout << endl;
  }
  ```
30.
* * * * * * * * * 
* * * *   * * * * 
* * *       * * * 
* *           * * 
*               * 
* *           * * 
* * *       * * * 
* * * *   * * * * 
* * * * * * * * *
j <= 6-k || j >= 4+k
k++ for 1 to 5
k-- for 6 to 9
```cpp
int n,i,j,k=0;
cin>>n;
for(i=1; i<=2*n-1; i++){
    i<=n ? k++ : k--;
    for(j=1; j<=2*n-1; j++){
        if(j<=n+1-k || j>=n-1+k){
            cout<< "*" << " ";
        }else{
            cout<< " "<< " ";
        }
    }
    cout<< endl;
}
```
or
```cpp
int n,i,j,k=0;
cin>>n;
int space=0;
for(i=1;i<=n;i++){
    for(j=1;j<=n-i+1;j++){
            cout<<"*";}
    for(j=0;j<space;j++){
        cout<<" ";}
    for(j=1;j<=n-i+1;j++){
        cout<<"*";}
    space+=2;
    cout<<endl;
}
space=2*n-2;
for(i=1;i<=n;i++){
    for(j=1;j<=i;j++){
            cout<<"*";}
    for(j=0;j<space;j++){
        cout<<" ";}
    for(j=1;j<=i;j++){
        cout<<"*";}
    cout<<endl;
    space-=2;
}
```
31. Fibonaci Series
0,1,1,2,3,5,8,13,21 

```cpp
int n = 10;
int a = 0;
int b = 1;
cout<< a << " "<< b<" ";
for(int i=1; i<=n-2; i++){
  int next = a+b;
  cout<< next << " ";

  a=b; // 1
  b=next; // 2 Order matters!
}
```
32. nth Fibonacci
```cpp
int nthFib(int n) {
  int a = 0;
  int b = 1;
  int next;
  for (int i = 1; i <= n - 2; i++) {
    next = a + b;
    a = b;    
    b = next;
  }
  return b;
}
int main() {
  int n;
  cin >> n;
  int ans = nthFib(n);
  cout << endl << ans;
  return 0;
}
```
33. to 43.
```cpp
*****
****
***
**
*
int n,i,j,k=0;
cin>>n;
for(i=1;i<=n;i++){
    for(j=1;j<=n-i+1;j++){
        cout<<"*"<<" ";
    }
    cout<<endl;
}

A
BB
CCC
DDDD
EEEEE

int n,i,j;
char k='A';
cin>>n;
for(i=1;i<=n;i++){
    for(j=1;j<=i;j++){
        cout<<k<<" ";
    }
    cout<<endl;
    k++;
}

E
DE
CDE
BCDE
ABCDE
int n,i,j;
cin>>n;
for(i=1;i<=n;i++){
    char k='E'-i+1;
    for(j=1;j<=i;j++){
        cout<<k<<" ";
        k++;
    }
    cout<<endl;
}

**********
****  ****
***    ***
**      **
*        *
**      **
***    ***
****  ****
**********
int n,i,j,k=0;
cin>>n;
for(i=1;i<=n;i++){
    for(j=1;j<=2*n;j++){
        if(j<=n+1-i || j>=n+i)
            cout<<"*"<<" ";
        else
            cout<< " "<< " ";
    }
    cout<<endl;}

for(i=n+1;i<=2*n-1;i++){
    for(j=1;j<=2*n;j++){
        if(j<=i-n+1 || j>=3*n-i)
            cout<<"*"<<" ";
        else
            cout<< " "<< " ";
    }

    cout<<endl;
}

*        *
**      **
***    ***
****  ****
**********
****  ****
***    ***
**      **
*        *

int n, i, j, k = 0;
cin >> n;
for (i = n ; i <= 2 * n - 1; i++) {
  for (j = 1; j <= 2 * n; j++) {
    if (j <= i - n + 1 || j >= 3 * n - i)
      cout << "*"
           << " ";
    else
      cout << " "
           << " ";
  }

  cout << endl;
}
for (i = 1; i <= n; i++) {
  for (j = 1; j <= 2 * n; j++) {
    if (j <= n + 1 - i || j >= n + i)
      cout << "*"
           << " ";
    else
      cout << " "
           << " ";
  }
  cout << endl;
}

1
01
101
0101
10101

int i, n, j, k = 1;
cin >> n;
for (i = 1; i <= n; i++) {
  i % 2 == 0?k=0:k=1;
  for (j = 1; j <= i; j++) {
    cout << k << " ";
    k = 1 - k;
  }
  cout << endl;
}

A
AB
ABC
ABCD
ABCDE
int i, n, j;
cin >> n;
for (i = 1; i <= n; i++) {
  char k = 'A';
  for (j = 1; j <= i; j++) {
    cout << k << " ";
    k++;
  }
  cout << endl;
}
ABCDE
ABCD
ABC
AB
A
int i, n, j;
  cin >> n;
  for (i = 1; i <= n; i++) {
    char k = 'A';
    for (j = 1; j <= n-i+1; j++) {
      cout << k << " ";
      k++;
    }
    cout << endl;
  }
2
24
246
2468
246810
  int i, n, j;
cin >> n;
for (i = 1; i <= n; i++) {
  int k =2;
  for (j = 1; j <= i; j++) {
    cout << k ;
      k+=2;
  }
  cout << endl;
}
$$$$$$$$
    
$$    $$
    
$$    $$
    
$$$$$$$$
int i, n, j;
cin >> n;
for (i = 1; i <= n; i++) {
  for (j = 1; j <= n; j++) {
    if(i==1||i==n-1||i%2!=0&&j<=2 || i%2!=0&& j>=n-1){
        cout<<"$";
    }else{
        cout<<" ";
    }
  }
  cout << endl;
}
```
44. Number to Binary
```cpp
// 1
# include<math.h>
int n=6,digit,ans;
int i=0;
while(n){
    digit = n%2;
    cout<<digit<<" ";
    ans = ans + (digit * pow(10,i)) ;
    n=n/2;
    i++;
}
cout<<ans;
```
```cpp
// 2
# include<math.h>
int n;
  cin >> n;
  int ans = 0;
  int i = 0;
  while (n) {
    int bit = n & 1;
    cout << "bit" << bit << " ";
    ans = (bit * pow(10, i)) + ans;
    cout << "ans" << ans << " ";
    n = n >> 1;
    i++;
  }
  cout << ans;
}
```
45. nCr and factorial
```cpp
#include <iostream>
#include <math.h>
using namespace std;
int fact(int n) {
  int ans = 1;
    if(n==0){ return 1;}
  for (int i = 1; i <= n; i++) {
    ans = ans * i;
  }
  return ans;
}
int ncr(int n,int r){
    return (fact(n) / (fact(r) * fact(n - r)));
}
int main() {
  // nCr
  // 8C2 = 8!/2!*6!
  int n, r, ans;
  cin >> n >> r;
  ans = ncr(n,r);
    cout<<ans;
  return 0;
}
```
46. Count setbits in a,b
```cpp
int setBits(int n){
    int count=0;
    while(n){
        if(n&1){ count++;}
        n=n>>1;
    }
    return count;
}
int main() {
    int n;
    cin>>n;
    int ans = setBits(n);
    cout<<endl<<ans;
    return 0;
}
```
47. Array Operations
* Get input in array
* Print array
* Get max
* Get min
* Get sum
```cpp
void printArr(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

void inputArr(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    cin >> arr[i];
  }
}

int getMax(int arr[], int size) {
  // int max = INT8_MIN;
  int maxi = INT8_MIN;
  for (int i = 0; i < size; i++) {
    // if(arr[i]>max){
    //     max=arr[i];
    // }
    maxi = max(maxi, arr[i]);
  }
  // return max;
  return maxi;
}

int getMin(int arr[], int size) {
  // int min = INT8_MAX;
  int mini = INT8_MAX;
  for (int i = 0; i < size; i++) {
    // if(arr[i]<min){
    //     min=arr[i];
    // }
    mini = min(mini, arr[i]);
  }
  // return min;
  return mini;
}
int getSum(int arr[], int size) {
  int sum = 0;
  for (int i = 0; i < size; i++) {
    sum += arr[i];
  }
  return sum;
}

int main() {
  int arr[5];
  inputArr(arr, 5);
  printArr(arr, 5);
  cout << getMin(arr, 5) << endl;
  cout << getMax(arr, 5) << endl;
  cout << getSum(arr, 5) << endl;
}
```
47. Linear Search
```cpp
bool linearSearch(int arr[], int size, int key) {
  for (int i = 0; i < size; i++) {
    if (arr[i] == key) {
      return 1;
    }
  }
  return 0;
}

int main() {
  int arr[10] = {1, 4, 7, -4, 5, 6, 8, 0, 2, -9};
  int key;
  cin >> key;
  bool found = linearSearch(arr, 10, key);
  if (found) {
    cout << "Present";
  } else {
    cout << "Absent";
      }
}
```
48. Reverse Array
```cpp
void reverseArr(int arr[], int n) {
  int start = 0;
  int end = n - 1;
  while (start <= end) {
    swap(arr[start], arr[end]);
    start++;
    end--;
  }
}

int main() {
  int arr[5] = {1, 4, 7, 2, 8};
  reverseArr(arr, 5);
  printArr(arr, 5);
}
```
49. Alternate reverse
```cpp
void swapAlternate(int arr[], int n) {
  int i = 0;
  int j = 1;
  while (i <= n - 1 & j <= n - 1) {
    cout << i << " " << j << endl;
    swap(arr[i], arr[j]);
    i += 2;
    j += 2;
  }
}
or proper solution :-
void swapAlternate(int arr[], int size){
    for(int i=0; i<size; i+=2){
        if(i+1 < size){
            swap(arr[i], arr[i+1]);
        }
    }
}

int main() {
  int arr[5] = {1, 4, 7, 2, 8};
  swapAlternate(arr, 5);
  printArr(arr, 5);
  cout << endl;
  int arr1[6] = {1, 4, 7, 2, 8, 9};
  swapAlternate(arr1, 6);
  printArr(arr1, 6);
}
```
50. Find unique - 2m+1 - one no is present only alone, rest in pairs
```cpp
int findUnique(int *arr, int size){
    int t,xor=0;
    cin>>t;
    while(t){
        for(int i=0; i<size; i++){
            xor=xor^arr[i];
        }
        t--;
    }
    return xor;
}
```
51. Find intersection of two arrays - sorted arrays in dec order
match - yes- 1.print - 2.value update(aage koi aur se match na ho) - 3.break
```cpp
int intersection(int *a, int size1, int *b, int size2) {
  // match-yes-1. print - 2. value update(aage koi aur se match na ho)-3. break
  int ele;
  vector<int> ans;
  for (int i = 0; i < size1; i++) {
    ele = a[i];
    for (int j = 0; j < size2; j++) {
        if(ele<b[j]) break; // since it is decreasing order sorted
      if (ele == b[j]) {
        ans.push_back(ele);
        b[j] = INT_MIN; // mess this b[j] so that it can't be matched with anything else
        break; // done checking for this i
      }
    }
  }
  return ans;
}

int main() {
  int a[3] = {1, 2, 3};
  int b[2] = {3, 4};

  int x;
  x = intersection(a, 3 b, 2);
  cout << x;
}

// bad complexity
```
Two-Pointer approach
1. a[i]<b[j] i++ // second array me sabhi bade hai
2. a[i] == b[j] print / vector i++ j++ 
3. a[i]>b[j] j++ // first array ke sabhi isse bade honge mtlb
```cpp
int intersection(int *a, int size1, int *b, int size2) {
  int i = 0, j = 0;
  vector<int> ans;

  while (i < size1 && j < size2) {
    if (a[i] == b[j]) {
      ans.push_back(a[i]);
        i++;
        j++;
    } else if (a[i] < b[j]) {
      i++;
    } else {
      j++;
    }
  }

  return ans;
}
int main() {
  int a[3] = {1, 2, 3};
  int b[2] = {3, 4};

  int x;
  x = intersection(a, 3 b, 2);
  cout << x;
  return 0;
}
```
52. Pair sum - each pair should be sorted
```cpp 
int intersection(int *a, int size, int s) {
  vector<vector<int>> ans;
  for (int i = 0; i < size; i++) {
    for (int j = i + 1; j < size; j++) {
      if (arr[i] + arr[j] == s) {
        vector<int> temp;
        temp.push_back(min(arr[i], arr[j]));
        temp.push_back(max(arr[i], arr[j]));
        ans.push_back(temp);
      }
    }
  }
  sort(ans.begin(), ans.end());
  return ans;
}
int main() {
  int a[5] = {2,-3,3,3,-2};

  int x;
  x = intersection(a, 5,0);
  cout << x; // -3 3 | -3 3 | -2 2 
  return 0;
}
```
53. Triplet Sum
```cpp
for (int i = 0; i < size; i++) {
    for (int j = i + 1; j < size; j++) {
     for (int k = j + 1; j < size; k++) {
      if (arr[i] + arr[j] + arr[k]== s) {...}}}
```
54. Sort 0-1 array
Method 1 : count 0, count 1 - traverse array and put
Method 2 : sort()
Method 3 : `Two pointer method`
1. arr[i] == 0 : i++
2. arr[j] == 1 : j--
3. arr[i]==1 & arr[j]==0 : swap(arr[i], arr[j])
4. till i<j
```cpp
int sortOne(int arr[], int n){
    int i=0, j=n-1;
    while(i<j){
        if(arr[i]==0){
            i++;
        }else if(arr[j]==1){
            j--;
        }else{
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
    return arr;
}
int main(){
    int arr[9] = {1,1,0,2,2,0,0,1,0}
    sortOne(arr, 9);
    printArr(arr,9);
}

```
55. Sort 012 - `Three pointer method`
```cpp
void printArr(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}
// i=current, 0 mile to left se swap karo, 2 mile to right se swap karo, 1 mile to aage badho
int sort012(int arr[], int n) {
  int i = 0, left = 0, right=n-1;
  while (i <= right) {
    if (arr[i] == 0) {
      swap(arr[i], arr[left]);
        i++;
        left++;
        
    } else if (arr[i] == 1) {
      i++;
        
    } else {
      swap(arr[i], arr[right]);
      right--;
    
    } 
  }
    
  return 0;
}
int main() {
  int arr[9] = {1,1,0,2,2,0,0,1,0};
    sort012(arr, 9);
    printArr(arr,9);
  return 0;
}
```
56. Binary Search
(start+end)/2 can be disaster if start and end = 2^31 = mid will go out of range
So be write `start+(end-start)/2` - Chalaki
```cpp
int binarySearch(int arr[], int size, int key){
    int start=0;
    int end=size-1;
    int mid;
    while(start<=end){
        mid = (start+end)/2;
        if(arr[mid]==key){
            return mid;
        } 
        if(key> arr[mid]){
            start = mid+1;
        }else{
            end= mid-1;
        }
    }
    return -1;
    }
int main() {
  int arr[6] = {3,6,8,9,10,66};
  int x= binarySearch(arr, 6,10);
  cout<<x;
  return 0;
}
```
57. 58. 59. First Occurence, last occurence, no of occurences
```cpp
int firstOcc(int arr[], int size, int key) {
  int start = 0;
  int end = size - 1;
  int ans = -1, mid;
  while (start <= end) {
    mid = (start + end) / 2;
    if (arr[mid] == key) {
      ans = mid;
      end = mid - 1;
    }
    if (key > arr[mid]) {
      start = mid + 1;
    } else {
      end = mid - 1;
    }
  }
  return ans;
}
int lastOcc(int a[], int size, int key){
    int start=0, end=size-1, mid,ans=-1;
    while(start<=end){
        mid=start+((end-start)/2);
        if(a[mid]==key){
            ans=mid;
            start=mid+1;
        }if(key>a[mid]){
            start=mid+1;
        }
        else if(key<a[mid]){
            end=mid-1;
        }
    }
    return ans;
}
int main() {
  int arr[10] = {3, 4, 5,5,5,5,5,8, 9, 66};
  int x = firstOcc(arr, 10, 5);
  int y = lastOcc(arr, 10, 5);
  printArr(arr, 10);
  cout <<"First occurence " <<x<<endl;
    cout<<"Last occurence " <<y<<endl;
    cout<<"No of ocurrences " <<y-x+1;
  return 0;
}
```
60. Peak Index in a mountain array
```cpp
int peakMountain(int arr[], int size) {
  int start=0;
    int end=size-1;
    int mid;
    while(start<end){ // 1. not start<=end
        mid=start+(end-start)/2;
        if(arr[mid]<arr[mid+1]){ //left line
            start=mid+1;
        }else{ // peak or right side
            end=mid; // 2. if this mid is peak =>mid-1 karke peak miss ho jaata
        }
    }
    return start; //3. return start
}
int main() {
  int arr[7] = {3, 4, 5,8, 9,2,0};
  int x = peakMountain(arr, 7);
  printArr(arr, 7);
  cout  <<x<<" index"<<endl;
  cout  <<arr[x]<<" is the peak"<<endl;
  return 0;
}
```