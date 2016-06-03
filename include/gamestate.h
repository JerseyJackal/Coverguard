#ifndef GAMESTATE_H
#define GAMESTATE_H

#include <vector>
#include <memory>

#include "entity.h"
#include "map.h"

class Gamestate
{
    public:
        Gamestate();
        ~Gamestate();
        void update(double frametime);
        Gamestate* clone();

        std::vector<Entity*> entitylist;
        double time;
        std::shared_ptr<Map> currentmap;
    protected:
    private:
};

#endif // GAMESTATE_H
