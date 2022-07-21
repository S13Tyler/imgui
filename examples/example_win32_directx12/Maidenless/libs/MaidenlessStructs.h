#pragma once

#include "MaidenlessStructs.generated.h"


namespace MStructs
{
    /* Basic Item Data */
    struct FItem
    {
        string ItemName;
        string Description;

    };

    /* Weapon Data */
    struct FWeapon : public FItem
    {
        MEnums::EDamageType DamageType;
    };

}
