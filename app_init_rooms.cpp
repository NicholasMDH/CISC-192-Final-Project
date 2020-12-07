/******************************************************************************
* app_init_rooms.cpp
* CS 281 - 0798, Fall 2020
*
* Room initialization functions
*   - set Room entry text, exit text, direction text
*   - install Treasures in Room Treasure vector or in Room mixed vector
*   - install Weapons in Room Weapon vector or in Room mixed vector
* #TODO
*   - install magic words in Room MagicWord vector
*******************************************************************************
*/
#include "app.h"

/******************************************************************************
* Room* initWelcomeCenter()
*******************************************************************************
*/
Room* initWelcomeCenter()
{
    Room* pRoom = new Room();

    // set Room name and point value
    pRoom->setPoints(100);
    pRoom->setName("the Welcome Center");

    // set Room text for entry, exit, and every direction
    pRoom->setEntryText("Your adventure starts in an unassuming, though somewhat dilapidated Welcome center.\nThere doesn't seem to be anyone around, but there are a few things in the room that catch your eye.");
    pRoom->setExitText("You are leaving the Welcome Center.");
    pRoom->setDirectionText(ROOM_NORTH, "Nothing to the North");
    pRoom->setDirectionText(ROOM_SOUTH, "Clothing Store to the South");
    pRoom->setDirectionText(ROOM_EAST, "Nothing to the East");
    pRoom->setDirectionText(ROOM_WEST, "Nothing to the West");
    pRoom->setDirectionText(ROOM_UP, "Broken ceiling tiles above");
    pRoom->setDirectionText(ROOM_DOWN, "Dust and rubble below");

    // create and initialize Treasure instance
    Treasure* pTreasure = new Treasure();
    pTreasure->setName("Welcome Guide");
    pTreasure->setPoints(75);

    // install Treasure pointer in Room's Treasure vector
    pRoom->addTreasure(pTreasure);

    // create and initialize Weapon instance
    Weapon* pWeapon = new Weapon();
    pWeapon->setName("Mobility Scooter");
    pWeapon->setText("Vroom!");
    pWeapon->setPoints(100);

    // install Weapon pointer in Room's Weapon vector
    pRoom->addWeapon(pWeapon);

    // create and initialize MagicWord instance
    MagicWord* pMagicWord = new MagicWord();
    pMagicWord->setName("Welcome phrase");
    pMagicWord->setWordText("Greetings");
    pMagicWord->setPoints(200);

    // install MagicWord pointer in Room's MagicWord vector
    pRoom->addMagicWord(pMagicWord);

    return pRoom;
}

/******************************************************************************
* Room* initClothingStore()
*******************************************************************************
*/
Room* initClothingStore()
{
    Room* pRoom = new Room();

    // set Room name and point value
    pRoom->setName("the Clothing Store");
    pRoom->setPoints(100);

    // set Room text for entry, exit, and every direction
    pRoom->setEntryText("The store has long been looted, there seems to be nothing on the racks except for old hangars,\nthough a glint coming from below a display case catches your eye.");
    pRoom->setExitText("You are leaving the Clothing Store.");
    pRoom->setDirectionText(ROOM_NORTH, "Welcome Center to the North");
    pRoom->setDirectionText(ROOM_SOUTH, "Nothing to the South");
    pRoom->setDirectionText(ROOM_EAST, "Movie Theater to the East");
    pRoom->setDirectionText(ROOM_WEST, "Nothing to the West");
    pRoom->setDirectionText(ROOM_UP, "Broken ceiling tiles above");
    pRoom->setDirectionText(ROOM_DOWN, "Dust and rubble below");

    // create and initialize Treasure instance
    Treasure* pTreasure = new Treasure();
    pTreasure->setName("Jewlery");
    pTreasure->setPoints(150);

    // install Treasure pointer in Room's Treasure vector
    pRoom->addTreasure(pTreasure);

    // create and initialize Weapon instance
    Weapon* pWeapon = new Weapon();
    pWeapon->setName("Rusty Coat Hanger");
    pWeapon->setText("Twang!");
    pWeapon->setPoints(100);

    // install Weapon pointer in Room's Weapon vector
    pRoom->addWeapon(pWeapon);

    return pRoom;
}

