# ChadaClock
Summarize the project and what problem it was solving.
This is a simple clock app that allows the user to manually update the hour, minutes, seconds

What did you do particularly well?
This was my first C++ project so the code is pretty simple. That being said I struggled for so long to get the logic for the clock incrementation correct that I am most proud of that. It was a struggle to get both clocks to increment the hour when the minutes were changing from 59 to 60(:00) and to get the minutes to increment when the seconds went from 56 to 60(:00).
Where could you enhance your code? How would these improvements make your code more efficient, secure, and so on?
Looking back I would clean up the main() function and minimize the code within it. I would prefer to have the logic for changing the hours, minutes, and seconds in a separate function. I would replace the hardcoded 'magic' numbers with: 

const int HOURS_IN_DAY = 24;
const int MINUTES_IN_HOUR = 60;
const int MENU_EXIT = 4;

to improve readability and maintainability. I would also add function prototypes to make my code more modular. This way, the compiler knows what functions to expect, and you can define your functions in any order. Lastly, I would add error handling to ensure the user can only enter valid numbers as right now the code assumes the user will enter a valid choice. 

Which pieces of the code did you find most challenging to write, and how did you overcome this? What tools or resources are you adding to your support network?
As I stated earlier the logic of the seconds-to-minute increment and minute-to-hour increment was the most difficult part of this project. I utilized a couple of forums to help with my logic, specifically StackOverflow.com and Cplusplus.com. I also watched some YouTube videos that helped explain the concept. One of the best things about C++ is that there is a large community of users with lots of experience. Using the community and finding help when you are struggling is incredibly important, a lot of time programmers are not working alone, they are collaborating and the collaborative nature of programming is one of the reasons why I love it, 

What skills from this project will be particularly transferable to other projects or coursework?
I currently work in test engineering and I think that every aspect of C++ I learn helps me to better understand the programs I work with every day. It has helped me to communicate better any issues I find in the program and to explain to the other users just how things work so they can better understand too.

How did you make this program maintainable, readable, and adaptable?
I used comments to explain the logic and variables I used, this helps with the code’s readability. I could have been more consistent with my variable naming to improve maintainability and readability. The switch statement in the main function is designed to handle different user choices. If new features or options need to be added, you can extend the switch statement without altering the existing code significantly. The functions take parameters for the clock values (hour12, minute, second, and hour24). This allows the functions to work with different clock values, making it adaptable to changes in the initial state of the clock. I would like to separate the main function and the clock logic. Having main() and updateClocks() separate would improve the adaptability of the code.


