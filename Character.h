#ifndef CHARACTER_H
#define CHARACTER_H

#include "Square.h"
#include "geometry.h"
#include "color.h"

class Character : public Square 
{
    private : 
        Position start_pos;
        Position end_pos;
        Color color;
        const Uint8* keystate;
    
    public : 
        Character(int height, int width, Position pos, Position final_pos); 
        void move(float accx);
        void jump(float accy);
        void draw_character();
        void set_position();
        void gravity();
        void manageEvents(SDL_Event e);
        bool verif_intersection(Square R1,Square R2);
        bool get_isjumping();
        void set_jump(bool jump);
        bool _injump = false;
        Vect speed;
        Vect acc;
        Position current_pos;
        
};


#endif