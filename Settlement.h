#pragma once
#include <vector>
#include <memory>
#include "ResourceManager.h"
#include "Building.h"

class Settlement
{
protected:
    ResourceManager Resources;

public:
    virtual ~Settlement() = default;
    virtual void Update() = 0;
};
