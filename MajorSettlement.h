#pragma once
#include "Settlement.h"
#include "Notification.h"

class MajorSettlement : public Settlement
{
private:
    std::vector<std::unique_ptr<Building>> Buildings;
    std::vector<std::string> BuildingNames;
    INotificationListener* Notifier = nullptr;

public:
    MajorSettlement(INotificationListener* notifier)
    {
        Notifier = notifier;
        Resources.SetNotifier(notifier);
    }

    void AddStartingResource(ResourceType type, int amount)
    {
        Resources.Add(type, amount);
    }

    void Construct(std::unique_ptr<Building> building)
    {
        if (!Resources.HasEnough(building->GetCost()))
            return;

        if (!building->CanBuild(BuildingNames))
            return;

        Resources.Consume(building->GetCost());
        BuildingNames.push_back(building->GetName());

        if (Notifier)
            Notifier->OnBuildingConstructed(building->GetName());

        Buildings.push_back(std::move(building));
    }

    void Update() override
    {
        for (auto& b : Buildings)
            b->Update(Resources);
    }
};
