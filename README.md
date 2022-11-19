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
### Missing Numbe
---
### Problem Statement

Given the sum of four numbers and three of those numbers, find the missing number. All four numbers are positive integers.

### Input Format

- The first line will contain __T__, number of test cases.
- For every test case, the input will contain one integer __S__ (the sum of the four numbers), __A, B, C__ (three of those four numbers).
### Constraints
  
1. 0 < __T__ <= 100  
2. 0 <= __S, A, B, C__ <= 2^32
### Output Format

Print the missing number. Don't forget to print a new line after printing the value.
### Sample Input 0
  
1  
10 1 2 3  

### Sample Output 0

4
### Out of Team
---
### Problem Statement


Alien Cricket Board has decided to throw out a player out of the team if his performance is very bad against a match against Bangladesh team. If any player is not able to make at least ___K___ runs he will be out of the team. You will be given ___N___, the number of players and the runs that the players were able to take and ___K___, the minimum run that every player needs to take to be in the team. Can you tell the number of players that will be out of the team?

### Input Format

- First line will contain ___N___ and ___K___  
- Second line will contain ___N___ values, the runs that the players have taken
### Constraints

1 <= ___N___ <= 100  
0 <= ___K___ <= 100  
0 <= ___Run___ <= 100  

### Output Format

Output the number of players that will be thown out of the Alien team  
Sample Input 0  

5 10  
100 25 0 9 10  

Sample Output 0  

2  
Explanation 0  

___As 2 player could not score at lease 10 runs, the answer is 2.___
### Different Pattern
---
### Problem Statement

We have learned how to print patters in C language. This time you will have to print a different type of pattern of numbers. Look at the output to understand the pattern. You will have to write a C program that will take an integer number and creates similar patters for the corresponding inputs.

### Input Format

You will be given a positive integer ___N___ as input.  

### Constraints

1 <= ___N___ <= 20  

Output Format  

Output the pattern  

Sample Input 0  

5  

Sample Output 0  

1  
2 1  
3 2 1  
4 3 2 1  
5 4 3 2 1  

Sample Input 1  
  
4  

Sample Output 1
  
1
2 1
3 2 1
4 3 2 1
### Highest Mark
---
### Problem Statement

There are ___N___ students in a class. Recently they got their Math course marks. One of them got the highest marks. So now they want to know how much more marks they need to get the highest mark. Can you calculate for every student what is the difference between their marks and the highest marks and print them!

### Input Format

1. First line will contain ___N___
2. Second line will contain the marks of ___N___ students

### Constraints
 
1 <= ___N___ <= 100  
0 <= ___Marks___ <= 100  

Output Format  

Output the difference between the marks of any student and highest marks  

Sample Input 0  

5  
15 25 50 24 48  

Sample Output 0  
  
35 25 0 26 2
### Bablu and Phone
---
### Problem Statement

One day Bablu went to the supermarket to buy a new phone. He was eagerly waiting for the launch of the Alien phone. It has a 15000 mAh battery. Finally he bought it! The salesman told him that, if the charge is ___less than 60%__ then it will ___take 1 minute___ to charge for ___every 1%___. If the charge is ___less than 80%___ then it will ___take 2 minute___ to charge for ___every 1%___. And finally ___from 80%___ it will take ___3 minutes to charge 1%___.
  
Now he wants to calculate if the current charge is ___X%___ then how many minutes it will take to charge completely. Can you calculate for him?

### Input Format

- The first line will contain an integer ___T___, the number of test case.
- For every test case, one line will contain an integer ___X___, current percentage of charge in the battery.% sign will also given as input
### Constraints

- 1 <= T <=101
- 0 <= X <= 100
### Output Format

Output a single line for every test case, how many minutes it will take to charge completely and print "minutes" after it. Don't forget to put a new line after it.

Sample Input 0  

5  
35%  
88%  
0%  
100%  
68%  

Sample Output 0  

125 minutes  
36 minutes  
160 minutes  
0 minutes  
84 minutes  

