#pragma once
#include <unordered_map>
#include "Resource.h"
#include "Notification.h"

class ResourceManager
{
private:
    std::unordered_map<ResourceType, int> Resources;
    INotificationListener* Notifier = nullptr;

public:
    void SetNotifier(INotificationListener* notifier)
    {
        Notifier = notifier;
    }

    void Add(ResourceType type, int amount)
    {
        Resources[type] += amount;
        if (Notifier)
            Notifier->OnResourceChanged(type, Resources[type]);
    }

    bool HasEnough(const std::unordered_map<ResourceType, int>& cost)
    {
        for (const auto& c : cost)
            if (Resources[c.first] < c.second)
                return false;
        return true;
    }

    void Consume(const std::unordered_map<ResourceType, int>& cost)
    {
        for (const auto& c : cost)
        {
            Resources[c.first] -= c.second;
            if (Notifier)
                Notifier->OnResourceChanged(c.first, Resources[c.first]);
        }
    }
};
