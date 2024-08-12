static int FUN1(VAR1 *VAR2)
{
    struct VAR3 *VAR3 = VAR2->VAR4;
    int VAR5, VAR6;
    VAR3->VAR7 = -1;
    do
    {
        VAR5 = FUN2(VAR2, NULL, NULL, NULL, NULL);
        if (VAR5 < 0)
        {
            FUN3(VAR2);
            return VAR5;
        }
    } while (!VAR3->VAR8);
    FUN4(VAR2, VAR9, "");
    for (VAR6 = 0; VAR6 < VAR3->VAR10; VAR6++)
    {
        struct VAR11 *VAR12 = VAR3->VAR13 + VAR6;
        if (VAR3->VAR13[VAR6].VAR14 < 0)
        {
            FUN4(VAR2, VAR15, "", VAR6);
            VAR3->VAR13[VAR6].VAR16 = NULL;
        }
        else if (VAR12->VAR16 && VAR12->VAR17 < VAR12->VAR16->VAR17)
        {
            FUN4(VAR2, VAR18, ""
                                      "",
                   VAR6, VAR12->VAR16->VAR17, VAR12->VAR17);
            if (VAR2->VAR19 & VAR20)
                return VAR21;
        }
        if (VAR12->VAR22 != VAR23)
            VAR12->VAR24 = VAR2->VAR13[VAR6]->VAR25 = FUN5(VAR2, VAR6, VAR12->VAR22, NULL);
    }
    VAR5 = FUN6(VAR2);
    if (VAR5 < 0)
    {
        FUN3(VAR2);
        return VAR5;
    }
    return 0;