int FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4 = 0;
    if (!VAR2->VAR5)
        return FUN2(VAR6);
    if (VAR2->VAR7 > 1)
    {
        for (VAR3 = 0; VAR3 < VAR2->VAR7; VAR3++)
        {
            FUN3(VAR2->VAR8[VAR3]);
        }
        for (VAR3 = 1; VAR3 < VAR2->VAR7; VAR3++)
        {
            FUN4(&VAR2->VAR8[VAR3]);
        }
    }
    else
        FUN3(VAR2);
    FUN5(VAR2);
    if (VAR2->VAR9)
        for (VAR3 = 0; VAR3 < VAR10; VAR3++)
        {
            VAR2->VAR9[VAR3].VAR11 = 1;
        }
    VAR2->VAR12 = VAR2->VAR13 = VAR2->VAR14 = NULL;
    if (VAR2->VAR15 == VAR16 && !VAR2->VAR17)
        VAR2->VAR18 = (VAR2->VAR19 + 31) / 32 * 2;
    else
        VAR2->VAR18 = (VAR2->VAR19 + 15) / 16;
    if ((VAR2->VAR20 || VAR2->VAR19) && (VAR4 = FUN6(VAR2->VAR20, VAR2->VAR19, 0, VAR2->VAR21)) < 0)
        goto VAR22;
    if ((VAR4 = FUN7(VAR2)))
        goto VAR22;
    memset(VAR2->VAR8, 0, sizeof(VAR2->VAR8));
    VAR2->VAR8[0] = VAR2;
    if (VAR2->VAR20 && VAR2->VAR19)
    {
        int VAR23 = VAR2->VAR7;
        if (VAR23 > 1)
        {
            for (VAR3 = 0; VAR3 < VAR23; VAR3++)
            {
                if (VAR3)
                {
                    VAR2->VAR8[VAR3] = FUN8(sizeof(VAR1));
                    memcpy(VAR2->VAR8[VAR3], VAR2, sizeof(VAR1));
                }
                if ((VAR4 = FUN9(VAR2->VAR8[VAR3])) < 0)
                    goto VAR22;
                VAR2->VAR8[VAR3]->VAR24 = (VAR2->VAR18 * (VAR3) + VAR23 / 2) / VAR23;
                VAR2->VAR8[VAR3]->VAR25 = (VAR2->VAR18 * (VAR3 + 1) + VAR23 / 2) / VAR23;
            }
        }
        else
        {
            VAR4 = FUN9(VAR2);
            if (VAR4 < 0)
                goto VAR22;
            VAR2->VAR24 = 0;
            VAR2->VAR25 = VAR2->VAR18;
        }
        VAR2->VAR7 = VAR23;
    }
    return 0;
VAR22:
    FUN10(VAR2);
    return VAR4;
}