/******************************************************************************
* Room* initMovieTheater()
*******************************************************************************
*/
Room* initMovieTheater()
{
    Room* pRoom = new Room();

    // set Room name and point value
    pRoom->setPoints(100);
    pRoom->setName("the Movie Theater");

    // set Room text for entry, exit, and every direction
    pRoom->setEntryText("This place smells, even a decade after being closed, there's still popcorn kernels littered on the floor,\nlife-size recreations of characters from old movies, and little pieces of paper littered on the ground.\nSuddenly, you hear a rustling coming from the food counter...");
    pRoom->setExitText("You are leaving the Movie Theater.");
    pRoom->setDirectionText(ROOM_NORTH, "Candy Shop to the North");
    pRoom->setDirectionText(ROOM_SOUTH, "Nothing to the South");
    pRoom->setDirectionText(ROOM_EAST, "Nothing to the East");
    pRoom->setDirectionText(ROOM_WEST, "Clothing Store to the West");
    pRoom->setDirectionText(ROOM_UP, "Broken ceiling tiles above");
    pRoom->setDirectionText(ROOM_DOWN, "Dust and rubble below");

    // create and initialize Treasure instance
    Treasure* pTreasure = new Treasure();
    pTreasure->setName("Movie Stubs");
    pTreasure->setPoints(25);

    // install Treasure pointer in Room's Treasure vector
    pRoom->addTreasure(pTreasure);

    // create and initialize MagicWord instance
    MagicWord* pMagicWord = new MagicWord();
    pMagicWord->setName("Media shown in theaters");
    pMagicWord->setWordText("Film");
    pMagicWord->setPoints(200);

    // install MagicWord pointer in Room's MagicWord vector
    pRoom->addMagicWord(pMagicWord);

    // create and initialize Weapon instance
    Weapon* pWeapon = new Weapon();
    pWeapon->setName("Prop Sword");
    pWeapon->setText("Swoosh!");
    pWeapon->setPoints(100);

    // install Treasure pointer in Room's Treasure vector
    pRoom->addWeapon(pWeapon);

    // create and initialize Bogie instance
    Bogie* pBogie = new Bogie();
    pBogie->setName("Rat");
    pBogie->setText("*lunges for your throat*");
    pBogie->setPoints(200);

    // install Bogie pointer in Room's Bogie vector
    pRoom->addBogie(pBogie);

    return pRoom;
}

/******************************************************************************
* Room* initCandyShop()
*******************************************************************************
*/
Room* initCandyShop()
{
    Room* pRoom = new Room();

    // set Room name and point value
    pRoom->setPoints(150);
    pRoom->setName("the Candy Shop");

    // set Room text for entry, exit, and every direction
    pRoom->setEntryText("This is the only store that still has old product on the shelves.\nSuddenly, you see a character stand up from behind the counter, and freeze, staring right at you.");
    pRoom->setExitText("You are leaving the Candy Shop.");
    pRoom->setDirectionText(ROOM_NORTH, "Nothing to the North");
    pRoom->setDirectionText(ROOM_SOUTH, "Movie Theater to the South");
    pRoom->setDirectionText(ROOM_EAST, "Nothing to the East");
    pRoom->setDirectionText(ROOM_WEST, "Food Court to the West");
    pRoom->setDirectionText(ROOM_UP, "Broken ceiling tiles above");
    pRoom->setDirectionText(ROOM_DOWN, "Dust and rubble below");

    // create and initialize Treasure instance
    Treasure* pTreasure = new Treasure();
    pTreasure->setName("Candy Bracelet");
    pTreasure->setPoints(50);

    // install Treasure pointer in Room's Treasure vector
    pRoom->addTreasure(pTreasure);

    // create and initialize MagicWord instance
    MagicWord* pMagicWord = new MagicWord();
    pMagicWord->setName("____ treats");
    pMagicWord->setWordText("Sweet");
    pMagicWord->setPoints(200);

    // install MagicWord pointer in Room's MagicWord vector
    pRoom->addMagicWord(pMagicWord);

    // create and initialize Bogie instance
    Bogie* pBogie = new Bogie();
    pBogie->setName("Loompa Oompa");
    pBogie->setText("Oompa Loompa Doopity Doo...");
    pBogie->setPoints(200);

    // install Bogie pointer in Room's Bogie vector
    pRoom->addBogie(pBogie);

    return pRoom;
}

/******************************************************************************
* Room* initFoodCourt()
*******************************************************************************
*/
Room* initFoodCourt()
{
    Room* pRoom = new Room();

    // set Room name and point value
    pRoom->setPoints(150);
    pRoom->setName("the Food Court");

    // set Room text for entry, exit, and every direction
    pRoom->setEntryText("You come out of the candy shop, and into an open-air food court, and to the end of your adventure.\nYou see a door back to the welcome center to your left. Nothing else to see here, or is there?");
    pRoom->setExitText("You are leaving the Food Court.");
    pRoom->setDirectionText(ROOM_NORTH, "Nothing to the North horizon");
    pRoom->setDirectionText(ROOM_SOUTH, "Nothing to the South");
    pRoom->setDirectionText(ROOM_EAST, "Candy Shop to the East");
    pRoom->setDirectionText(ROOM_WEST, "Welcome Center to the West");
    pRoom->setDirectionText(ROOM_UP, "Cloudy skies above");
    pRoom->setDirectionText(ROOM_DOWN, "Dust and rubble below");

    // create and initialize MagicWord instance
    MagicWord* pMagicWord = new MagicWord();
    pMagicWord->setName("Roll Credits");
    pMagicWord->setWordText("Game Over");
    pMagicWord->setPoints(200);

    // install MagicWord pointer in Room's MagicWord vector
    pRoom->addMagicWord(pMagicWord);

    return pRoom;
}

