# Abstract Electronic Toys

## Learning Goals
- Games are more than just video games
- The game design process
- The art of writing rules
- Iteration & Rapid Protyping in Design
- Hacking commercial electronics
- Play testing or User Testing
- Basic circuitry
- What are interfaces

## Prerequisites
While all the information in order to teach this module is included in the content, there is nothing that the teacher needs to know beforehand. It would help however, to know basic electric circuitry and some game design. 


## Tools
- Multimeter (to check circuits)
- Paper & Pen 
- Worksheets (to keep track of ideas)
- Alligator Clips
- Double Sided Sticky Tape
- Masking Tape
- Tools Needed to Make Custom Boxes
    - Soldering iron
    - Drill with small bit
    - Glue gun with glue sticks
- Tools Needed to Hack Wireless Doorbell
    - Soldering Iron
    - Screwdriver

## Materials
- If you are playing Turtle Wushu- plastic turtles or animals from dollar store 


### Option 1: Using Custom Boxes

*This option requires that the boxes are made before the class or workshop. Those who are not familiar with building circuits or don’t have enough prep time, it is recommended that you use Option 2: the Wireless Doorbell. It helps to be familiar with Arduino and basic circuit building. Making of the boxes can be another activity, perhaps made by more senior or advanced students. We remove the ATMEGA chip off of the Arduino and create a simple circuit using the [Arduino to Breadboard Tutorial](https://www.arduino.cc/en/Tutorial/ArduinoToBreadboard). This is a relatively cheap way to make multiple circuits, using only one Arduino board.*


- Base 
    - ATmega328 chip [https://www.sparkfun.com/products/10524](https://www.sparkfun.com/products/10524)
    - 16mhz crystal clock  [https://www.adafruit.com/product/2215 ](https://www.adafruit.com/product/2215 )
    - 2 x 20pf capacitors *included in the link with crystal clock*
    - 10k ohm resistor [https://www.adafruit.com/product/2784](https://www.adafruit.com/product/2784)
    - Mini Bread Board [https://www.adafruit.com/product/65](https://www.adafruit.com/product/65)
    - Enclosure [http://a.co/5E4zLzh *sized about 3” x 2” x 1” or larger. Container store is also an excellent source of plastic/wood, easily drilled boxes.* ](http://a.co/5E4zLzh *sized about 3” x 2” x 1” or larger. Container store is also an excellent source of plastic/wood, easily drilled boxes.* )
    - Wires (22 AWG, solid core) [https://www.adafruit.com/product/1311 ](https://www.adafruit.com/product/1311 )
    - Battery and battery holder [https://www.sparkfun.com/products/10891](https://www.sparkfun.com/products/10891)
    
- Push Button Victory Tone
    - Base
        +
    - Pushbutton (Arcade button) [https://www.adafruit.com/product/472](https://www.adafruit.com/product/472)
        *also very large push buttons are fun [https://www.adafruit.com/product/1185](https://www.adafruit.com/product/1185)*
    - 10k ohm resistor for push button [https://www.adafruit.com/product/2784](https://www.adafruit.com/product/2784)
    - Speaker [http://www.jameco.com/z/GF0506X-Shogyo-International-Square-Ferrite-Speaker-2-8-ohm-1-4-Watt_2231161.html](http://www.jameco.com/z/GF0506X-Shogyo-International-Square-Ferrite-Speaker-2-8-ohm-1-4-Watt_2231161.html)
    - 100 ohm resistor for speaker [http://a.co/gV7g6xI](http://a.co/gV7g6xI)


- Push Button Counter
    - Base
        +
    - 7 segment display [https://www.amazon.com/uxcell-Cathode-Segment-Display-Digital/dp/B00EZBGUMC](https://www.amazon.com/uxcell-Cathode-Segment-Display-Digital/dp/B00EZBGUMC)
    - 1k ohm resistor for LED
    - 10k ohm resistor for button [https://www.adafruit.com/product/2784](https://www.adafruit.com/product/2784)
    - Push button (Tactile push button) [https://www.adafruit.com/product/1010](https://www.adafruit.com/product/1010)
    
- Toggle Buzzer Vibration
    - 9V battery 
    - Toggle Switches (3) [http://www.jameco.com/z/GTS001-Toggle-Switch-Full-Single-Pole-Single-Throw-On-Off-Solder-125VDC-4-Amp-1-2-Inch-Mounting_76241.html](http://www.jameco.com/z/GTS001-Toggle-Switch-Full-Single-Pole-Single-Throw-On-Off-Solder-125VDC-4-Amp-1-2-Inch-Mounting_76241.html)
    - 10k ohm resistors for switches [https://www.adafruit.com/product/2784](https://www.adafruit.com/product/2784)
    - Vibration Motor [https://www.amazon.com/gp/product/B00PZSOXHI](https://www.amazon.com/gp/product/B00PZSOXHI)
    - Piezo buzzer [https://www.amazon.com/gp/product/B01JA7IX0M](https://www.amazon.com/gp/product/B01JA7IX0M)


### Option 2: Using Commercial Electronics
*Use this option if you don’t have time to make custom boxes or aren’t familiar with Arduino and basic circuit building.*
- GE Wireless doorbell. [How to hack wireless doorbell](files/hacking-doorbell.pdf)


- Conductive Materials and Objects
    - Conductive Fabric - for example, copper tafetta (lessEMF)
    - Conductive Fabric Tape(lessEMF)
    - Aluminum Foil
    - Canned drinks (we got seltzer!)


## Setting Up

### Setting the Tone: Games are Not Just Video Games
Because video games are so popular, it is often forgotten that video games are only part of the vast world of games, and that games encompass video games, street games, card games, board games, sports, etc. Games whether they are digital or physical, share many characteristics that can be identified and discussed. We find it important to be able to frame games and game design in and outside of the video game context **as early as possible** in the session for a few reasons: 

The “gamer” culture around video games while can fuel enthusiasm and can initially be the primary motivation to come to the session, it can also be intimidating and even harmful to others. People who do not feel part of that conversation or do not identify themselves as “gamers” can easily feel left out. Having everyone understand from the beginning that games are not just video games, and having them start with the same creative blank slate can be more inclusive and helpful in setting the tone for the rest of the lesson. This can be particularly helpful for future collaborative brainstorming and creating. 

Sometimes simple, ubiquitous physical games can be a better learning tool to illustrate game concepts easier than a commercial video game. For example, when we talk about the importance of narratives in games to teach a player how the game works, it’s easier to understand how important narratives are to games like Rock, Paper, Scissors.  The circular nature of the game system is more easily identified and discussed here, compared to a more complex video game. 

Running simple street games like Ninja or Turtle Wushu at the very beginning of the session can act as an ice-breaker and can additionally help students see that games are not just video games, and they too can be analyzed, critiqued and modded. 


- Ninja
  - Rules: [http://ultimateninjacombat.com/](http://ultimateninjacombat.com/) 
  - Demo video [https://www.youtube.com/watch?v=BHSlB3uS-9g](https://www.youtube.com/watch?v=BHSlB3uS-9g)


- Turtle Wushu
  - Rules: [http://ludocity.org/wiki/Turtle_Wushu](http://ludocity.org/wiki/Turtle_Wushu)
  - Demo video [https://www.youtube.com/watch?v=rGRyMkejMxE](https://www.youtube.com/watch?v=rGRyMkejMxE)

### Progression - The Surprise!
It’s important to divide the module up into 2 sessions, and that the hacking session remains unknown during the first session. The purpose of this is this to emphasize the choice to open electronics, which we often take for granted. 

- Session 1: Designing physical games using custom boxes or doorbell system
- Session 2: Hacking boxes and making new interfaces with conductive materials and objects

### Space

- An indoor or outdoor large space to run street games like Turtle Wushu or Ninja.
- When working with the boxes or doorbells, enough space to run around, move and use tables and chairs. Tables should not have anything on top of them. 
- Well lit 
- Make sure you do a battery check before running the module
- Make sure you have back up batteries
- Safety when hacking electronics

## Lesson Plan

### Session 1: Designing physical games using custom boxes or doorbell system
    
- Ice breaker: Turtle WuShu or Ninja to show games are not just video games
- Rules for Turtle Wushu
- [Slides](files/slideshow-session-1.pdf)
    - Basic Game Design concepts
    - Rulesets
    - Going over how to write Rulesets with Examples (UNO and Turtle Wushu)
- Physical demo of how to design a game together using boxes/doorbell

****
    
- Sample game: 
  - Set the button on a small table. 
  - Set two chairs 5 ft away from the table edge on opposite sides of the table. Be accurate here -- with a tape measurer and masking tape to mark floor. 
  - Player one sits in one chair and player two sits in the other. 
  - A referee, who is chosen before the start of the game, must yell Go! to start the game. 
  - Once the game is started, both players must try to stand up and hit the button. 
  - Whoever hits the button first is the winner. 
  - If there are any questions as to who the winner is, the referee gets final call.

- Questions based on Sample game: 
  - Why is it important for the players to be equidistant from the button? Fairness is often incredibly important in games and creating a game space. Otherwise, the outcomes can be arbitrary and players will find less meaning to playing. 
  - How can this simple game be modded? Perhaps by changing the position and direction of the players chairs. Reverse the chairs so that the players are sitting with their backs facing each other. Put the chairs on the same side of the table, 15 ft away. Does this change the game? Put chair up by table like when you are dining. How does this change the game? 
  - How easy is it to identify who hit the button first? Why do we have a referee making the final calls? Put in a rule that makes it mandatory for the players to keep their hands on top of the button until the referee has looked it. 
  - Split into groups of 2-4 (?)
  - Design 20 games using [Worksheet](files/worksheet.pdf)
  - Review and playtest
    
### Session 2: Hacking boxes and making new interfaces with conductive materials and objects
  
- [Slides](files/slideshow-session-2.pdf)
    - Going over components inside box
    - Making/breaking a circuit and how it exists everywhere
- Overview Conductive Materials and Objects
- Overriding Button/switches by connecting wires and alligator clips. Simply by connecting the ends of the wires or alligator clips, it can be demonstrated that the bell will ring. 
- Design 20 Games with new interfaces
- Final Review and playtest
    
#### Possible Discussion Questions:
- How did you feel opening the electronics? Corporations will insist that their product is made for a specific use. Do you believe that they are limited to the use they tell us it is for? What examples of electronics/products in the past have been hacked and used for other purposes? 
- Did you enjoy designing physical games? There are games like with the switch that allow for more physical interactions with digital games, instead of sitting on a couch and using a traditional game controller. Do you think there will be more digital physical games in the future? 
- Do you think the interface dictates the gesture or the other way around? 