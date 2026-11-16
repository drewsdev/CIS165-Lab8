### **CIS-165-W198.2026FA**

Plan your solution, write the program, test the results, and explain the code you submit. AI help is optional. The same 100-point rubric applies whether or not you use AI.

## **Pre-Planning**

geometry.cpp

Start

declare PI = 3.14159

declare choice

display calculator

get input from user choice =

if choice = 1

  get input for radius from user

  check if value is negative

  calculate area of a circle

if choice = 2

  get input for length, width from user

  check if value is negative

  calculate area of a rectangle

if choice = 3

  get input for base, height

  check if value is negative

  calculate area of a triangle

if choice = 4

  end program

else

  error (value not accepted)

  end program

End

## **Run the Program**

Compile and run each program separately

Use g++

```
g++ -std=c++17 -Wall -Wextra geometry.cpp -o geometry
```

## **Testing**

| **Program** | **Values Used** | **Expected Result Before Running** | **Actual Output** | **Match or Fix** |
| --- | --- | --- | --- | --- |
| geometry.cpp | Choice 1, Radius 2 | 12.5664 | 12.5664 | Match |
| geometry.cpp | Choice 2, Length 3, Width 4.5 | 13.5 | 13.5 | Match |
| geometry.cpp | Choice 3, Base 5, Height 3 | 7.5 | 7.5 | Match |
| geometry.cpp | Choice 4 | Ends Program | Ends Program | Match |
| geometry.cpp | Choice 0 | Error: Not 1-4 | Error: Not 1-4 | Match |
| geometry.cpp | Choice 5 | Error: Not 1-4 | Error: Not 1-4 | Match |
| geometry.cpp | Choice 1, Radius -1 | Error: Negative | Error: Negative | Match |
| geometry.cpp | Choice 2, Length -1, Width 5 | Error: Negative | Error: Negative | Match |
| geometry.cpp | Choice 2, Length 5, Width -1 | Error: Negative | Error: Negative | Match |
| geometry.cpp | Choice 3, Base -1,  Height 5 | Error: Negative | Error: Negative | Match |
| geometry.cpp | Choice 3, Base 5, Height -1 | Error: Negative | Error: Negative | Match |
| geometry.cpp | Choice 1, Radius 0 | 0 | 0 | Match |

### **Personal Testing**

| **Program** | **Values Used** | **Expected Result Before Running** | **Actual Output** | **Match or Fix** |
| --- | --- | --- | --- | --- |
| geometry.cpp | Choice 2, Length 5, Width 7 | 35 | 35 | Match |

## **Explanation**

How does your selection logic send each choice to the right calculation?

*   My selection logic is using "choice == x" in an if/else statement. If the inputted value matches what my program can do, it advances to what the user wants and finishes the program. If an invalid number is inputted, the else statement will produce an error message and end the program.

Why is radius \* radius correct while radius ^ 2 is not?

*   C++ does not use ^ as an exponenet operator, but uses it as another operator. The two ways to properly use the area of a circle calculation would be to use radius \* radius or to use #include \<cmath> and use the pow function.

Why does the triangle calculation use 0.5 rather than integer division 1 / 2?

*   0.5 is a floating-point value, while the expression 1 / 2 uses two integers. C++ would perform integer divison and produce 0, not 0.5. Storing that result in a double does not restore the lost fraction.

Where do you check negative dimensions, and how do you handle zero and choice 4?

*   For negative dimensions, I have set up if/else statements after the user inputs their values to make sure the values are able to be used to calculate the area.
    *   if (radius \< 0)
    *   if (length \< 0 || width \< 0)
    *   if (base \< 0 || height \< 0)
*   Zero is allowed to be used as a value as the if/else statements  use \< 0 instead of \<= 0. It would result in a 0 area.
*   Choice 4 executes return 0, and instantly ends the program without asking for dimensions.