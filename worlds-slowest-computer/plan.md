# World’s Slowest Computer Lesson Plan

## Learning Goals
- Give students visceral, tactile experience with the foundations of computer science
- Slow down computation to the point that it can be looked at and discussed by a class
- Remain faithful to the underlying concepts, and use the exercise to explain e.g. loops and conditionals
- Identify the relationship between software and hardware
- Emphasize that computers do not 'know' what they are doing, but rather follow simple rules that can be manipulated to perform tasks
- Serve as a stepping stone on the way to learning how to write software
- Serve as a point of reference during later discussions while writing software

## Tools (for 15 students)
- Sponge Computer & Emulator
    - Emulator interface
    - The code is available at http://nas.sr/sponge
- 100x Yellow/green sponges x 3 groups of 5 students
- Markers
- Stopwatch

## Materials (for 15 students)
- Pack of index cards
- Pack of Post-Its
- Instruction printouts

## The Computer

The workshop centers around manually operated sponge-based computers. Each computer consists of:


- A 10x10 grid of sponges green/yellow sponges, called “the screen”
- Sixteen post-it notes and markers, called “memory cells”
- 3-5 students, called “the processor”
- A stack of instructions to execute, called “the program”

### Initialization
A sponge computer is initialized by:

1. Arranging the 100 sponges in a 10x10 grid with their yellow sides facing up
2. Arranging the 16 post-its in two rows of eight
3. Labeling each post-it with a letter A through P
4. Placing a marker by the post-its

### Operation
Sponge computer programs are printouts paper clipped together. Each page represents an instruction. Instructions are followed in order, and executed in full, one at a time. Note that some instructions may require moving forward or backward in the instruction pages. Execution is finished when there the last instruction in the stack is executed.

