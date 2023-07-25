// #include <stdio.h>
// #include <math.h>

// int main()
// {

//     float a,b,c,s,area;
//     printf("Enter the Three numbers: ");
//     scanf("%f,%f,%f",&a,&b,&c);
//     s = (a+b+c)/2;
//     area = sqrt(s*(s-a)*(s-b)*(s-c));
//     printf("Triangle area is %f", area);

//     return 0;
// }


// //Q: Area of triangle formula is sqrt( s(s-a) *(s-b)* (s-c) ) :
// //Ans:
// #include <stdio.h>
// #include <math.h>
// int main()
// {
//     float a, b, c, s, area;
//     printf("Enter the three sides of the triangle: ");
//     scanf("%f %f %f", &a, &b, &c);

//     if (a <= 0 || b <= 0 || c <= 0)
//     {
//         printf("The sides of the triangle must be positive numbers.");
//         return 0;
//     }
//     if (a + b > c && a + c > b && b + c > a)
//     {
//         s = (a + b + c) / 2;
//         area = sqrt(s * (s - a) * (s - b) * (s - c));
//         printf("The area of the triangle is %f", area);
//     }
//     else
//     {
//         printf("The input sides do not form a valid triangle.");
//     }
//     return 0;

// }

/*
#include <stdio.h>

int main()
{
    int x;
    printf("Input number: ");
    scanf("%d", &x);
if (x%2==0)
{
  printf("even number") ;

}

else{
    printf("odd number") ;
}
    return 0;
}
*/

// #include <stdio.h>
// int main()
// {
//     int age;

//     printf("please enter age: ");
//     scanf("%d", &age);

//     if (age >= 18 && age < 150)
//     {
//         printf("Adult");
//     }

//     else if (age < 18 && age > 13)
//     {
//         printf("adolescence");
//     }
//     else if (age < 13 && age > 6)
//     {
//         printf("child");
//     }
//     else if (age < 6)
//     {
//         printf("baby");
//     }

//     else
//     {
//         printf("This is not valid age");
//     }

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int result;
//     printf("Enter the result");
//     scanf("%d", &result);
//     if (result >= 80)
//     {
//         printf("A+\n");
//     }
//     else if (result >= 70 && result <80)
//     {
//         printf("A\n");
//     }
//     else if (result >= 60 && result <70)
//     {
//         printf("A-\n");
//     }
//     else if (result >= 50 && result <60)
//     {
//         printf("B\n");
//     }
//     else if (result >= 40 && result <50)
//     {
//         printf("C\n");
//     }
//     else if (result >= 33 && result <40)
//     {
//         printf("D\n");
//     }
//     else
//     {
//         printf("F\n");
//     }

//     return 0;
// }

/* -------------------------------------------------------------------------- */
/*                                example case:                               */
/* -------------------------------------------------------------------------- */

// #include <stdio.h>
// int main()
// {   char x;
//     x= 'c' ;
//     switch (x)
//     {
//     case 'a':
//         printf("case matched %c", x);
//         break;
//     case 'b':
//         printf("case matched %c", x);

//     case 'c':
//         printf("case matched %c", x);

//     default:
//         printf("case doesn't matched %c", x);

//     }

//     return 0;
//}

// #include <stdio.h>
// int main()
// {   int a,b,c;
//     printf("Enter three numbers: \n");
//     scanf("%d%d%d",&a,&b,&c);
//     printf("a is: %d \nb is: %d \nc is: %d\n",a,b,c);
//     if(a>b && a>c)
//     {
//         printf("a is greater");
//     }
//     else if(b>a && b>c){
//         printf("b is greater");
//     }
//     else{

//         printf("c is greater");
//     }
//     return 0;

// }

//How to calculate Leap Year: 
#include <stdio.h>
int main (){
    int x;
    printf("Enter the Year: ");
    scanf("%d",&x);

    if((x %4==0) && (x %100!=0) || (x %400==0)){
        printf("%d is leap year\n",x);
    }

    else{
        printf("%d is not leap year\n",x);
    }
    return 0;
}

// #include <stdio.h>
// int main()
// {
//     int x,sum =0;
//     for (x = 1; x <= 10; x = x + 1)
//     {
//         printf("kane dhorsi: %d bar\n", x);
//     }

