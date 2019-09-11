# Coding in Depth Lesson Plan

# The Game

This module is designed around an Asteroids clone. The player controls a ship with the keyboard keys, rotating with left and right, moving forward and backward with up and down, firing bullets with the space bar, and must destroy a field of asteroids in order to win. Each asteroid spawns three smaller asteroids when destroyed, and the smaller asteroids do not spawn anything. If the user touches an asteroid, they lose. The class will write the code to add an enemy to the game with basic AI that will follow the player and fire bullets at them.

![](images/s_02986F66D20964F9BB6F25081A8646F27F4CE29D977FD708E3973173FB7632C8_1487446978007_file.png)


It is designed to be hit all of the major corners of Unity while remaining hackable. The components are well commented and designed to be interchanged. The package also comes with a lot of free art from kenney.nl that students can use while customizing the game.

Importantly, the scripts that the class will write together to implement the enemy should *not* be on the students’ computers to begin with as this would defeat the purpose.

# Lesson Plan
## Summary

The lesson is broken up into two parts: hacking and coding. The first session involves hacking an existing game in Unity to make it do new things. This serves as a concrete example of game development in general, and Unity in particular. The remaining sessions involve adding an additional element that requires new code to be written. By the end, students should have all made the same game.

## Prerequisites

None. Any experience writing code is a plus.

## Learning Goals
- Basic General Programming
- Basic Game Development
- Understanding of Unity
- Connect Techniques to Existing Games
- Rapid Iteration
- Game Logic