### Programming Language
The language the sponge computer is programmed in resembles a simplified [assembly language](https://en.wikipedia.org/wiki/Assembly_language) for a contemporary computer. It has 10 instructions, consisting of arithmetic, comparisons, memory cell writing, jump, and plotting instructions. All instructions read inputs from memory cells and write results to memory cells, with the exception of the “set” instruction which additionally takes literal numbers as input.

The full list of instructions is the following:


- Plot: Flips a sponge at the row and column given by two memory cells
- Set: Writes a value to a memory cell
- Plus: Adds the values of two memory cells and writes the result in a third
- Minus: Subtracts the values of two memory cells and writes the result in a third
- Times: Multiplies the values of two memory cells and writes the result in a third
- Divide: Divides the values of two memory cells and writes the result in a third (see note about truncating division in Memory Model below)
- Less Than: Compares the values of two memory cells and writes 1 in a third if the first value was less than the second value
- Greater Than: Compares the values of two memory cells and writes 1 in a third if the first value was greater than the second value
- Jump: If a value in a cell is 1, instruction continues from the instruction with the number equal to the value of a given memory cell

### Memory Model
The sponge computer is a simple [register machine](https://en.wikipedia.org/wiki/Register_machine). What is traditionally referred to as a “register” we refer to as a “memory cell”. It lacks any kind of memory beyond its sixteen memory cells, in which it stores temporary values, instruction jump addresses, and everything else. The cells are only allowed to contain integers, and the sponge computer is incapable of manipulating numbers with decimals (real numbers, or floating point numbers in computer hardware parlance). Notably, this means that division is [*truncating*](https://en.wikipedia.org/wiki/Truncation). 7 ÷ 2 =  3, not 3.5.

### Turing Completeness
Within its bounded memory, the computer is [Turing complete](https://en.wikipedia.org/wiki/Turing_completeness#Non-mathematical_usage), meaning, from a theoretical perspective, it contains all the expressive power of any other programming language, including modern ones like JavaScript or C++. The jump, comparison, and set instructions are enough to simulate a Turing machine. This is important as this makes the sponge computer as “real” a computer as any other. It is not a simulation of computation, but rather *the real thing* on a smaller and slower level.

### Infinite Loops
Due to the turing-completeness of the computer, programs that run forever (known as [nontermination or divergence](https://en.wikipedia.org/wiki/Divergence_(computer_science))) are both possible and impossible to predict or prevent. This is especially true given the margin of error that results from human interpretation. Programs should be tested in the emulator before running on hardware to confirm that they termination. If a program runs for longer than seems reasonable during an exercise, a computer may decide to stop, or it may be stopped by a facilitator.

# The Emulator

The World's Slowest Computer is based on [an emulator](http://nas.sr/sponge) (available at [http://nas.sr/sponge](http://nas.sr/sponge)) that allows you to develop Sponge code on your computer and verify that it does what you want it to do before you execute it on real hardware (the sponges and the students). The emulator is online, and comes with a few programs built in to explore and study. The emulator works best in Google Chrome.


![](https://lh5.googleusercontent.com/qNoItT2eHFF8vI7Wy1zu-watDrSQO7SLX7NGcJLLNRnOhC739yGplZn5icdExDkLZDElcsNcOpzyxMmXqu-RlJb1dmPrk5V0tJy3-nhysm4ICZFZk94FkCqm6kZRUxU-vt8ZAwff)


Sponge programs can be executed and stepped through, meaning you can move backwards and forwards through the execution to better understand it. The sponges and memory cells are visualized and updated as needed.

## Quick Start

To get started quickly, choose an example from the Examples drop down. This will load one of our example programs and execute it automatically. You will see the final state of the sponge grid and memory cells (under the Sponge Grid & Memory Cells heading), as well as the execution scrubber all the way on the right (under the Printing & Execution heading).

You can drag the scrubber left and right to scrub through the correct steps of the execution of the program, and the grid and memory cells will update automatically. The current instruction will also be highlighted in the Code area and visualized in the Instruction Preview area. Note that because of jump instructions there may be more execution steps than instructions, and instructions may repeat.

Loading and scrubbing through examples is the best way to get a feel for the emulator. You can edit the code, too, to see what changes it makes. After each edit you will have to hit the play button next to the scrubber to have the emulator execute the code with your changes.

## Overview

The window is divided into five sections, Code, Instruction Preview, Sponge Grid & Memory Cells, Printing & Execution, and Examples.

### Code
The top half of the left column is a text area where you can write sponge code. Each instruction is written on its own line. Each instruction is a simplified version of the full printed page that will be presented to students, and that is visible in the Preview section. When the Execution Scrubber is dragged left and right, the current line of execution will highlight.

### Instruction Preview

![](https://lh5.googleusercontent.com/vTt9AicZBWGD7sxXyoliV3BZ2H3FLYusWqg5rKY4zn655KOYH9VXuocpaBwNinBAPiGCA1DX2xl45fVfQxPAKWD9o31M8zYe5TMvATrWX24_UXd8nCU56FQWBsrAzlA9Oz_rUPoU)


A preview of the currently selected instruction is displayed here. It corresponds to the actual printed page students will receive when doing the exercise. At the top left hand corner is a number indicating the number of the instruction in the sequence. In a circle on the left is the name of the instruction, and on the right is an English-language description of how to execute the instruction with specific values and memory cell names filled out.  

### Sponge Grid and Memory Cells 

![](https://lh4.googleusercontent.com/OAhTi9H7YT3zIImvB64VzFR5-zaxN2hdZxAZZG0nRJiDivDaegNfrkwzSNg3MG3YumsF-8-s4j5BqwzishVquAehVQig6EojfR0cvc_vNJrYhhI419tHWhDKKOo-mDLRJ9zvcMCj)


At the top of the right column is a visualization of the grid of sponges and the memory cells the students will be writing to and reading from. This displays the correct state of the sponges and cells according to the current step, and can be used to debug problems. Scrubbing the execution scrubber will update this area automatically.

### Printing & Execution 
Under the Memory Cells are the controls that allow you to print, execute, and scrub through the program. The print button will compile all instructions into a printable PDF and open a printer dialog for you. The play button will execute the code in the Code area. This happens automatically when you choose an example, but you will have to hit play again if you edit the code.

Dragging the scrubber left and right will move change the "current step". This will update the visualization of the grid and memory cells, and the preview. It will also highlight the instruction in the Code section. The numbers to the right of the scrubber indicate the current step and the total number of steps.

![](https://lh3.googleusercontent.com/7dWDSJLbu2nCSMSPdX7NbywISjoPpZf357AKnnOGwa0iYrEQWbgBCKAXRXA7ns9ca77cBHN3ThMvpLyJ9tpLzP-Rr-n4NHlG1SCQkECAN8ocu7Ajl053Qe9dPIhKZZFjLenkZwjd)


### Examples
A drop down list of built in examples we have written that you can try out.

# Why Sponge Computers?

As this module invites students to learn and operate a computer without any practical application, it is reasonable to ask what the point is. We’ve found that this exercise is very effective at setting students up to dive into conventional programming.

## Slowing Things Down

Conventional computers are designed to run as fast as possible, which makes them hard to visualize and understand. Take a loop statement, for example. It may be a few lines of text in a program, but it could repeat hundreds or thousands of times in the blink of an eye. This level of performance is what allows modern computers to do the many things expected of them, but internalizing it is difficult to new programmers.

Explaining the mechanism behind a loop to a student so that they form an intuition for it is made harder by the fact that there is no easy way to slow things down. Teachers often resort to diagrams, animations, or other models, which are helpful but still require the student to connect the text of their code to the model presented to them. This is not limited to loops, of course, but is rather true of all programming. Code runs too fast to see, which simultaneously makes it useful and obscures its mechanisms.

The World’s Slowest Computer is just that, slow, to counter this hurdle. The execution is at “human speed” because the computer is operated manually. Each instruction requires the students involved to pause, reflect, and think about what they’re doing. The competitive nature of the exercise ensures that they are always driven forward, so that computation is slow, but not needlessly so. Watching a real computer run at this speed makes its operation more apparent. Every iteration of a loop happens in plain sight, and can be remarked and reflected on.

## Computational Ignorance

The challenge of programming is manifesting an idea in one’s head in the form of instructions for a computer. It can become frustrating when something that is seemingly clear and obvious causes a machine to become confused. Students will sometimes ask “why can’t it just do what I say?” and are often reminded that the computer “does not know what it is doing”, though the full implications of this remain unexplored.

This exercise tries to make this more tangible. The programs for the Sponge Computers are not labeled, and the instructions themselves are all “low-level”, meaning they do not concern themselves directly with the complex tasks a programmer might be interested in (drawing shapes) but rather provide building blocks for more complex behavior. This is analogous to a computer’s assembly language. On their own, they do not betray the overall goal of the program. As students work, they can only really focus on a single instruction at a time. Part of the fun and the challenge is having students guess what might be happening, which is usually almost impossible. Seeing a coherent image at the end of a program’s execution, and connecting that to the confusion of individual low-level instructions makes the fact that computers “do not know what they are doing” more tangible. 

## Parallels

It is important to stress that the World’s Slowest Computer is a *true computer* in every theoretical sense, in that it can simulate a Turing machine with bounded memory like a conventional computer. Within the limits of its memory, it can in theory express any program a conventional computer can. The differences are only those of scale: it is much slower, larger, and less capable than a modern computer, but not categorically different. This is important for two reasons:


1. Students can be assured that the movement of their hands and the decisions they make are *actual computation* and not a simulation or a performance of it
2. Their experiences in the exercise *directly mirror* the operation of both conventional and theoretical computers

### Some parallels to look out for

- Some teams will organize into an instruction reader, executor, and page turner, which is similar to the [fetch, decode, execute pipeline](https://en.wikipedia.org/wiki/Instruction_cycle) of many processors
- Some teams will identify a group of looping instructions, figure out what the end result would be, and jump to that instead of continuing to read each instruction individually. This is similar to an [instruction cache](https://en.wikipedia.org/wiki/CPU_cache) and a [loop predictor](https://en.wikipedia.org/wiki/Branch_predictor) on x86 processors.
- The sponge language does not have control flow structures like “if” statements or explicit loops, it only has branches. Branches are all you need, though. A branch backwards is like a loop in a high-level programming language, and a branch forward is like an if-statement.
- The sponges can be thought of additional memory cells that only contain values 0 and 1. We choose to interpret them as an image. This is similar to a [framebuffer](https://en.wikipedia.org/wiki/Framebuffer) on older architectures.
## Competition

The framing of a competitive game is an important one. The competitive pressure each team is under incentivizes them to move as quickly as possible, and even “cheat” — or, in more computational language, derive optimizations. The fact that correctness is equally important introduces an interesting tension: spend too much time verifying your work and you lose on speed, spend insufficient time and you might lose on correctness. Without a team to compete against, the tedium of executing instructions might overwhelm the participants and spoil the experience.

Students’ “cheats” often mirror real-world optimizations done by hardware and operating systems, and result in excellent teaching moments. For instance, running the program that draws an X, we’ve had students identify a sequence of instructions that loop to draw each diagonal line. After running through the loop a few times, they would set their code aside and manifest the final result on the screen and in the memory cells without going through the intermediate steps, saving considerable time. Conventional hardware circuitry includes *loop predictors* and *instruction caches* which implement a similar optimization. Having students independently derive their own optimizations through play can be much more effective than the same concepts presented in a lecture.

## Fundamentals

The fundamentals of computing are somewhat simple, but the reality of modern programming is complicated by the particular quirks of the layers of Operating Systems and programming languages we’ve accumulated over the years. Stripping all of this away to a computer that is theoretically complete but missing the obfuscating layers of a conventional computer avoids distractions and focuses the learning for new programmers. This avoids the perception that computers are somehow “magical” unknowable black boxes, a common and alienating perception that arises primarily from the immense complexity modern computers have accumulated over the years.

## Visceral

The abstract concepts of computer science can be difficult to internalize. Diagrams and metaphors help, but we’ve found that having students physically perform computation lends the lesson a kind of muscle memory that helps solidify the ideas in the students’ minds. 

# Lesson Plan

The exercise consists of organizing the group into teams, running programs, and discussion afterwards. A program can typically be run in around thirty minutes, leaving ten minutes for setup and ten minutes for discussion in a fifty minute class.

We describe below what a typical session centered on a single program would be like. We’ve found Diagonal Line, The Letter X, Creeper, and Circle to be a good progression of programs, totally four sessions.

If you feel the need you adjust the pacing of this session, ensure that the execution of the program is not interrupted, and that students are allowed to run their programs to completion in a single sitting. If execution and discussion take place on separate days, take care to have students document their progress and experience very well so that they have material to jog their memories when the discussion begins.

## Preparation
- Before each session, print out the programs that you want the computers to execute. You can choose from one of the PDFs listed above, print out a program from the emulator, or even write your own.
- Print out one copy of each program per group. Groups should be 3-5 students large, so plan accordingly depending on the size of your class.
- Note the number of instructions for each program, listed next to the the scrubber in the emulator. You will need this when measuring the students’ speed of the execution.
![](https://lh3.googleusercontent.com/SWaQIBjcjxvguVBsGxmUxAwPxFUQcH9OcwPaq2tqNLbBHVJ2OrQk_HrUcGZD8aWScxcUrEFXqkpOAQljV8lObC3YBGeQU883SawyAa2rli9gQhkbycDMwhytw7aT1-wCQueztlq4)


- Programs can be long! Binder clips are a good way to keep them together. Avoid staples or any more permanent binding to allow students the opportunity to figure out ways to spread out and read the programs.
- This exercise depends on secrecy! Make sure that the end result of a program is not known to anyone in the class beforehand. Do not label the stacks of paper either, and do not run the emulator before or during the execution of the program by the students. Instead, take good personal notes on the number of instructions and end result before hand so that you can assess your students’ progress.
## Typical Session

### Setup (10 minutes)

- Divide the class into groups of 3-5 students.
- Have each group build a sponge computer by laying the sponges in a grid and preparing their tables (described in detail in Background & Context / The Computer / Initialization)
- Explain each instruction they will see, and give examples of their uses (described in detail in Background & Context / The Computer / Assembly Language)

### Execution (30 minutes)

- Have a representative from each group come to the front of the class and receive a copy of the program. Make sure not to tell them what it does, and do not label the stack of code.
- Instruct the groups not to look at the program yet.
- Inform each team that they will race to execute their program correctly. Execution is correct when the team’s sponges match the emulator’s sponges. The first correct execution will win. Incorrect executions automatically lose. 
- Inform each team that they can call out “finished!” when they think they have finished executing.
- Once the groups are together, count down from ten and tell them to start executing. Start the stopwatch now.
- Allow teams to self-organize and determine their own roles. 
- Whenever a team calls “finished!”, record their time.
- Their approximate clock speed in Hertz is the number of instructions the program should have taken (from the emulator) divided by the number of seconds the team actually took. It will usually be a very small number.

### Discussion / Journaling (10 minutes)

- Once finished, discuss the challenges they faced and how they overcame them. This can be carried out as a classroom discussion or journaling exercise. Good questions include:
    - Why did they make the decisions they made?
    - How did they organize their teams? Why?
    - What was unexpected? 
    - What was surprising?
    - Can you describe the sponge program in plain english?
    - Can you rewrite the sponge program as [pseudocode](https://en.wikipedia.org/wiki/Pseudocode)?
    - When did you realize what you were making? What prevented you from knowing sooner?
    - How did the competition change the way you worked?
- Some connections to make, based on your observations, and some additional questions:
    - Jumping backwards is equivalent to a loop in a contemporary programming language
        - What changes each in iteration of the loops?
        - What keeps the loop from repeating forever?
    - Jumping forward is equivalent to an if statement in a contemporary programming language
    - Memory cells are analogous to variables in a contemporary programming language
        - Would the exercise be easier if they could name the cells? If so, why? What names would they give the cells?
        - What kinds of data are allowed in the cells? How is this different from a practical computer?
    - The sponges are analogous to the screen
        - What is its resolution compared to a laptop screen? A phone screen?
        - How many colors can it represent compared to a practical screen?
- You can use the emulator with the class now to run the program, step through it, and debug problems people may have had.

## Additional Sessions
- Additional Sessions proceed as above but with a different program.
- Later sessions can reference experiences in earlier sessions.