//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int i, sum = 0;
//     for (i = 1; i <= 20; i += 2) {
//         sum += i;
//     }
//     printf("Sum of the series 1+3+5+... up to the 20th term is: %d\n", sum);
//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int i, sum = 0;
//     for (i = 1; i <= 100; i+= 1) {
//         sum += i;
//     }
//     printf("Sum : %d\n", sum);
//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int n,sum = (n *n+n)/2;
//     printf("Sum  is: %d\n", sum);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     for (int i=10; i<=1;i--){
//         printf("ami mad jai %d\n", i);
//     }

//     return 0;
//  }

// #include <stdio.h>
// #include <math.h>
// int main()
// {
//     int sum = 0;

//     for (int i =1; i <= 5; i=i + 1)
//     {
//         sum = sum+pow(i, i);
//     }

//     printf("The sum is: %d\n", sum);

//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int i, n, product;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     for(i = 1; i <=10; i++){
//         product = n*i;
//         printf("%d*%d=%d\n", n,i,product);
//     }
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//   int n,sum;
//   printf("Enter the nth value: ");
//   scanf("%d",&n);
// sum = (n*(n + 1))/2;
// printf("%d\n",sum);
//     return 0;
// }

// #include <stdio.h>
// #include <math.h>
// int main()
// {
//   int n,x,sum;
//   printf("Enter the nth value: ");
//   scanf("%d",&n);
// x = (n*(n + 1))/2;
// sum = pow(x,2);
// printf("%d\n",sum);
//     return 0;
// }

// #include <stdio.h>
// int main(){
//     int sum=0;
//   int  i= 2;//initialisation
//     while(i<=50) //while
//     {
//       sum =sum+i;

//         i+=2; //increment
//     }
//     printf("%d\n",sum);

//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int i = 1;     // initialisation
//     while (i <= 3) // while
//     {

//         printf("Assalamu-Alaikum-%d\n", i);
//         printf("Peace form the God-%d\n", i);
//         i = i + 2;
//     }

//     return 0;
//}

// x = 1 true;
// x = 3 true;
// x = 5 false;

// #include <stdio.h>
// int main()
// {
//     int i = 20;     // initialisation
//     while (i >= 15) // while
//     {

//         printf("Assalamu-Alaikum-%d\n", i);
//         printf("Peace form the God-%d\n", i);
//         i = i - 2;
//     }

//     return 0;

//}

// #include <stdio.h>
// int main()
// {
//     int i = 1;     // initialisation
//     while (i<=5) // while
//     {
//    printf("infinity loop: %d\n", i);
//    i++;
//     }
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int i = 1;     // initialisation
//    do{
//     printf("from do while loop: %d\n",i);
//     i++;
//    }while(i<=5);

//     return 0;
// }

// At least one time execute the - do while loop

// increment or decrement

// #include <stdio.h>
// int main()
// {   int a,b,c;
//     a = 10;
//     b = a++;
//     c = ++b;
//     printf("a = %d,b = %d,c = %d",a,b,c);
//     return 0;
// }

/* -------------------------------------------------------------------------- */
/*                          start Array Basic Concept                         */
/* -------------------------------------------------------------------------- */

// int main()
// {

//     int marks[] = {10, 50, 56};

//     printf("physics : \n");
//     scanf("%d", &marks[0]);
//     printf("chemistry : \n");
//     scanf("%d", &marks[1]);
//     printf("math : \n");
//     scanf("%d", &marks[2]);

// printf("physics: %d\nChemistry: %d\nMath: %d", marks[0],marks[1],marks[2]);

//     return 0;
// }

// #include <stdio.h>
// int main()
// {

//     int numbers[] = {1, 2, 3, 4, 5};
//     float heights[] = {5.5, 6.0, 6.5, 7.0};
//     char letters[] = {'a', 'b', 'c', 'd'};

//     printf("%d\n", numbers[3]);
//     printf("%.1f\n", heights[0]);
//     printf(" %c\n", letters[3]);

//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//    int numbers[3];

//     numbers[0] =3;
//     numbers[1] =4;
//     numbers[2] =400;

//     int sum = numbers[0] + numbers[1] + numbers[2];

//     printf("previous value: %d\n", sum);

//      numbers[2] =500;
//      numbers[1]=50;

//     sum = numbers[1] * numbers[2];
//      printf("latest value: %d\n", sum);
//    return 0;
// }

