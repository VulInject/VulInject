int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    const VAR10 *VAR11 = VAR6->VAR3;
    int VAR12 = VAR6->VAR13;
    int VAR14, VAR15, VAR16;
    FUN2(&VAR8->VAR17, VAR11, VAR12 * 8);
    VAR8->VAR18 = VAR11;
    VAR8->VAR19 = VAR12;
    VAR14 = VAR8->FUN3(VAR8, VAR2);
    if (VAR14)
    {
        FUN4(VAR2, VAR20, "", VAR14);
        return -1;
    }
    if (VAR8->VAR21)
        return VAR22;
    if (VAR8->VAR23 & VAR24)
    {
        FUN4(VAR2, VAR20, "");
        return -1;
    }
    VAR8->FUN5(VAR8);
    if (VAR8->FUN6(VAR8))
    {
        for (VAR15 = 0; VAR15 < 3; VAR15++)
        {
            for (VAR16 = 0; VAR16 < VAR8->VAR25[VAR15].VAR26; VAR16++)
            {
                VAR14 = FUN7(VAR8, VAR15, &VAR8->VAR25[VAR15].VAR27[VAR16], VAR2);
                if (VAR14)
                {
                    FUN4(VAR2, VAR20, "", VAR16, VAR15);
                    return -1;
                }
            }
        }
    }
    if (VAR2->VAR28 == VAR29 && VAR8->VAR30 == 0)
    {
        while (FUN8(&VAR8->VAR17, 8))
            ;
        FUN9(&VAR8->VAR17, 64);
        if (FUN10(&VAR8->VAR17) > 18 && FUN11(&VAR8->VAR17, 18) == 0x3FFF8)
            FUN4(VAR2, VAR20, "");
    }
    if (VAR8->VAR31.VAR3[0])
        VAR2->FUN12(VAR2, &VAR8->VAR31);
    VAR8->VAR31.VAR32 = 0;
    if ((VAR14 = VAR2->FUN13(VAR2, &VAR8->VAR31)) < 0)
    {
        FUN4(VAR2, VAR20, "");
        return VAR14;
    }
    if (VAR8->VAR33)
    {
        if (VAR2->VAR28 == VAR29)
            FUN14(&VAR8->VAR25[0], VAR8->VAR31.VAR3[0], VAR8->VAR31.VAR34[0], 4);
        else
            FUN15(&VAR8->VAR25[0], VAR8->VAR31.VAR3[0], VAR8->VAR31.VAR34[0], 4);
    }
    else
    {
        FUN16(&VAR8->VAR25[0], VAR8->VAR31.VAR3[0], VAR8->VAR31.VAR34[0]);
    }
    FUN16(&VAR8->VAR25[2], VAR8->VAR31.VAR3[1], VAR8->VAR31.VAR34[1]);
    FUN16(&VAR8->VAR25[1], VAR8->VAR31.VAR3[2], VAR8->VAR31.VAR34[2]);
    *VAR4 = sizeof(VAR35);
    *(VAR35 *)VAR3 = VAR8->VAR31;
    return VAR12;