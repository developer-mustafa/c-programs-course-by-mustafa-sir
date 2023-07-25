// #include<stdio.h>
// int main(){
//     int a = 5;
//     float b = 3.89;
//     char c = 'a';
//     double d = 5.45645646456;

//     printf("%d\n",a);
//     printf("%.2f\n",b);
//     printf("%c\n",c);
//     printf("%.2lf\n",d);

//     return 0;
// }

// #include <stdio.h>
// int main()
// {

//     float a = 5;
//     float b = 2;
//     int sum;
//     int sub;
//     float mult;
//     float div;
//     sum = a + b;
//     sub = a - b;
//     mult = a * b;
//     div = a / b;
//     int term ;
//     term= a*a +2*a*b+b*b;

//     printf(" sum: %d\n", sum);
//     printf(" subtraction: %d\n", sub);
//     printf(" multiplication: %.2f\n", mult);
//     printf(" division: %.2f\n", div);

//     printf(" term: %.2f\n", term);

//     return 0;
// }

// //2.How to calculate average with scanf:

// #include <stdio.h>
// int main(){
//     float a,b,c,d,e,avg;
//     printf("Enter 5 numbers:");
//     scanf("%f %f %f %f %f",&a,&b,&c,&d,&e);
//     avg = (a+b+c+d+e)/5;
//     printf("Average: %.2f\n",avg);

//     return 0;
// }

// //condition:Rain and umbrella
// #include <stdio.h>
// int main(){
//     int isRain = 1;

//     if(isRain==1){
//         printf("I will go with umbrella");
//     }

//     else{
//         printf("I won't go with umbrella");
//     }

//     return 0;
// }

// //condition: fitra taka check:
// #include <stdio.h>
// int main(){

// int fitraTaka = 500;

// if(fitraTaka>=115){
//     printf("You are eligible");
//  }

//  else{
//     printf("You are not eligible");
//  }

//     return 0;
// }

// /*Check 2 condition:
// two condition must be true for execute if block:
// */
// #include <stdio.h>
// int main(){

// int eidBudget = 6000;
// int openStall = 1;

// if(eidBudget>=5000 && openStall==1 ){
//     printf("I will go to the market");
// }

// else{
//     printf("I won't go to the market");
// }
//     return 0;
// }

// /*Check 2 condition with logical OR:
//  one condition can be true to execute if block:
//  */
// #include <stdio.h>
// int main(){
//     int coocaCola = 0;Right Form of Verb-
//     int miranda = 0;

//     if(coocaCola==1 || miranda==1 ){
//         printf("I am happy to get cool-drinks");
//     }
//     else{
//         printf("I'm not happy");
//     }

//     return 0;
// }

// // একাদিক ফাংশন কল করার ‍ুসি পোগ্রাম
// #include<stdio.h>

// //function 1:
// int jogKoro(int a,int b){

//     int sum;
//     sum = a+b;
//     printf("%d ",sum);
//     return sum;
// }

// //function 2:
// float average(float a,float b){
//     float avg;
//     avg= (a+b)/2;
//     printf("avg: %.2f\n",avg);
//     return avg;
// }

// //function 3:
// void print(){
//     printf("i am from print function\n");
// }

// //main function:
// int main(){

//     jogKoro(12,13); //call to jogkoro function with arguments
//     average(5,7);   //call to average function with arguments
//     print();        //call to print function without arguments

//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int i =1

//     return 0;
// }
//--------------------------------------end of function---------------------------------------------//

//--------------------------------------start of Array---------------------------------------------//

// //Q: Array scanf and print sum of Array:
// #include <stdio.h>

// int main() {

//     int i = 0;
//     int sum = 0;

//    int arr[7];

//     //from user get input (for loop)
//     for ( i = 0; i <=6 ; i++)
//     {
//         scanf("%d", &arr[i]);

//     }

//     //for calculation (for loop)
//     for (i = 0; i <=6 ; i++)
//     {
//      sum = sum +  arr[i];
//     }

//     printf("%d\n",sum);

//     return 0;
// }