## Materials (per student)
- Computer
- Unity3D
- MonoDevelop
- [Unity Cheat Sheet](http://nas.sr/teaching/2015/game-design-studio/unity-cheat-sheet/)

## Session 1

### Summary
Students will be introduced to Unity by tweaking an existing game to turn it into something new

### Goals

- Understand Unity’s core concepts
    - Particularly GameObjects, Component, and Prefabs
- Get comfortable tweaking parameters
- Navigate in 3D Space
- Begin to see the need for writing code

### Plan

- two approaches
    - for teachers who know unity
    - for teachers who don’t


- All the computers should have been normalized as described earlier.
- Make sure computers are open to Unity with the project already loaded
- Describe Unity concepts
    - Unity’s core idea is: everything in your game is a *GameObject*, and you tell GameObjects how to act and how to look by attaching *Components* to them.
        - Illustrations along the lines of the following might help: 
![](images/s_02986F66D20964F9BB6F25081A8646F27F4CE29D977FD708E3973173FB7632C8_1487449484328_file.png)

        - GameObjects are only *containers* for Components. They do almost nothing on their own aside from hold on to a name, layer, tag and a few other bits of data.
        - All GameObjects are *the same* in the way that all supermarket bags are the same. They’re different only in what they *contain*, sometimes groceries, sometimes garbage, same bags.
        - Another way to explain it is that there are no “special objects” in Unity, only GameObjects with Components on them
            - For example, if Mario was made in Unity, there would be no “mario” object, just a normal GameObject named Mario with a Component that says what he looks like, a Component that says how he should move, a Component that says how he can get hurt, and so on.
            - “What if this game was in Unity?” is a good way to frame examples around this concept. Ask the students about their favorite games and start to think of potential GameObjects and Components there.
    - Everything flows from this idea, and understanding it is crucial
        - Try and stress this relationship whenever you can
        - Reference the history if you think that is helpful
    - Describe Unity’s UI
        - The Game Tab is what the player will see
        - The Project Tab is a list of all the files in the project
            - This includes images, sounds, and code
        - Stress that the Scene Tab and Hierarchy Tab *show all the GameObjects in the game* in different ways
            - The Scene Tab is a visual, 3D representation
                - Useful for a preview of how things will look
                - Or to move things around
            - The Hierarchy is a searchable list
                - Useful if you can’t visually find a GameObject
        - Demonstrate that GameObjects can be selected by clicking on them in the Scene or Hierarchy Tabs
            - Stress that clicking on an object in the Scene Tab selects in Hierarchy Tab and vice versa — they are the *same* object
        - Stress that the Inspector Tab displays information in the currently selected GameObjects
            - Specifically, it lists *all the components attached to them*
            - This is a good place to stress the GameObject Component relationship, the visual layout of the inspector places GameObject information at the top, and the rest is a list of Components (see below)
            - This is also a good place to point out that there are two different kinds of components: the ones built into unity, and the scripts that we write using code.
                - Unity’s components are general, and designed around things that most games need
                - Scripts are more specific and make up the unique aspects of our game
![](images/s_02986F66D20964F9BB6F25081A8646F27F4CE29D977FD708E3973173FB7632C8_1487448828053_file.png)

![](images/s_02986F66D20964F9BB6F25081A8646F27F4CE29D977FD708E3973173FB7632C8_1487449116927_file.png)

![](images/s_02986F66D20964F9BB6F25081A8646F27F4CE29D977FD708E3973173FB7632C8_1487449300477_file.png)

- TODO Prefabs
- Play the game
    - Have students play the game for some time
    - Afterwards, ask them what they thought
        - Was it fun? How? How not?
        - What would they change?
- Hack the game
    - Tweak values, add and remove components so that the game plays differently without writing code
    - The components that make up the game are designed for this
        - The names are descriptive and every field is commented with the role it plays
        - Familiarize yourself with the components before class so you can effectively hack the game
    - Guide students through hacking the game
        - Present them with a prompt (below) and go through it together as a class
        - State the goal of the hack and tweak the game to achieve it
        - Make sure to demonstrate: 
            - Changing values on a component
            - Adding a component
            - Removing a component
        - Do this on the projector and go around the class to make sure everyone was able to achieve the same result
    - Let them hack on their own
        - Present them with a prompt and give them a fixed amount of time to tweak the game to realize it
        - ?? Go around the class to answer individual questions
        - When time is up, have a short discussion about what they made and what that experience was like
        - Repeat for the remainder of class
    - An important point for them to reach is boredom with the pre-written components
        - This segues into coding well
    - Possible prompts:
        - How can we make it really hard?
        - How can we make it really easy?
        - How can we make it “better” ?
        - Their answers to the earlier question of what they would change

## Session 2
- Scripting
- Syntax
- Make connection with plain language ideas
- city.building.floor.room.drawer.sock
- Mailing Addresses
- Visualize before scripting
- Keyboard Input
- Example: DDR, Racing Games
- Update, Loop, Time
- Goal:
    - Understand Syntax
    - Flight Script

## Session 3 
- Scripting
- Colliders, Hitboxes
- [Street Fighter Example](images/streetfighter.jpeg)
- Deleting Objects
- Expose as many variables as possible
- Goals:
    - Stationary Enemy
    - Projectiles fired on key press
    - Enemies disappear on collision with projectile

## Session 4
- Enemy Motion
- Enemy Projectiles
- Learning After Class
- Goals:
    - Enemies Move
    - Enemies Fire Back
    - How to keep learning


# Context
## Unity’s Semantics

Unity is designed around a particular set of ideas meant to make your work as a game developer easier. Understanding these ideas is crucial to using Unity effectively, and working contrary to them will cause a lot of undue headache.

The core idea behind Unity is that most games are full of “things” that interact with each other in different ways over time. For example, some of the “things” in Asteroids are the player’s ship, the asteroids, and the player’s bullets. The way they interact with each depends on which “things” they are and what events are happening in the game. For example, when a bullet touches an asteroid, the asteroid disappears, and is replaced with three smaller asteroids. Most games can be described by different “things” and how they interact.

![](images/atari.jpg)


**Exercise** Have the class identify “things” and interactions in other games, and suggest your own.

Unity calls these “things” *GameObjects*. Everything in your game is a GameObject. Players, enemies, pickups, parts of levels. Even things that are not immediately visible are GameObjects, like the area that marks the finish line in a racing game or the starting point in a platformer.

GameObjects on their own do not do anything, and they are all equal. There is not, for example, a camera GameObject and a spaceship GameObject, just GameObjects. They are blank, empty containers waiting to be filled with the logic and behavior that comes from *Components*. A Component is a chunk of code designed to do one specific thing when attached to a GameObject. Some common Components are built in to Unity. These include the Camera Component that draws the scene on the screen, the Rigidbody Component that makes GameObjects move with realistic physics, or the AudioSource Component that plays sound files. You will not have to recreate these for every game. But more game-specific logic, like the way the player moves, or how pickups work, will need to be specified by the game developer by writing code.

For example, the player’s ship in Asteroids could be a GameObject with:

- A component specifying what image to use to draw the ship
- A component specifying its position and rotation
- A component that creates a bullet GameObject when the player presses a button
- A component that rotates the ship when the player presses left or right
- A component that moves the ship forward the player presses forward or backwards
- A component that removes the ship when it touches an Asteroid

That’s a lot of components! This is how Unity wants you to build your games, though. The idea is that if you write small, generic components that aren’t tied to one particular GameObject, you can *re-use* them on other GameObjects.

**Exercise** Ask the class to try and break down popular “things” in video games into Unity-style Components. Ask the students what games they play and what “things” they contain that can be broken down, and suggest your own. Guide them towards thinking of common, reusable Components between “things”.

The way you organize your game, the number of Components and what goes in them is up to the developers. Every team finds a style that works for it, and it is not an exact science. For example, in the earlier Asteroids player ship example, the movement and rotation Component could be combined into one. This would not be “wrong” and breaking them apart is not necessarily “better”. Stress this with your class.

**Unity’s Interface**
The GameObject/Component system is reflected in Unity’s user interface. 

**Programming in Unity**
The GameObject/Component divide means you end up programming Unity in 

**Historical Context**
This is non-critical information, but might help answer questions that come up.

In many respects, video game development is a lot like other kinds of programming. It *is* unique in one important way, however: the goal is an aesthetic, human experience. This means “success” is *highly* subjective, and as a result *iteration* and *playtesting* are indispensable. The effect that has on the kind of programming you end up doing in games is that the flexibility of your code is important to ensure that you remain able to adapt to new creative ideas.

The original programming paradigm of the 1950s was *imperative*, where programs were nothing more than a sequence of machine level commands. There were no named variables, just memory addresses that could be read and written to, no loops or conditionals, just “branch statements” to jump to different instructions, and no named functions, just blocks of code. Assembly languages for different computers fall into this category, and this kind of programming is still done on some low level systems.

Shortly following that was the *structured* programming of the late 1950s and 1960s. Most of the progress was being made in America, and these languages allowed programmers to assign English names to their variables and functions which made it easier for them to read. 

**A 3D Engine**
Unity is always a 3D engine. It is capable of making 2D games, but those get treated as flat graphics in a 3D world.


## In The Classroom

### Setup
Normalizing the classroom is *crucial* to a successful coding workshop. This means that every computer is running the same


1. Operating System and Version
2. Game Engine and Version
3. Text Editor and Version
4. Programming Language

Additionally, things often thought of as preferences should be identical as well. Syntax highlighting colors, window layout, *any difference* between student machines and the instructor’s machine is a potential source of confusion. With time allocated towards preparing the room, this can be eliminated.

In situations where the running software cannot be normalized beforehand, anticipate these differences as sources of confusion, and prepare extra time for it.

### Type-along Coding
To demonstrate each step of the writing of code, we encourage the following:

1. Break the coding into chunks or steps that can fit on a single screen
2. Connect your laptop to a projector and mirror the displays
3. Write code live and ask your students to type-along with you
4. When finished with the current step, expect a few advanced students to be caught up, but most students to still be typing
5. Pose a challenge to the students who are done, suggesting the next step
6. Take a moment to go around the room and make sure everyone else is caught up
7. Have short one-on-one conversations with each student about the state of their code, what they are confused about, and answer questions they may not be willing to ask out loud
    1. In a large classroom, this is a good task for teaching assistants or co-teachers to help with
8. When finished, return to your computer and begin the next step.

This approach has several benefits:

1. The current step remains on the screen for students to transcribe at their own pace
2. Asking the students to type the code themselves (as opposed to downloading or copy-pasting) acquaints them with the tactile experience of writing code with their fingers, and the particularities of text editing tools
3. You will make mistakes when writing code — that’s great! This demonstrates that encountering errors regularly, dealing with them, and moving on are a fundamental part of the experience of programming
4. You can structure your code steps to keep advanced students challenged while helping those who are not caught up
5. You ensure that everyone is on the same page before moving on, and its harder for someone to fall way behind

Make sure your font size is large enough to be read comfortably by everyone in the room. This might mean writing code at a comically large size, and might affect your ability to write code comfortably. Experiment with this during classroom preparation if possible.

### On Errors
I want to stress #3 in the above list. There is a myth among programmers, particularly among new programmer, that errors are “wrong” and a sign that they’re “not good” at programming. Some have the feeling that when they’re “good” programmers, they simply will not see error messages again. The aesthetics of error messages encourage this: stop signs with exclamation points and ominous red and black text. This, of course, couldn’t be farther from the truth, and this is an excellent opportunity to push back against that intuition. This is hard to express verbally without sounding condescending, but by demonstrating that errors are not a big deal and that “even the instructor” consistently makes them, you can communicate this powerfully.

We explain programming errors as “situations where the computer does not have enough information to proceed and is, asking for help” or “situations where what you wanted is not clear to the computer.” An example we like to give is asking a friend to grab you a bagel from the deli when they head out. If it turns out that the deli has three kinds of bagels, your friend wouldn’t know which one you wanted, so they might phone you and ask. That phone call is an error message.
 


<!-- Background: 
Entity-Component system (instead of alternatives like Object Oriented Programming)
History of
Nature of programming for games has to allow for iteration - how can I iterate as much as possible?
Entity-Component allows for mixing and matching
Understanding the needs of Game programming vs other kinds of programming
Ramsey’s best practices approach that introduces ways of programming on Unity that optimizes the flexibility, modularity of the entity-component system it uses.  

Classroom content: 
Cheat sheets can allow to prioritize the teacher’s attention, and can help specialize the questions the teacher can address. Cheat sheets should have more answers to objective questions. This can save the teacher’s time and allow for more personalized attention. 

Note: 

1. If you haven’t done Buzzkill, then have the modding session at the start. otherwise, skip the modding. 
2. to have students modify the example game for workshops that have limited time. 
3. helps to have slowest computer before this module. 

**Context/History**
http://scottbilas.com/files/2002/gdc_san_jose/game_objects_slides.pdf

Game development is unique in that its success metric is *subjective*, so the software engineering approach is much more *iterative* than usual. -->