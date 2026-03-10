#include <iostream>

#include <vector>

#include <string>
 
using namespace std;
 
/*

---------------------------------------

PART 1 — Variables and Arithmetic

---------------------------------------

*/
 
int addNumbers(int a, int b)

{

      // TODO

    // Return the sum of a and b

    return a + b;

}
 
 
/*

---------------------------------------

PART 2 — Loops

---------------------------------------

*/
 
int sumUpToN(int n)

{

    int num = 0;

    for (int i = 0; i <= n ; i++){

        num += i;

    }

    return num;

    // TODO

    // Using a loop calculate the sum

    // 1 + 2 + 3 + ... + n

}
 
 
/*

---------------------------------------

PART 3 — Vectors

---------------------------------------

*/
 
int findMaximum(vector<int> numbers)

{

    int BiggestNum = 0;

    for(int number : numbers){

        if (number > BiggestNum){

            BiggestNum = number;

        }

    }

    return BiggestNum;

    // TODO

    // Return the largest number in the vector

}
 
 
/*

---------------------------------------

PART 4 — Strings

---------------------------------------

*/
 
string reverseString(string text)

{

    string reversedString = "";

    for (int i = text.length() -1 ; i >= 0 ; i--){

        reversedString += text[i];

    }

    return reversedString;

    // TODO

    // Return the reversed version of the string

}
 
 
/*

---------------------------------------

PART 5 — Simple Class

---------------------------------------

*/
 
class Student

{

private:

    string name;

    int grade;
 
public:

Student(string Name,int Grade){

    name = Name;

    grade = Grade;

}

    // TODO

    // Create a constructor that receives

    // name and grade
 


    // TODO

    // Create a function printInfo()

    // that prints:

    // Name: <name>

    // Grade: <grade>

    void printInfo(){

        std::cout << "Name: " << name << std::endl;

        std::cout << "Grade: " << grade;

    }
 
};
 
 
/*

---------------------------------------

MAIN FUNCTION

---------------------------------------

*/
 
int main()

{

    cout << "C++ Review Lab\n";
 
    /*

    PART 1 TEST

    */
 
    cout << "Sum of 4 + 5 = "
<< addNumbers(4,5)
<< endl;
 
    /*

    PART 2 TEST

    */
 
    cout << "Sum up to 10 = "
<< sumUpToN(10)
<< endl;
 


    /*

    PART 3 TEST

    */
 
    vector<int> numbers = {3,7,2,9,5};
 
    cout << "Maximum value = "
<< findMaximum(numbers)
<< endl;
 


    /*

    PART 4 TEST

    */
 
    cout << "Reverse of hello = "
<< reverseString("hello")
<< endl;
 


    /*

    PART 5 TEST

    */
 
    Student s("Alice", 90);
 
    s.printInfo();
 


    return 0;

}
 