// #include <stdio.h>
// int main()
// {
//    int a[]= {13,11,2,3,4,15,16,7,5};
//    a[0] = 100;
//    printf("value: %d\n",a[0]);
//    printf("value: %d\n",a[5]);
//    printf("value: %d\n",a[1]);
//    return 0;
// }

/* -------------------------------------------------------------------------- */
/*                               Array-problem-1                              */
/* -------------------------------------------------------------------------- */

// #include <stdio.h>
// int main()
// {
//     int number[10];
//     int sum = 0;
//     for (int i = 0; i < 10; i++)
//     {
//         scanf("%d", &number[i]);
//     }

//     for (int i = 0; i < 10; i++)
//     {
//         sum = sum + number[i];
//     }
//     printf("output: %d\n", sum);
//     return 0;
// }

/* -------------------------------------------------------------------------- */
/*                               Array-problem-2                              */
/* -------------------------------------------------------------------------- */

// #include <stdio.h>
// int main()
// {
//     int numbers[7]={-99,45,100,37,89,-327,245};

//     int max_number =numbers[0];

//    for(int i =1; i < 7;i++){
//     if (numbers[i] > max_number)
//     {
//         max_number = numbers[i];
//     }

//    }
//     printf("maximum value: %d\n", max_number);
//     return 0;
// }

/* -------------------------------------------------------------------------- */
/*                               Array-problem-3                              */
/* -------------------------------------------------------------------------- */
// #include <stdio.h>
// int main()
// {

//     float a[5], b[5], ab[5];
//     int i;

//     printf("Enter the a Array\n");
//     for (i = 0; i < 5; i++)
//     {
//         scanf("%f", &a[i]);
//     }
//     printf("Enter the b Array\n");
//     for (i = 0; i < 5; i++)
//     {
//         scanf("%f", &b[i]);
//     }
//     for (i = 0; i < 5; i++)
//     {
//         ab[i] = a[i] + b[i];
//     }

//     for (i = 0; i < 5; i++)
//     {
//         printf("%.2f ", ab[i]);
//     }

//     return 0;
// }

/* -------------------------------------------------------------------------- */
/*                               Array-problem-4                              */
/* -------------------------------------------------------------------------- */

// #include <stdio.h>
// int main()
// {
//     int a[5] ,   i,   even_sum = 0,  odd_sum =0;
// for ( i = 0; i < 5; i++)
// {
//     scanf("%d", &a[i]);
// }

// printf("values of Arrays: ");

// for ( i = 0; i < 5; i++)
// {
//     printf("%d", a[i]);
//     if (a[i]%2 == 0)
//     {
//         even_sum = even_sum + a[i];
//     }
//     else{
//         odd_sum = odd_sum + a[i];
//     }

// }
//  printf("\neven sum is:  %d\n",even_sum);
//  printf("odd sum is:  %d\n",odd_sum);
//     return 0;
// }

/* -------------------------------------------------------------------------- */
/*                          basic 2D Array::operator                          */
/* -------------------------------------------------------------------------- */

// #include <stdio.h>
// int main(){

//     int x[2][3] =  { 11,12,13,
//                      21,22,23};
//     printf("%d\n",x[0][1]);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int i, j;
//     int x[2][3] = {11, 52, 13,
//                    21, 22, 23};

//     for (i = 0; i < 2; i++)
//     {
//         for (j = 0; j < 3; j++)
//         {
//             printf("\n%d", x[i][j]);
//         }
//     }

//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int rows, cols, i, j;
//     float sum = 0, avg;

//     printf("Enter the number of rows and columns of the 2D array:\n");
//     scanf("%d %d", &rows, &cols);

//     int array1[rows][cols];

//     printf("Enter the elements of the 2D array:\n");
//     for (i = 0; i < rows; i++) {
//         for (j = 0; j < cols; j++) {
//             scanf("%d", &array1[i][j]);
//             sum =sum+ array1[i][j];
//         }
//     }

//     avg = sum / (rows * cols);

//     printf("The average of the 2D array is: %.2f\n", avg);

//     return 0;
// }

/* -------------------------------------------------------------------------- */
/*                              function concept                              */
/* -------------------------------------------------------------------------- */
// #include <stdio.h>

// sum function
//  int jogkor (int a, int b){
//  int sum = a+b;
//  printf("summation is: %d\n",sum);
//  return sum;
//  }