// // /*Q:---------Fundamental array Concept:------------ */

// #include <stdio.h>

// int main() {
//   int arr[5] = {1, 2, 3, 4, 5}; //declaring and initializing an integer array of size 5

//   //accessing array elements using index
//   printf("Array elements: ");
//   for(int i=0; i<5; i++) {
//     printf("%d ", arr[i]);
//   }
//   printf("\n");

//   //finding sum of array elements
//   int sum = 0;
//   for(int i=0; i<5; i++) {
//     sum += arr[i]; // sum  = sum+arr
//   }
//   printf("Sum of array elements: %d\n", sum);

//   //finding maximum element in array
//   int max = arr[0];
//   for(int i=1; i<5; i++) {
//     if(arr[i] > max) {
//       max = arr[i];
//     }
//   }
//   printf("Maximum element in array: %d\n", max);

//   //finding minimum element in array
//   int min = arr[0];
//   for(int i=1; i<5; i++) {
//     if(arr[i] < min) {
//       min = arr[i];
//     }
//   }
//   printf("Minimum element in array: %d\n", min);

//   return 0;
// }

//------------Advance array concept--------------------//

// #include <stdio.h>

// int main() {
//   int arr[10]; //declaring an integer array of size 10

//   //reading array elements from user
//   printf("Enter 10 integer values for the array:\n");
//   for(int i=0; i<10; i++) {
//     scanf("%d", &arr[i]);
//   }

//   //printing array elements
//   printf("Array elements: ");
//   for(int i=0; i<10; i++) {
//     printf("%d ", arr[i]);
//   }
//   printf("\n");

//   //reversing the array
//   int temp;
//   for(int i=0, j=9; i<j; i++, j--) {
//     temp = arr[i];
//     arr[i] = arr[j];
//     arr[j] = temp;
//   }

//   //printing reversed array
//   printf("Reversed array elements: ");
//   for(int i=0; i<10; i++) {
//     printf("%d ", arr[i]);
//   }
//   printf("\n");

//   //sorting the array in ascending order using bubble sort algorithm
//   for(int i=0; i<9; i++) {
//     for(int j=0; j<9-i; j++) {
//       if(arr[j] > arr[j+1]) {
//         temp = arr[j];
//         arr[j] = arr[j+1];
//         arr[j+1] = temp;
//       }
//     }
//   }

//   //printing sorted array
//   printf("Sorted array elements in ascending order: ");
//   for(int i=0; i<10; i++) {
//     printf("%d ", arr[i]);
//   }
//   printf("\n");

//   return 0;
// }

// //How to calculate Factorial in c Programs:
// #include<stdio.h>
// int main(){

//   int i,n;
//   long long int factorial;
//   factorial =1;
//   printf("Enter positive number: ");
//   scanf("%d",&n);
//   if (n<0)
//   {
//     printf("Error");
//   }
//   else{
//     for(i =1;i<=n;i++){
//       factorial = factorial*i;
//       printf("factorial: %llu\n",factorial);
//     }

//     pow(factorial,2);
//   }

//   return 0;
// }

// //Q: (a+b)^2 Formula:

// #include<stdio.h>
// #include<math.h>
// int main(){
//   float a,b,square;
//     a = 5;
//     b = 7;
//   square = pow((a+b),2);
//   printf("square = %f\n",square);
//   return 0;

// }

// // // How to calculate the gcd and lcm:
// #include<stdio.h>
// int main(){
//   int num1,num2,n1,n2,rem,gcd,lcm;
//   printf("Enter two numbers");
//   scanf("%d %d",&num1,&num2);
//   n1 = num1;
//   n2 = num2;

//   while(n2!=0){
//    rem = n1%n2;
//    n1 = n2;
//    n2 =rem;
//   }

//   gcd = n1;

//   lcm = (num1*num2)/gcd;
//   printf("Lcm is : %d\n",lcm);
//   // printf("Gcd is : %d\n",gcd);

//   return 0;
// }

// //Q: which number is bigger (number comparison):
// #include<stdio.h>
// int main(){
//   int a = 105;
//   int b = 105;
//   int c = 105;

