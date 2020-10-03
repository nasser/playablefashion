# Context

### What are Wearable Game Controllers?

Most digital games we play are on game consoles like the Playstation or the XBox using a traditional game controller, or on the PC, using a keyboard and mouse. Nintendo Wii and Switch break the traditional controller mold a bit, but none of these controllers are wearable. There are examples like those used in [Laser Tag](https://en.wikipedia.org/wiki/Laser_tag), and consumer electronics, for example, the [Nintendo Power Glove from 1989](https://en.wikipedia.org/wiki/Power_Glove), or [the Essential Reality P5 Gaming Glove from 2002](https://www.youtube.com/watch?v=2P7H911-mkg). VR headsets are wearable, but they may not be considered controllers, as their main function is outputting images on a screen, rather than sensing direct interactions by the user. But in essence, wearable game controllers can be thought of a kind of controller that has yet to be thoroughly explored.

Most people may not know what wearable game controllers are, but when we think about the developments in and miniaturization of technology, we can start imaging sensors and switches being embedded into things that we wear. If we think about the avatar in a video game, with wearable game controllers, we can “dress up” as the avatar and even play the games with physical gestures that the avatar may perform. Increasing popularity in cosplay, LARPing and Theater-game experiences show potential for costumes to have embedded sensors. This is an exciting time, where we can start to see emerging applications for wearable game controllers.

### Why Wearable Game Controllers?

Games, technology and fashion are interests that a lot of youth have. But without knowing how the technology works, or how it’s made, it is easy for anyone to remain consumers. Learning the technology, skills and thinking behind making these experimental games can help them become producers of games, rather than just consumers.

Moreover, because wearable game controllers are largely unexplored, it is a wonderful space for students to create their own innovative prototypes and explore what they envision the future of games and technology to be. And if we begin to identify that the video games are indeed stuck in a traditional controllers, console and monitor model, we can start to imagine bringing in the video game into our physical world. We can begin to ask: What if we had unique controllers for every video game that was made? As technology becomes more embedded into our physical world, will game interfaces also follow suit? Is this the future of games?

### Hacking and Modding

Buzzkill introduces game design by way of the popular practices of _hacking_ and _modding_. Hacking is the altering of an existing technological artifact to do something it was not originally intended to do, and modding is the modification of an existing game to play differently. We present students with an existing game and invite them to hack it and change the way it works without writing any code. This works to instill early excitement and gratification in the class without the complications of writing code. This also communicates the larger point that students need not take the world as its given to them, and that they are encouraged to dissect and hack the games and technology in their life to better understand it and to more fully own it.

### Custom Controller

Buzzkill uses a controller that the students themselves construct, but still communicates with a conventional computer. This is possible because the controller emulates a keyboard, so the computer cannot tell the difference. This kind of simple interfacing trick is important when getting systems to talk to each other. Buzzkill is also an example of how games using controllers that are can be wearable and quite different from conventional gamepads can unlock totally new play experiences. The controller itself can be modded to match the aesthetic and narrative of the game, allowing for an additional dimension of self expression.

### Prototyping and Mastery of Tools and Materials

When working on hands-on projects, it is important to experience the physical and tactile experience of fabricating a prototype. There are many details that can only be experienced first hand by the participant, and that no amount of textbooks or instructions can communicate. Understanding the nuances of a material or tool is the first step towards attaining mastery of the material or tool and ultimately being able to utilize them to be able to make any kind of prototype imagined. It is worth mentioning this at the end of the module in order to make this point more obvious, by pointing out certain characteristics of the tools and materials they’ve just used. For example, the rate at which the glue comes out of that specific glue gun, or how foam reacts to too much heat.

### FLORA

We will use [Adafruit’s FLORA](https://www.adafruit.com/product/659) which is an Arduino-based open source development tool specifically designed to be used for wearable technology projects. The “petals” on the perimeter of the FLORA allow alligator clips or conductive thread to be used to attach to various components. The FLORA is programmed using the Arduino IDE, with the Arduino Programming Language. A wonderful built-in feature of the FLORA is that it can act like a [USB HID Keyboard](https://en.wikipedia.org/wiki/USB_human_interface_device_class). So it can be connected to any computer as any USB keyboard might be, and programmed to mimic any keyboard strokes or any mouse clicks.

### Unity

Unity is the industry standard game engine used by small independent developers and large corporate game studios alike. It’s first release was in 2005 and it became massively popular around 2008 due to its ability to build high performance games to the iPhone. Since then, it has been extended to build games to 27 different platforms. That said, Unity 3D has always had a free version meant to be accessible to students and new comers to the industry, which makes it an affordable teaching tool.

Unity is programmed primarily in C\#, but it is unique among similar tools in that it is centered on a style of programming called _Entity Component Systems_. Traditional approaches to programming were found to be insufficiently expressive for video game development around the early 2000s, and a series of papers and talks around alternatives began to emerge, most notably [Scott Bilas’s 2002 Game Developer’s Conference Talk “A Data-Driven Game Object System“](https://www.gamedevs.org/uploads/data-driven-game-object-system.pdf). This approach models a game as a collection of _entities_, which are little more than collections of _components_ which do all the work. The experience of building a game involves writing reusable components and mixing and matching them on entities to create the final experience. This model is amenable to modding, hacking, and remixing, because any component can be attached to any entity, allowing for infinite variation without writing new code. This module in particular leans heavily on this expressive power.

We like teaching with Unity because it is the tool that we use ourselves in our creative practice and for paid contract work. This gives us a depth of experience to draw from in the classroom, but also ensures that we are starting our students down a path of learning that could eventually lead to them developing their own creative practice or finding employment. We think of Unity as having a “high ceiling” of expressivity, in that students are unlikely to dream up a game that Unity is unable to support. This is different from other, simpler, made-for-the-classroom tools.

### Worksheets and Guides

The worksheets, whether physical printouts or digital files, are designed to guide the students to work autonomously, at their own pace, freeing the teacher to give individualized attention to students who need it. However, it helps to have teachers show a mini-demonstration of a craft/sewing step before students arrive at a step on the worksheet. Mini demonstrations are best conducted with a small group of students -- however many can gather around and visibly see the physical act of creating. This may require the instructor to break up the class into smaller groups when demonstrating. This method of having the teacher show a mini-demonstration at various times during a class is a popular teaching technique used in sewing classes and in other craft-based learning scenarios.

When handing out the worksheets, all materials and tools should be presented and their characteristics reviewed before the students start making their gloves. For example, when mentioning the copper fabric and alligator clips that they are electrically conductive, or when mentioning the adhesive paper emphasizing which is the rough glue side and which is the smooth paper side. This helps the student familiarize with the materials and tools before they dive in.

### Correct Use of Tools and Safety

Because of the use of the hot glue gun and iron, safety is an important concern and one that should be emphasized throughout its use. While it is important to point out the hazards of the tools and that they can cause burns, it is crucial to instill confidence in the student that when these tools are used correctly, they will not be hurt and the results will be as expected.

* Iron
  * The plate is hot, so don’t touch the plate!
  * Whenever you are done using it, set it upright so that the hot plate is not touching anything. Otherwise it might burn something or cause a fire.
  * Keep the cord away from whatever you are ironing, so that it doesn’t get tangled up.
  * When using the iron with the adhesive bond paper, the iron should be a dry iron, in other words the steam should be turned off. Refer to the instructions for the adhesive bond paper for more information.
  * Whenever ironing the adhesive, it’s important to only keep the iron on for 5 seconds. Otherwise the adhesive will melt too much and create a mess, and the foam will start to curl at the edges
  * Iron should be used with a scrap piece of cotton between the iron and what is being ironed. This protects the prototype from direct heat, but also keeps from the adhesive from getting stuck and ruining the plate. The cloth must be cotton, because synthetics or even blends may melt or burn on the iron. _note: the iron should be designated as a “craft” iron, as the plate will inevitably get messed up. Don’t use your home iron for this!_
  * TURN OFF THE IRON WHEN EVERYONE IS DONE USING IT!
* Hot Glue Gun
  * The tip is hot, so don’t touch the tip!
  * Whenever you are done using it, set it upright so that the hot tip is not touching anything. Otherwise it might burn something or cause a fire.
  * Keep the cord away from whatever you are gluing, so that it doesn’t get tangled up.
  * Glue gun glue especially on fabric can create a mess that is hard to fix. To avoid this, when gluing the pad onto the glove, it helps to just glue the center of the pad to the glove first. Then with the pad faced down on the table, peel back the fabric of the glove to expose the wrong side of the pad. Apply glue to the exposed wrong side of the pad, and then carefully lay the glove fabric over it. Wait a few seconds for it to solidify before picking it up from the table. Do this to the whole perimeter of the pad.
  * TURN OFF THE GLUE GUN WHEN EVERYONE IS DONE USING IT!

