/******************************************************************************
* app_init_map.cpp
* CS 281 - 0798, Fall 2020
*
* Room map initialization functions
* 
* The Room map is an array of Room pointers in each Room.
* Each Room knows which Room can be accessed in each direction.
* There is no overall map of the Rooms.
*******************************************************************************
*/
#include "app.h"

/******************************************************************************
* void initRoomMap()
*******************************************************************************
*/
void initRoomMap()
{
    //Initialize Welcome Center
    g_pWelcomeCenter->setDirectionPtr(ROOM_SOUTH, g_pClothingStore);

    //Initialize Clothing Store
    g_pClothingStore->setDirectionPtr(ROOM_NORTH, g_pWelcomeCenter);
    g_pClothingStore->setDirectionPtr(ROOM_EAST, g_pMovieTheater);

    //Initialize Movie Theater
    g_pMovieTheater->setDirectionPtr(ROOM_WEST, g_pClothingStore);
    g_pMovieTheater->setDirectionPtr(ROOM_NORTH, g_pCandyShop);

    //Initialize Candy Shop
    g_pCandyShop->setDirectionPtr(ROOM_SOUTH, g_pMovieTheater);
    g_pCandyShop->setDirectionPtr(ROOM_WEST, g_pFoodCourt);

    //Initialize Food Court
    g_pFoodCourt->setDirectionPtr(ROOM_EAST, g_pCandyShop);
    g_pFoodCourt->setDirectionPtr(ROOM_WEST, g_pWelcomeCenter);
}
