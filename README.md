# Project-1
Single Row BINGO?

The goal of this project is to create a Single Row BINGO "card" and to compare the "card" with randomly generated BINGO "calls." BINGO is typically played with a 5x5 grid, where the first column is labeled 'B', the second 'I', the third 'N", the fourth 'G', and finally the fifth 'O'. The B-column is associated with integer values 1-15 (inclusive), the I-column with 16-30 (inclusive), the N-column 31-45 (inclusive), the G-column 46-60 (inclusive), and the O-column 61-75 (inclusive). For ease in navigating a BINGO card during play, elements of a BINGO card and BINGO calls are represented by both the letter and number, e.g. B15, N35, O71, etc.

We will not be dealing with a full 5x5 card and we will not be playing a real game of BINGO. Instead, your mission is to give the user the choice of two ways to create a Single Row BINGO "card" consisting of one entry from each column (one of each letter in "BINGO"). The first method is a user generated card, where the program asks the user to enter in values for each of the five card elements. Here is output (note: the numbers surrounded by double asterisks are sample entries from the user and are not actually part of the program output) for method 1:

Welcome to Single Row BINGO

How would you like to create your BINGO Card?
1 - user entered
2 - randomly generated
Please enter your choice: **1**

Generating your card from user input...
Enter a number [01-15] for B: **10**
Enter a number [16-30] for I: **25**
Enter a number [31-45] for N: **36**
Enter a number [46-60] for G: **60**
Enter a number [61-75] for O: **65**
Your BINGO card is: B10 I25 N36 G60 O65
Make sure the user enters the values in the B-I-N-G-O order and that the BINGO card is printed to the screen in precisely the format shown above, with a single space between each element of the card.

The second method is a randomly generated card, where the program provides the five card elements using random numbers.
Here is output for method 2:

Welcome to Single Row BINGO

How would you like to create your BINGO Card?
1 - user entered
2 - randomly generated
Please enter your choice: **2**

Randomly generating your card...
Your BINGO card is: B13 I24 N41 G54 O62
Make sure the BINGO card is printed to the screen in precisely the format shown above, with a single space between each element of the card.

Once a Single Row BINGO card has been generated, "play" a game of Single Row BINGO by letting the user decide how many BINGO calls to make. Randomly generate BINGO calls. For each call, check if it is a match to the Single Row BINGO card created earlier in the program, and clearly signify a match by printing "BINGO!!!" to the screen (i.e. a BINGO in Single Row BINGO is simply a single match). After all calls have been made, summarize the game by reporting the total number of BINGOs that occurred and the percentage of calls that resulted in a BINGO. Here is a sample output (again the double asterisks represent user input):

Your BINGO card is: B7 I27 N43 G58 O65

Now, let's play Single Row BINGO!
How many BINGO calls do you want? **7**

The 7 BINGO calls are: 
O63
G58 BINGO!!!
N36
B13
N41
O68
O71

Game Summary:
After 7 BINGO calls
You had 1 BINGO!
You got a BINGO 14.285714% of the time. 

Thanks for playing.  Goodbye.
Grading:

35 points for style (the point breakdown is described in a piazza post @10. Note: as we haven't discussed functions yet, everything should be in main() at this point)
5 points for clearly communicated input prompts
10 points for creating a BINGO card from user input
10 points for randomly generating a BINGO card
10 points for randomly generating BINGO calls
5 points for generating the correct number of BINGO calls
10 points for accurately checking and reporting "BINGO!!!" matches
5 points for properly reporting the number of calls, number of BINGO!!! matches, and percentage of BINGOs
10 points for handling erroneous input gracefully (i.e. check if input is in proper range and allow user to enter another number if not)
Extra Credit (5 points for each of the following)

Check if a TRUE BINGO has occurred, where all five card elements have been matched by the calls, and add the following line to the game summary:
You got BINGOs on all letters!
OR

You did not get BINGOs on all letters.
Stop the BINGO calls once all card elements have been matched and go straight to the game summary. This should occur regularly when the number of calls is in the hundreds.
Submission Details: Submit your code here in the zyBook. There is an interface to enter your code below, similar to a Lab Assignment.

There are a handful of tests to make sure that your code compiles and has basic functionality. These tests will not adequately check that your code is working correctly. Passing these tests will NOT guarantee your code will get full credit, but it does mean that your code will receive some points for the functionality portion of the grade.

Make sure the code you SUBMIT compiles. You are advised to compile your code BEFORE submitting. Avoid making last minute changes and submitting without compiling.

If you think your code works but you are not passing our tests, please let us know on piazza and we can investigate, as we can see the code you submitted and can see what your code produces for our tests.
