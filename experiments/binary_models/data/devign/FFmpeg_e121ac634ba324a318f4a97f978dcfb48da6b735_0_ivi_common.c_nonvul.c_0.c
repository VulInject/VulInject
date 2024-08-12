int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    const VAR10 *VAR11 = VAR6->VAR3;
    VAR12 *VAR13 = VAR3;
    int VAR14 = VAR6->VAR15;
    int VAR16, VAR17, VAR18;
    FUN2(&VAR8->VAR19, VAR11, VAR14 * 8);
    VAR8->VAR20 = VAR11;
    VAR8->VAR21 = VAR14;
    VAR16 = VAR8->FUN3(VAR8, VAR2);
    if (VAR16)
    {
        FUN4(VAR2, VAR22, "", VAR16);
        return VAR16;
    }
    if (VAR8->VAR23)
        return VAR24;
    if (VAR8->VAR25 && VAR8->VAR26 == VAR27)
    {
        if (VAR8->VAR28)
        {
            FUN5(VAR3, VAR8->VAR29);
            *VAR4 = 1;
            VAR8->VAR28 = 0;
        }
        else
        {
            *VAR4 = 0;
        }
        return VAR14;
    }
    if (VAR8->VAR30 & VAR31)
    {
        FUN6(VAR2, "");
        return VAR32;
    }
    if (!VAR8->VAR33[0].VAR34)
    {
        FUN4(VAR2, VAR22, "");
        return VAR24;
    }
    VAR8->FUN7(VAR8);
    if (VAR8->FUN8(VAR8))
    {
        for (VAR17 = 0; VAR17 < 3; VAR17++)
        {
            for (VAR18 = 0; VAR18 < VAR8->VAR33[VAR17].VAR35; VAR18++)
            {
                VAR16 = FUN9(VAR8, &VAR8->VAR33[VAR17].VAR34[VAR18], VAR2);
                if (VAR16 < 0)
                {
                    FUN4(VAR2, VAR22, "", VAR18, VAR17);
                    return VAR16;
                }
            }
        }
    }
    else
    {
        if (VAR8->VAR36)
            return VAR24;
        for (VAR17 = 0; VAR17 < 3; VAR17++)
        {
            if (!VAR8->VAR33[VAR17].VAR34[0].VAR11)
                return VAR24;
        }
    }
    VAR16 = FUN10(VAR2, VAR8->VAR33[0].VAR37, VAR8->VAR33[0].VAR38);
    if (VAR16 < 0)
        return VAR16;
    if ((VAR16 = FUN11(VAR2, VAR13, 0)) < 0)
    {
        FUN4(VAR2, VAR22, "");
        return VAR16;
    }
    if (VAR8->VAR36)
    {
        if (VAR8->VAR25)
            FUN12(&VAR8->VAR33[0], VAR13->VAR3[0], VAR13->VAR39[0]);
        else
            FUN13(&VAR8->VAR33[0], VAR13->VAR3[0], VAR13->VAR39[0]);
    }
    else
    {
        FUN14(&VAR8->VAR33[0], VAR13->VAR3[0], VAR13->VAR39[0]);
    }
    FUN14(&VAR8->VAR33[2], VAR13->VAR3[1], VAR13->VAR39[1]);
    FUN14(&VAR8->VAR33[1], VAR13->VAR3[2], VAR13->VAR39[2]);
    *VAR4 = 1;
    if (VAR8->VAR25 && VAR8->VAR26 == VAR40)
    {
        int VAR41;
        while (FUN15(&VAR8->VAR19, 8))
            ;
        VAR41 = FUN16(&VAR8->VAR19) & 0x18;
        FUN17(&VAR8->VAR19, 64 - VAR41);
        if (FUN18(&VAR8->VAR19) > 18 && FUN19(&VAR8->VAR19, 21) == 0xBFFF8)
        {
            AVPacket VAR42;
            VAR42.VAR3 = VAR6->VAR3 + (FUN16(&VAR8->VAR19) >> 3);
            VAR42.VAR15 = FUN18(&VAR8->VAR19) >> 3;
            FUN1(VAR2, VAR8->VAR29, &VAR8->VAR28, &VAR42);
        }
    }
    return VAR14;
}