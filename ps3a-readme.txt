/**********************************************************************
 *  N-Body Simulation ps3a-readme.txt template
 **********************************************************************/

Name: Ronney Sanchez
OS: Windows
Text Editor: OS Boxes
Hours to complete assignment: 5 hours

/**********************************************************************
 *  Briefly discuss the assignment itself and what you accomplished.
 **********************************************************************/
 This assignment is a body simulation of the inner planets of our solar
system. This assignment sets up the display of the sun with the 4 inner
planets lined up to it. I accomplished in reading the text file correctly
with the getline and input streams. I also accomplished in setting up
the scale for the universe. Since the universe is very big, I had to divide the
size into a smaller number for the SFML window.

I was happy that I was able to use smart pointers to access my planet images
from their files because without smart pointers, the SFML window just displays
white boxes because the reference from the texture of the file has been
misplaced. Smart pointer takes care of those reference textures. I also
accomplished in using shared pointers correctly.

  /**********************************************************************
 *  Discuss one or more key algorithms, data structures, or 
 *  OO designs that were central to the assignment.
 **********************************************************************/
One key algorithm that was central to the assignment is the use of smart
pointers. We needed smart pointers to represent each celestial bodies of
each planets and reference the textures of each planets.

Another key algorithm is using image, texture, and sprite in the Body
class. We need those features to represents each of the planets. Also the
position vectors were the important piece. It sets up each of the planets
position to the right location of the window.

/**********************************************************************
 *  Briefly explain the workings of the features you implemented.
 *  Include code excerpts.
 **********************************************************************/
For my draw function in my Body class, I targeted my sprite with the states to
display the planets drawing in the window. 
I overloaded the input stream operator to take every value for my position, 
velocity, mass, and filename, and store it to my input variable. I then 
return my input variable to the user. I basically reads each row from the file.

My class does the right function for any arbitrary number of object within the
universe file.

For my scaling, I took the size of the window and divided by a big e+ constant
to take any arbitrary size and shrink it to an average window size.

For the use of smart pointers, I used a vector of shared pointers of Body
objects. I stored each shared pointers to the objects in a vector and used it
for my SFML loop in a for loop for vector element accessing.

/**********************************************************************
 *  Did you complete the whole assignment?
 *  Successfully or not? 
 *  Indicate which parts you think are working, and describe
 *    how you know that they're working.
 **********************************************************************/
Yes, I complete the whole assignment successfully. My SFML window displays
the universe correctly as mentioned in the assignment sheet. My smart pointers
to the celestial bodies does the right function, my Body class do the right
thing. I don't think that I have anything broken in this program.

/**********************************************************************
 *  List whatever help (if any) you received from the instructor,
 *  classmates, or anyone else.
 **********************************************************************/
I received help from a classmate. Patrick Fuller helped me try to read a
line of text from a file by using getline and ifstream. He showed me the
mechanics of using this input stream from a file and I does what I want it to
do therefore I started using it to read from the universe file.

Beside with the help of file reading, I did everything else by myself.
/**********************************************************************
 *  Describe any serious problems you encountered.                    
 **********************************************************************/
The problem I encountered with was that earlier, I was not able to display
the planets to my SFML window. It showed up as white boxes. The reason was that
the texture of those body object lost its reference when it was re-positioned.

At that time I did not use smart poiners, but I figured out that smart
pointers will fix the issue because smart pointers always keeps the reference of
the body texture in place with the re-positioning. I then used smart pointers
and my planets have been finally displayed.
/**********************************************************************
 *  List any other comments here.                                     
 **********************************************************************/
This assignment was more commplicated than the previous assignment. It
involved alot of thinking to the implementation. Also there are numerous
parts to this assignment.
