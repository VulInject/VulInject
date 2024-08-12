static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6, int VAR7)
{
    VAR8 *const VAR9 = VAR2->VAR10;
    VAR11 *VAR12 = VAR3;
    VAR11 *VAR13, VAR14;
    int VAR15, VAR16, VAR17;
    VAR16 = FUN2(VAR6);
    if (VAR7 != FUN2(VAR6 + 4) + 8)
    {
        FUN3(VAR9->VAR2, VAR18, "", VAR7, FUN2(VAR6 + 4));
    }
    if (VAR16 == FUN4(""))
    {
        int VAR19 = -1;
        const int VAR4 = VAR7 - 20;
        const int VAR20 = FUN2(VAR6 + 12);
        const int VAR21 = FUN2(VAR6 + 16);
        VAR22 *VAR23;
        for (VAR15 = 0; VAR15 < VAR24; VAR15++)
        {
            if (VAR9->VAR23[VAR15].VAR20 && VAR9->VAR23[VAR15].VAR20 < VAR2->VAR25)
                FUN3(VAR9->VAR2, VAR18, "", VAR9->VAR23[VAR15].VAR20);
        }
        for (VAR15 = 0; VAR15 < VAR24; VAR15++)
        {
            if (VAR9->VAR23[VAR15].VAR20 == VAR20)
                break;
            if (VAR9->VAR23[VAR15].VAR26 == 0)
                VAR19 = VAR15;
        }
        if (VAR15 >= VAR24)
        {
            VAR15 = VAR19;
            VAR9->VAR23[VAR15].VAR20 = VAR20;
        }
        VAR23 = &VAR9->VAR23[VAR15];
        VAR23->VAR3 = FUN5(VAR23->VAR3, &VAR23->VAR27, VAR23->VAR26 + VAR4 + VAR28);
        memcpy(VAR23->VAR3 + VAR23->VAR26, VAR6 + 20, VAR4);
        VAR23->VAR26 += VAR4;
        if (VAR23->VAR26 >= VAR21)
        {
            VAR6 = VAR23->VAR3;
            VAR17 = VAR23->VAR26;
            if (VAR20 != VAR2->VAR25)
            {
                FUN3(VAR9->VAR2, VAR18, "", VAR20, VAR2->VAR25);
            }
            VAR23->VAR26 = VAR23->VAR20 = 0;
            VAR16 = FUN4("");
        }
        else
            return VAR7;
    }
    else
    {
        VAR6 = VAR6 + 12;
        VAR17 = VAR7 - 12;
    }
    VAR14 = VAR9->VAR29;
    VAR9->VAR29 = VAR9->VAR30;
    VAR9->VAR30 = VAR14;
    VAR13 = &VAR9->VAR29;
    VAR2->VAR31 = VAR13;
    VAR2->VAR32 |= VAR33;
    if (VAR13->VAR3[0])
        VAR2->FUN6(VAR2, VAR13);
    VAR13->VAR34 = 1;
    if (VAR2->FUN7(VAR2, VAR13) < 0)
    {
        FUN3(VAR2, VAR18, "");
        return -1;
    }
    if (VAR16 == FUN4(""))
    {
        VAR13->VAR35 = VAR36;
        if (FUN8(VAR9, VAR6, VAR17) < 0)
            return -1;
    }
    else if (VAR16 == FUN4(""))
    {
        VAR13->VAR35 = VAR37;
        if (FUN9(VAR9, VAR6, VAR17) < 0)
            return -1;
    }
    else if (VAR16 == FUN4(""))
    {
        FUN3(VAR2, VAR18, "", VAR7);
    }
    else
    {
        FUN3(VAR2, VAR18, "", VAR7);
    }
    for (VAR15 = 0; VAR15 < 20; VAR15++)
    {
        FUN10("", VAR6[VAR15], FUN11(VAR6[VAR15], 16, 126));
    }
    VAR13->VAR38 = VAR13->VAR35 == VAR36;
    *VAR12 = *VAR13;
    *VAR4 = sizeof(VAR39);
    FUN12();
    return VAR7;
}