#include <SDL2/SDL.h>

#include <stdio.h> //DEBUG

#include "Level.h"
#include "Character.h"

Level::Level(Square* tab_square, Character* tab_character[], int nb_character)
{
    this->tab_square = tab_square;
    this->tab_character = tab_character;
    this->nb_character = nb_character ; 
    this->current_character = tab_character[0]; 
}

Character* Level::get_current_character(){
    return this->current_character;
}


void Level::set_nb_character_end(int nb_character_end)
{
    this->nb_character_end = nb_character_end;
}

void Level::set_current_character(int new_current)
{
    this->current_character = tab_character[new_current];
}

void Level::draw()
{
    for (int i=0 ; i<this->nb_character ; i++){
        (this->tab_character[i])->draw_character(1); 
    }
}

void Level::manageEvents(SDL_Event e)
{   
    this->current_character->manageEvents(e);
}

