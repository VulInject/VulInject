int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR3 *VAR5;
    VAR6 *VAR7, *VAR8;
    int VAR9;
    VAR7 = &VAR4->VAR10;
    for (VAR9 = 0; VAR9 < VAR2->VAR11; VAR9++)
    {
        VAR4 = VAR2->VAR12[VAR9];
        VAR8 = &VAR4->VAR10;
        if (VAR8->VAR13 == VAR7->VAR13 && VAR8->VAR14 == VAR7->VAR14 && VAR8->VAR15 == VAR7->VAR15)
        {
            switch (VAR7->VAR14)
            {
            case VAR16:
                if (VAR8->VAR17 == VAR7->VAR17 && VAR8->VAR18 == VAR7->VAR18)
                    goto VAR19;
                break;
            case VAR20:
                if (VAR8->VAR21 == VAR7->VAR21 && VAR8->VAR22 == VAR7->VAR22 && VAR8->VAR23 == VAR7->VAR23 && VAR8->VAR24 == VAR7->VAR24)
                    goto VAR19;
                break;
            default:
                FUN2();
            }
        }
    }
    VAR5 = FUN3(sizeof(VAR3));
    if (!VAR5)
        return -1;
    VAR5->VAR25 = FUN3(sizeof(VAR26));
    memcpy(&VAR5->VAR10, VAR7, sizeof(VAR6));
    VAR2->VAR12[VAR2->VAR11++] = VAR5;
    return VAR2->VAR11 - 1;
VAR19:
    return VAR9;
}