//   if(a>b && a>c){
//     printf("%d = a is bigger",a);

//   }
//   else if(b>a && b>c){
//     printf("%d = b is bigger",b);

//   }
//   else if(b==a && b==c){
//     printf("3 numbers are equal");

//   }
//   else if(b==a){
//     printf("a and b are equal");

//   }
//   else if(b==c){
//     printf("b and c are equal");

//   }
//   else if(a==c){
//     printf("a and c are equal");

//   }

//   else{
//     printf("%d = c is bigger",c);
//   }

//   return 0;
// }

// #include<stdio.h>
// int main(){
//   int result;
//   printf("Enter your result: ");
//   scanf("%d",&result);

//   if(result>=80 && result<=100){
//     printf("A+");
//   }

//   else if(result>=70 && result <80){
//     printf("A");
//   }
//   else if(result>=60 && result <70){
//     printf("A-");
//   }
//   else if(result>=50 && result <60){
//     printf("B");
//   }
//   else if(result>=40 && result <50){
//     printf("C");
//   }
//   else if(result>=33 && result <40){
//     printf("D");
//   }

//   else if(result<33 && result >=0){
//     printf("F");
//   }

//  else{
//   printf("Please input the valid number");
//  }

//   return 0;
// }

// //Q: How to calculate the leap Year in c programs:
// #include <stdio.h>
// int main()
// {
//   int n;
//   printf("Enter the Year: ");
//   scanf("%d", &n);
//   if (n % 4 == 0 && n % 100 != 0 || n % 400 == 0)
//   {
//     printf("%d is leap Year", n);
//   }
//   else
//   {
//     printf("%d is not leap Year", n);
//   }

//   return 0;
// }


// //Q:if you want ot break the loop by condition: (break)
// #include<stdio.h>
// int main(){

//   for (int i = 1;i<=5;i++){
//     if(i>3){
//      break;
//     }
//       printf("%d", i);
//   }
//   /*
  
//   output:1 2 3

//   */
//   return 0;
// }


// //Q:If you want ot skip the loop by condition: (continue)
// #include<stdio.h>
// int main(){

//   for (int i = 1;i<=5;i++){
//     if(i==3){
//      continue;;
//     }
//       printf("%d", i);
//   }
//   /*

//   output:1 2 4 5

//   */
//   return 0;
// }

// #include<stdio.h>
// int main(){
//   int n, i, isPrime = 1;
//   printf("Enter the positive number: ");
//   scanf("%d",&n);
//   if(n==1){
//     printf("nor composite  and nor prime numbers");
//     isPrime = 0;
//   }
//   else{
//     for (i = 2; i<=n/ 2;i++){
//       if(n%i==0){
//         isPrime = 0;
//         break;
//       }
//     }
//   }

//   if(isPrime==1 && n!=1){
//     printf("%d is Prime number", n);
//   }
//   else{
//     printf("%d is not Prime number", n);
//   }
//   return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>

// void sieve(int limit)
// {
//   int *primes = malloc(sizeof(int) * limit);
//   int i, j;

//   // Initialize array with all numbers from 2 to limit
//   for (i = 2; i <= limit; i++)
//   {
//     primes[i - 2] = i;
//   }

//   // Mark multiples of primes as composite
//   for (i = 0; i < limit - 2; i++)
//   {
//     if (primes[i] != 0)
//     {
//       for (j = i + 1; j < limit - 2; j++)
//       {
//         if (primes[j] % primes[i] == 0)
//         {
//           primes[j] = 0;
//         }
//       }
//     }
//   }

//   // Print all prime numbers
//   printf("Prime numbers up to %d:\n", limit);
//   for (i = 0; i < limit - 2; i++)
//   {
//     if (primes[i] != 0)
//     {
//       printf("%d\n", primes[i]);
//     }
//   }

//   free(primes);
// }

// int main()
// {
//   int limit;

//   printf("Enter a limit: ");
//   scanf("%d", &limit);

//   sieve(limit);

//   return 0;
// }
