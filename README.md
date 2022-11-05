# Phitron C
## Theory Exam 01
### Instructor: Farhan Feroz
#### [Please follow the input and output formats according the sample inputs and outputs written with every questions] 
1. Update the following code such that it swaps the contents of two two variables. You can only write code inside the two comments. Do not modify anything else. The printf function is supposed to print “13 and 5”. So basically the value must be swapped but you can not assign 13 directly to a and 5 directly to b. You can not use other numbers as well. But you can declare an extra variable if you need.  

  int a=5, b=13;  
  //Write code here  
  //End of code  
  printf(“%d and %d” , a, b); 
2. You need to take 4 distinct integer as input. Print the largest and smallest among them. Distinct means all of them are separate integers. None of them is equal to any other of them.  

  Sample Input:  
  123 435 34 612  
  Sample Output:  
  Largest = 612  
  Smallest = 34
3. You will be given a number as input. You will have to find the number of digits in that number. You will have to use loops to solve this problem as the input can have any number of digits. ___[Hint: Use the modulus operator. You can extract last digit from any number by using %10 operation on the number.]___  

  For example,  
  Sample Input:  
  2346167  
  Sample Output:  
  7 digits  
  Since the input had 7 digits so the output is 7. ___Please use long long int as data type for this problem.___
4. This time you need to find the sum of the digits of the input. So look at the sample input output.  

  Sample Input:  
  2346167  
  Sample Output:  
  29 
  ___Explanation: Since, the sum of the digits is 2+3+4+6+1+6+7 = 29. So the output is 29.___
5. Let us create a new version of weird algorithm. You will be given an integer, n as input. If n is even, divide it by two. If n is odd, then subtract 1 from n. Eventually it will end at 1. So print the whole sequence. For example,  

  Sample Input:  
  123  
  Sample Output:  
  123, 122, 61, 60, 30, 15, 14, 7, 6, 3, 2, 1  
  
  ___Follow the whole output format(each numbers separated by commas).___
6. Write a C program that will take two integers as input from you. And then it will show us in output whether any one of those two numbers is divisible by the other or not. 

  Sample Input 1:  
  Enter the first number: 13  
  Enter the second number: 39  
  
  Sample Output 1:  
  The second number is divisible by the first number.  
  
  Sample Input 2:  
  Enter the first number: 38  
  Enter the second number: 13  
  
  Sample Output 2:  
  None of them are divisible by the other. 
7. Take two integers as input and print their GCD as the output. We know, GCD of two numbers is the greatest common divisor of two numbers. ___You can use the logic from Question no. 6 to solve this problem.___  

  Sample Input 1:  
  12 18  
  Sample Output 1:  
  The GCD of 12 and 18 is 6.  
  
  Explanation:  
    ___Since 6 is the largest number which divides both 12 and 18 so 6 is output.___

8. Take two integers as input and print their LCM as the output. We know, LCM of two numbers is the least common multiple of two numbers. ___You can use the logic from Question no. 6 to solve this problem.___  

  Sample Input 1:  
  12 18  
  Sample Output 1:  
  The LCM of 12 and 18 is 36.  
  
  Explanation:  
    ___Since 36 is the least number which is divisible by both 12 and 18 so 36 is the output.___
9. Write a C program to print all the factors of a number taken as input.

  Sample Input 1:  
  12  
  Sample Output 1:  
  The factors of 12 are: 1, 2, 3, 4, 6, 12.  
  Sample Input 2:  
  39  
  
  Sample Output 2:  
  The factors of 39 are: 1, 3, 13, 39. 
10. Primality Testing is one of the most common and the most important problem in the world of Number Theory and also in basic programming. In this problem you will be given an integer as input and you need to find out whether the number is prime or not. Just for your information, prime numbers are the numbers that have only two factors which are 1 and themselves. For example, 37 is a prime number because it has no factors other than 1 and 37. On the other hand 39 is not a prime number called composite number since 39 has factors other than 1 and 39 such as 3 and 13. 

  Sample Input 1:  
  12  
  Sample Output 1:  
  Composite  
  Sample Input 2:  
  1009  
  
  Sample Output 2:  
  Prime
## Assignment 2
### Problem Statement

Given the sum of four numbers and three of those numbers, find the missing number. All four numbers are positive integers.

###bbInput Format

The first line will contain T, number of test cases.
For every test case, the input will contain one integer S (the sum of the four numbers), A, B, C (three of those four numbers).
### Constraints

0 < T <= 100
0 <= S, A, B, C <= 2^32
### Output Format

Print the missing number. Don't forget to print a new line after printing the value.
### Sample Input 0

1
10 1 2 3
### Sample Output 0

4
