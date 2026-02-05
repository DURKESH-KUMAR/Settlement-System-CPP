#include "MajorSettlement.h"
#include "MinorSettlement.h"
#include "Buildings.h"
#include "Notification.h"

int main()
{
    ConsoleNotifier notifier;

    MajorSettlement city(&notifier);

    city.AddStartingResource(ResourceType::Wood, 200);
    city.AddStartingResource(ResourceType::Stone, 100);

    city.Construct(std::make_unique<Farmhouse>());
    city.Construct(std::make_unique<BlacksmithI>());

    for (int day = 1; day <= 10; ++day)
    {
        std::cout << "\nDay " << day << std::endl;
        city.Update();
    }

    return 0;
}
