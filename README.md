# Project-5-Program-Design
Project 5, Program Design
1. (50 points) A store has decided to provide discount codes to university students during a
promotional event. University students can submit their request for their unique discount codes
(associated with their email address) by entering their university email address on the store’s
website. Write a program to verify if the domain name of an email address ends with .edu. The
program should display a message that indicates whether it is a valid email address for the
discount code. Example input/output:
Input: lily23@yahoo.com
Output: Not eligible for discount code
Input: joe1997@mail.usf.edu
Output: Verification successful
Input: vpatel@fsu.edu
Output: Verification successful
1) Name your program validate_email.c.
2) Your program should include the following function:
int validate(char *s1);
The validate function expects s1 to point to a string containing the input for an email
address as a string. If the email address ends with .edu, the function returns 1 and returns 0
otherwise. The validate function should use pointer arithmetic (instead of array
subscripting). In other words, eliminate the loop index variables and all use of the [] operator in
the function.
3) Assume input is no longer than 1000 characters. Assume the input contains no more than one
qualifying web address.
4) String library functions are NOT allowed for this program. If you use a string library function, you
will NOT receive the credit for the validate function part of the program.
5) To read a line of text, use the read_line function (the pointer version) in the lecture notes.
2. (50 points) Command-line arguments, modify project 2, problem 2 (translating phone number)
so the phone number is a command line argument. Example input/output:
./a.out 727-PET-CARE
Output: 727-738-2273
./a.out
Output: Incorrect number of arguments. Usage: ./a.out phoneNumber
./a.out 727-PET-CARE 813-CAR-WASH
Output: Incorrect number of arguments. Usage: ./a.out phoneNumber
1) Name your program command_phone.c.
2) The program should include the following function:
void translate(char *word, char *phone_number);
The function expects word to point to a string containing the phone number to be translated;
phone_number represents the pointer pointing to the string storing the translated phone
number. For example, if the word is 813-TAKE-OUT, the function will store 813-825-
3688 pointed by phone_number.
3) The program should check if the correct number of arguments are entered on the command
line. If an incorrect number of arguments are entered, the program should display an
message.
4) Main function displays the output.
Before you submit
1. Compile both programs with –Wall. –Wall shows the warnings by the compiler. Be sure it
compiles on student cluster with no errors and no warnings.
gcc –Wall validate_email.c
gcc –Wall command_phone.c
2. Be sure your Unix source file is read & write protected. Change Unix file permission on Unix:
chmod 600 validate_email.c
chmod 600 command_phone.c
3. Test your programs with the shell scripts on Unix:
chmod +x try_email
./try_email
chmod +x try_command_phone
./try_command_phone
4. Submit validate_email.c and command_phone.c on Canvas.
Grading
Total points: 100 (50 points problem #1, 50 points problem #2)
1. A program that does not compile will result in a zero.
2. Runtime error and compilation warning 5%
3. Commenting and style 15%
4. Functionality 80%
-Functions implemented as required
Programming Style Guidelines
The major purpose of programming style guidelines is to make programs easy to read and understand.
Good programming style helps make it possible for a person knowledgeable in the application area to
quickly read a program and understand how it works.
1. Your program should begin with a comment that briefly summarizes what it does. This
comment should also include your name.
2. In most cases, a function should have a brief comment above its definition describing what it
does. Other than that, comments should be written only needed in order for a reader to
understand what is happening.
3. Information to include in the comment for a function: name of the function, purpose of the
function, meaning of each parameter, description of return value (if any), description of side
effects (if any, such as modifying external variables)
4. Variable names and function names should be sufficiently descriptive that a knowledgeable
reader can easily understand what the variable means and what the function does. If this is not
possible, comments should be added to make the meaning clear.
5. Use consistent indentation to emphasize block structure.
6. Full line comments inside function bodies should conform to the indentation of the code where
they appear.
7. Macro definitions (#define) should be used for defining symbolic names for numeric constants.
For example: #define PI 3.141592
8. Use names of moderate length for variables. Most names should be between 2 and 12 letters
long.
9. Use underscores to make compound names easier to read: tot_vol or total_volumn is
clearer than totalvolumn.