// text print function
//  void hello () {
//  printf("Hello i am inside of function\n");

// }

// even odd checker function
//  int check_even_odd (int a){

// if(a%2==0){
//  printf("%d is even\n",a);
// }
// else{
// printf("%d is odd\n",a);
// }
// }

// // C Programme start here
// int main (){

// check_even_odd(50); //call
// hello();
// jogkor(12,12);

// return 0;
// }

// C Programme end here

// #include <stdio.h>
// int profit (int x){

//  int z = x*x;
//  printf("profit %d\n", z);
//  return z;
// }

// int main (){

// profit(100);
// return 0;
// }

// /* -------------------------------------------------------------------------- */
// /*                             awesome calculator                             */
// /* -------------------------------------------------------------------------- */

// #include <stdio.h>
// float sum(float a, float b)
// {
//     return a + b;
// }
// float subtracts(float a, float b)
// {
//     return a - b;
// }
// float multiply(float a, float b)
// {
//     return a * b;
// }

// float divide(float a, float b)
// {
//     return a / b;
// }

// int main()
// {
//     float a, b;
//     printf("enter the a and b\n");
//     scanf("%f%f", &a, &b);

//     float result_sum = sum(a, b);
//     float result_subtracts = subtracts(a, b);
//     float result_multiply = multiply(a, b);
//     float result_divide = divide(a, b);
//     printf("sum: %.2f multiply: %.2f sub %.2f div %.2f", result_sum, result_multiply, result_subtracts, result_divide);

// return 0;
// }

// #include <stdio.h>
// void check_divisors( int x){

//     for(int i=1; i<=x; i++){
//         if(x%i == 0){
//             printf("%d",i);
//     }

// }
// }
// int main (){
//     check_divisors(7);
//     return 0;

// }

/* -------------------------------------------------------------------------- */
/*                              GCD __VERSION__1                              */
/* -------------------------------------------------------------------------- */
// #include <stdio.h>

// int gcd(int a, int b);
// int lcm(int a, int b);

// int main() {
//     int num1, num2;

//     printf("Enter two positive integers: ");
//     scanf("%d %d", &num1, &num2);

//     printf("GCD of %d and %d is %d\n", num1, num2, gcd(num1, num2));
//     printf("LCM of %d and %d is %d\n", num1, num2, lcm(num1, num2));

//     return 0;
// }

// int gcd(int a, int b) {
//     int temp;

//     while (b != 0) {
//         temp = b;
//         b = a % b;
//         a = temp;
//     }

//     return a;
// }

// int lcm(int a, int b) {
//     return (a * b) / gcd(a, b);
// }

/* -------------------------------------------------------------------------- */
/*                                GCD_VERSION-2                               */
/* -------------------------------------------------------------------------- */

// Q:How to calculate GCD(Greatest Common divisor) and LCM (least common multiple) in C
// Host by Mustafa Rahman
// Answer:

// #include <stdio.h>

// int main() {
//     int num1, num2, n1, n2, rem, gcd, lcm;

//     printf("Enter two numbers: ");
//     scanf("%d %d", &num1, &num2);

//     n1 = num1;
//     n2 = num2;

//     while (n2 != 0) {
//         rem = n1 % n2;
//         n1 = n2;
//         n2 = rem;
//     }

//     gcd = n1;
//     lcm = (num1 * num2) / gcd;

//     printf("GCD = %d\n", gcd);
//     printf("LCM = %d\n", lcm);

//     return 0;
// }

// GCD AND LCM BY BY FOR LOOP

// #include <stdio.h>

// int main() {
//     int num1, num2, gcd, lcm;

//     printf("Enter two numbers: ");
//     scanf("%d %d", &num1, &num2);

//     // Calculate GCD using for loop
//     for(int i = 1; i <= num1 && i <= num2; ++i) {
//         if(num1 % i == 0 && num2 % i == 0) {
//             gcd = i;
//         }
//     }

//     // Calculate LCM using the GCD
//     lcm = (num1 * num2) / gcd;

//     printf("GCD = %d\n", gcd);
//     printf("LCM = %d\n", lcm);

//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int num, i, isPrime = 1;

//     printf("Enter a positive integer: ");
//     scanf("%d", &num);

//     if (num == 1) {
//         isPrime = 0;
//     } else {
//         for (i = 2; i <= num / 2; ++i) {
//             if (num % i == 0) {
//                 isPrime = 0;
//                 break;
//             }
//         }
//     }

