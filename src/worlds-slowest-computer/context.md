# World’s Slowest Computer

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

