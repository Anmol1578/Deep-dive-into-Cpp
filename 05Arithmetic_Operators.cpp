#include <iostream>

int main()
{

    // Arithemetic operators = ( +  - * / % )

    int students = 20;

    /* All three work same increment by 1 or any values

    students = students + 1;
    students+=1;
    students++;    // increment operator       */

    /*  Work Same decrement by 1 or any values
     students = students - 1;
     students-=1;
     students--;    // decrement operator      */

    /*  Multiplication Method
     students = students * 2 ;
     students*=2;             */

    /*  Divide Method
       students = students / 2 ;
       students/=2;    */

    /* Modulas Operator
    int remainder = students % 3;
    std::cout << remainder;
                                                */

    /* Precedence
     // parenthesis
     // multiplication & division
     // addition & subtraction

     int students = 6 - 5 + 4 * 3 / 2;

    */


    std::cout << students;

    return 0;
}