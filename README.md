# CS-220-Virtual-Pet-Simulation-Cpp-Taylor-S.



## Animal Base/Parent Class:

● created Animal class with virtual methods: printDesc(), drawPet(), makeSound(), checkStatus()

● Included attributes and behaviors typical of a Tamagotchi game, such as hunger and happiness.

● Implemented the accessor and mutator functions for these data attributes.


## Derived/Child Classes:

● Created 2 derived/child classes for different animals (e.g. Lion, Parrot, Snake).

● Implemented the accessor and mutator (getter/setter) functions for the unique attributes of each different animal.

● Implemented the virtual functions using behaviors specific to that animal. Each child class overrides the base/parent class methods to implement behaviors specific to that animal.

	eat() - Display a message that includes the animal’s name, favorite food / Decrease hunger by 1 (Lower numbers preferred)
	
	play() - Display a message that includes the animals name, typical movement / Increase mood by 1 
	
	makeSound() - Display a message that includes the animals name, and based on the hunger and mood, display the typical sound made by animal
	
	drawPet() - Draw a picture of the animal using ASCII art

	printDesc() - Display a message with the following - Animal’s name and Each of the fields unique to it (i.e. dog breed, favorite food, movement, hunger, happiness/mood, etc.)

	checkStatus()  - Implements a method in the parent/base class to check and display the status of each animal, giving the player feedback on their care.
 
