#pragma once
#include <string>
#include <iostream>
#include "Resource.h"

class INotificationListener
{
public:
    virtual ~INotificationListener() = default;
    virtual void OnBuildingConstructed(const std::string& name) = 0;
    virtual void OnResourceChanged(ResourceType type, int amount) = 0;
};

class ConsoleNotifier : public INotificationListener
{
public:
    void OnBuildingConstructed(const std::string& name) override
    {
        std::cout << "[UI] Building Constructed: " << name << std::endl;
    }

    void OnResourceChanged(ResourceType type, int amount) override
    {
        std::cout << "[UI] Resource Updated -> "
                  << static_cast<int>(type)
                  << " : " << amount << std::endl;
    }
};
