#pragma once
#include "Settlement.h"

class MinorSettlement : public Settlement
{
private:
    int Interval = 3;
    int Days = 0;

public:
    MinorSettlement()
    {
        Resources.Add(ResourceType::Food, 10);
    }

    void Update() override
    {
        Days++;
        if (Days >= Interval)
        {
            Resources.Add(ResourceType::Food, 10);
            Days = 0;
        }
    }
};
