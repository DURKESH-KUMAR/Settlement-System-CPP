#pragma once
#include <string>
#include <unordered_map>
#include <vector>
#include "Resource.h"
#include "ResourceManager.h"

class Building
{
protected:
    std::string Name;
    int Interval;
    int Days = 0;

    std::unordered_map<ResourceType, int> Cost;
    std::unordered_map<ResourceType, int> Production;

public:
    virtual ~Building() = default;

    const std::string& GetName() const { return Name; }
    const std::unordered_map<ResourceType, int>& GetCost() const { return Cost; }

    virtual bool CanBuild(const std::vector<std::string>& existing) const
    {
        return true;
    }

    void Update(ResourceManager& manager)
    {
        Days++;
        if (Days >= Interval)
        {
            for (const auto& p : Production)
                manager.Add(p.first, p.second);
            Days = 0;
        }
    }
};