//     if (isPrime) {
//         printf("%d is a prime number.", num);
//     } else {
//         printf("%d is not a prime number.", num);
//     }

//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int num, i, flag = 0;

//     printf("Enter a positive integer: ");
//     scanf("%d", &num);

//     for (i = 2; i <= num/2; ++i) {
//         // condition for non-prime
//         if (num % i == 0) {
//             flag = 1;
//             break;
//         }
//     }

//     if (num == 1) {
//         printf("1 is neither prime nor composite.\n");
//     } else {
//         if (flag == 0)
//             printf("%d is a prime number.\n", num);
//         else
//             printf("%d is not a prime number.\n", num);
//     }

//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int n, i;
//     long long int factorial;
//     printf("Enter the positive number");
//     scanf("%d", &n);
//     factorial = 1;
//     if (n >0)
//     {

//       for (i = 1; i <= n; i++)
//         {
//             factorial = factorial * i;
//         }
//         printf("factorial : %llu\n", factorial);
//     }
//     else
//     {

//         printf("Doesn't exist negative factorial.\n");
//     }
//     return 0;
// }

// Question: how to get factorial in c programs
// Host by Mustafa Rahman
// Answer:

// #include <stdio.h>
// int main()
// {
//    int i, n;
//    long long int factorial;
//    factorial = 1;
//    printf("Enter the positive number");
//    scanf("%d", &n);
//    if (n < 0)
//    {
//       printf("doesn't exist negative factorial.");
//    }
//    else
//    {
//       for (i = 1; i <= n; i++)
//       {
//          factorial = factorial * i;
//          printf("factorial = %llu\n", factorial);
//       }
//       return 0;
//    }
// }



// Question: How to calculate Prime numbers (মৌলিক সংখ্যা নির্ণয়):
// Host by Mustafa Rahman
// Answer:
#include <stdio.h>
int main(){
    int n, i, isPrime = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n == 1){
        printf("1 is neither a prime nor a composite number.");
        isPrime = 0;
    }
    else{
        for (i = 2; i <= n / 2; ++i){
            if (n % i == 0){
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime == 1 && n != 1){
        printf("%d is a prime number.", n);
    }
    else if (n != 1){
        printf("%d is not a prime number.", n);
    }

    return 0;
}




        // #include <stdio.h>

        // int main() {
        //     int x, mother_age, father_age, son_age,total_age;

        //     printf("Enter the age of the son: ");
        //     scanf("%d", &x);

        //     son_age = x;
        //     mother_age = 3 *son_age;
        //     father_age = mother_age + 5;
        //    total_age = father_age + son_age+mother_age;
        //    printf("Total age: %d\n", total_age);

        //     return 0;
        // }

        // #include <stdio.h>

        // int main() {
        //    int i = 0;

        //    loop:
        //    if (i < 10) {
        //       printf("%d ", i);
        //       i++;
        //       goto loop;
        //    }

        //    return 0;
        // }

        // //Question: 10+20+30+40+.....+100 sum the equation with if goto statement:
        // //Host by Mustafa Rahman
        // //Answer:

        // #include <stdio.h>

        // int main() {
        //    int sum = 0;
        //    int i = 10;

        //    label_sum:
        //         sum = sum +i;
        //         i+=10;

        //   if(i<=100)

        //     goto label_sum;

        //   printf("%d", sum);

        //    return 0;
        // }

        // //Question: 10+20+30+40+.....+100 sum the expression with for loop:
        // //Host by Mustafa Rahman
        // //Answer:
        // #include <stdio.h>

        // int main() {
        //    int sum = 0;

        //    for (int i = 10; i <= 100; i= i+10) {
        //       sum += i;
        //    }

        //    printf("%d", sum);

        //    return 0;
        // }

        // //Assign array value and print sum of array elements:
        // #include <stdio.h>

        // int main() {
        //   int i, a, b, c;
        //   int array[3];
        //   int sum = 0;

        //   printf("Enter the three numbers\n");
        //   scanf("%d%d%d", &a, &b, &c);
        //   array[0] = a;
        //   array[1] = b;
        //   array[2] = c;

        //   for (i = 0; i <= 2; i++) {
        //     sum = sum + array[i];
        //   }

        //   printf("Sum is %d\n", sum);

        //   return 0;
        // }
