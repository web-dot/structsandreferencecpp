#include <iostream>

using namespace std;

int main()
{
    /*
        C++ Structures:
        Structures also called structs are a way to group several related variables into
        one place. Each variable in a struct is called a "member" of the struct.

        unlike an array, a struct can contain many different data types(int, string, bool, etc)

    */

    /*
        Create a struct:
        To create a struct use the struct keyword, and declare each of the members inside
        curly braces.

        After the declaration, specify, the name of the structure variable.
    */

    struct{                 //declaration
        int  myNum;         //member
        string myString;    //member
    }myStructure;           //Structure variable

    //Assign values to members of myStructure
    myStructure.myNum = 1;
    myStructure.myString = "hello";

    //access members of myStructure
    cout << myStructure.myNum << endl;
    cout << myStructure.myString << endl;

    //one structure in many variables
    struct{
        int myNum;
        int myString;
    }myStruct1, myStruct2, myStruct3; //multiple structure variables


    /*
        A structure can be used for more than one variable
    */

    struct{
        string name;
        string role;
        int age;
    }student, faculty;

    //put data in first structure
    student.name = "ramu";
    student.role = "student";
    student.age = 17;

    //put data in the second structure
    faculty.name = "ramesh";
    faculty.role = "faculty";
    faculty.age = 25;

    //access the structure members
    cout << student.name << " " << student.role << " " << student.age << endl;
    cout << faculty.name << " " << faculty.role << " " << faculty.age << endl;

    /*
        Named Structures:
        By giving a name to the structure, you can treat it as data type. This means that
        you can create variables with this structure anywhere in the program at an time.

        To put a named structure, put the name of the structure right after the "struct"
        keyword
    */

    struct myDataType{ // This structure is named myDataType
        int myNum;
        string myString;
    };


    //To declare a variable of type of the struct use the name as the type of the variable
    myDataType myVar;

    //declare a structure named tree;
    struct tree{
        string sciName;
        int height;
    };

    //create a tree structure and store in neemTree
    tree neemTree;
    neemTree.sciName = "Azadirachta-indica";
    neemTree.height = 30;

    //create another tree structure and store in redwoodTree
    tree redwoodTree;
    redwoodTree.sciName = "Sequoia-sempervirens";
    redwoodTree.height = 400;

    //access and print the structure members
    cout << neemTree.sciName << " " << neemTree.height << endl;
    cout << redwoodTree.sciName << " " << redwoodTree.height << endl;


    /*
        C++ References:
        A reference variable is a reference to a existing variable and it is created
        with the '&' operator.
    */

    string food = "palak-paneer";   //food variable
    string &meal = food;            //reference to food

    //we can use either ths variable name food or the reference name meal to refer to
    //the food variable.

    cout << food << endl;   // prints palak-paneer
    cout << meal << endl;   // prints palak-paneer


    /*
        C++ Memory Address:
        In the previous example the '&' operator was used to create a reference variable.
        But it can also be used to get a memory address of a variable; which is the location
        of where the variable is stored in the computer.

        When a variable is created in C++, a memory address is assigned to the variable.
        And when we assign a value to the variable, it is stored in the memory address.

        To access it use the '&' operator, and the result will represent where the variable
        is stored.

    */
    string lunch = "pizza";
    cout << &lunch << endl; // 0x61fc0

    /*
        why is it useful to know memory address?
        references and pointers are important in C++, because they give you the ability
        to manipulate tha data in computers memory - which can reduce code and improve
        the performance.
    */





}


