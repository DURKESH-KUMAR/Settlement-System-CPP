#pragma once
#include "Building.h"

class Farmhouse : public Building
{
public:
    Farmhouse()
    {
        Name = "Farmhouse";
        Interval = 2;
        Cost = { {ResourceType::Wood, 50} };
        Production = { {ResourceType::Food, 20} };
    }
};

class BlacksmithI : public Building
{
public:
    BlacksmithI()
    {
        Name = "Blacksmith I";
        Interval = 4;
        Cost = {
            {ResourceType::Wood, 80},
            {ResourceType::Stone, 40}
        };
        Production = { {ResourceType::Weaponry, 5} };
    }
};