Explanation 0  

___For the first test case, from 35% to 60% it will take 25 minutes. From 60% to 80% it will take 40 minutes and from 80% to 100% it will take 60 minutes. In total 25+40+60=125 minutes.___
### Secret Code
---
### Problem Statement

Noman is a social worker. He wants to keep his documents secret. That's why he has bought a safe with him in his house. Now he wants to put a secret code into the safe. He was thinking that a number N would be a good secret code if no other number except 1 and N can divide that number. So, he was thinking of some numbers, can you help him to find the one he was looking for?

### Input Format

1. The first line will consist of ___T___, the number of test cases.
2. The next ___T___ lines will contain a number ___N___, the secret code that Noman was thinking.
### Constraints
   
- 0 < ___T___ <= 100  
- 0 < ___N___ <= 10^5
### Output Format

Ouput "Yes" if the number could be a secret code, otherwise "No" without the quotation. Put a new line after
  
Sample Input 0
  

5  
73  
35  
92  
1  
60  

Sample Output 0
  
Yes  
No  
No  
No  
No
### Divide Them
---
### Problem Statement

English teacher Mr. Rahim of class Ten asked for the homeworks of the students. Class captain has collected all the notebooks and put them in table. But the class captain put the notebooks of girls first, and then the notebooks of the boys. So Mr. Rahim asked the captain to keep the boy's notebooks to the left side and then the girl's notebooks. If the last index (index starts from 1) of a girl's notebook is K then can you print them in the right order? Note: If K is 0, that means there is no girl's notebook.

### Input Format

1. First line will contain N, the number of students in that class
2. Second line will contain Roll of the students
3. Third line will contain K, the last index of a girl's notebook

### Constraints

- 1 <= ___N___ <= 20
- 1 <= ___Roll___ <= 20
- 0 <= ___K___ <= 20

### Output Format

Output the rolls of the students in the right order that class teacher wants.  

Sample Input 0  

10  
2 4 5 1 6 12 10 14 3 19  
5  

Sample Output 0  

12 10 14 3 19 2 4 5 1 6
### Hand Shakes
---
### Problem Statement

Phitron planned to throw a party for the students. In the party we found that N students are present. However, as a formality we asked each student to shake hands with each other student. You will have to count the number of unique hand-shakes in that party. N will be an input in your C program and the total number of hand-shakes will be the output. Look at the sample input and outputs for clarification
  
  
For example, if N=4 then total unique handshakes will be 6.  


- 1 with 2
- 1 with 3
- 1 with 4
- 2 with 3
- 2 with 4
- 3 with 4

![image](https://user-images.githubusercontent.com/24230435/200128096-09cfecff-2cb6-4b3f-bbc2-89fcf9a661c3.png)

### Input Format

1. You will be given a positive integer ___N___

### Constraints

- 1 <= ___N___ <= 10^9

### Output Format

Output the count of unique hand shakes  

Sample Input 0  

5  

Sample Output 0  

10  

Sample Input 1  

17  

Sample Output 1  

136

# Mid Exam 2
---
### Operator!!
---
### Problem Statement

You are given a string ___S___ consisting only ___+(Addition),*(Multiplication).___ The next line will contain two positive values.  

Now, Calculate the sum of every operations. See the explanation for more clarification.  

### Input Format  

First line contains a string __S___, consisting only __+(Addition),*(Multiplication)___ operator.  
The second line will contain two positive integers ___a___ and ___b___  

### Constraints

- ___1<= |S| <= 20___, where ___|S|___ means the length of ___S___.
- ___1<= a, b <= 50___

### Output Format

Print the summation which were perform based on String ___S___.  

### Sample Input 0

+*  
5 10  

### Sample Output 0

65

### Explanation 0

- when S[i] = '+',Then a+b = 5 + 10 = 15 and sum = 15
- when S[i] = '*',Then a*b = 5 * 10 = 50 and sum = 15 + 50 = 65

### Sample Input 1

+***+  
2 1  

### Sample Output 1

12

