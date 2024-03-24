#include <iostream>
#include <string>

int main() {
    /*
        Strings are an objects that is used to represent a sequence of characters surrounded by double quotes.

        String provides many advantages compared to conventional C-Style Strings such as: Dynamic-Size, member-functions etc.
    */

   /*Three ways to declared and initialize a strings*/
   std::cout << "\nThree ways to declared and initialize a strings" << std::endl;

   // Using a string literals
   std::string name("Ali Ganteng");

   // Using an assignment operator
   std::string religion = "My religion is islam";

   // Using a constructor with a number and a character
   // This will create a sequence of characters 'g' 5 times
   std::string str(5,'A');

   std::cout << "Name = " << name << std::endl;
   std::cout << "Religion = " << religion << std::endl;
   std::cout << "Creating a string from constructor = " << str << std::endl;

   /*Modify, accessing, and compares a string*/
   std::cout << "\nModify, accessing, and compares a string" << std::endl;
   std::string hello = "Hello";

   // Accessing a string index
   std::cout << "Accessing the first index of a string hello = " << hello[0] << std::endl;
   std::cout << "Accessing the last index of a string hello using at() method = " << hello.at(4) << std::endl;

   // Modify the string
   hello.at(0) = 'G';

   std::cout << "Hello after being changed = " << hello << std::endl;
   std::cout << "Hello after added space at the last index = " << hello << std::endl;

   // Compares strings
   std::string compare = "Hello";

   if (hello == compare) {
    std::cout << "The strings are equal" << std::endl;
   }
   else {
    std::cout << "No the strings are not equal" << std::endl;
   }
   /*Find a substring in a string*/
   
   std::cout << "\nFind a substring in a string" << std::endl;

   std::size_t pos = name.find("Ganteng");

   if (pos != std::string::npos) {
    std::cout << "Found ganteng at index = " << pos << std::endl;
   }
   else {
    std::cout << "Ganteng was not found in " << name << std::endl;
   }

   // Replace a substring in a string
   name.replace(pos,8,"Cakep");
   std::cout << name << std::endl;

    std::cin.get();
    return 0;
}