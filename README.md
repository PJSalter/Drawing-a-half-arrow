# Drawing-a-half-arrow

Drawing a Half Arrow
This C++ program generates a downwards-facing arrow composed of a rectangle (arrow base) and a right triangle (arrow head). The program allows users to specify the dimensions of the arrow base height, arrow base width, and arrow head width. Below are the step-by-step instructions and example usage.

# Instructions

1. Output Arrow Base Height
   The program will prompt you to enter the height of the arrow base and output the arrow base with the specified height.

```
Enter arrow base height:
5
```

```
**
**
**
**
**
```

2. Output Arrow Base Width
   Modify the program to accept the width of the arrow base and output the arrow base with the specified width. Use a nested loop to draw the asterisks ('\*').

```
Enter arrow base width:
3

```

```
***
***
***

```

3. Output Arrow Head Width
   Modify the program to accept the width of the arrow head and output the arrow head with the specified width. Use a nested loop to draw the asterisks ('\*').

```
Enter arrow head width:
4

```

```
****
***
**
*

```

4. Validate Arrow Head Width
   The program will ensure that the arrow head width is larger than the arrow base width. If it's not, it will continue prompting you for a valid arrow head width until you provide one.

```
Enter arrow head width:
2

```

```
Invalid arrow head width. Please enter a width larger than the arrow base width:
4

```

```
****
***
**
*

```

How to Use

1. Compile the program using a C++ compiler (e.g., g++).

```
g++ main.cpp -o main

```

2. Run the program.

```
./main

```

3. Follow the on-screen prompts to specify the arrow base height, width, and arrow head width.

# Example

```
Enter arrow base height:
5
Enter arrow base width:
2
Enter arrow head width:
4

```

```
**
**
**
**
**
****
***
**
*

```
