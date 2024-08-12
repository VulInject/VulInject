static void FUN1(VAR1 *VAR2, const VAR3 *VAR4, const VAR5 *VAR6, uint16_t VAR7, uint8_t VAR8)
{
    TCGRegSet VAR9;
    VAR10 *VAR11, *VAR12;
    TCGType VAR13, VAR14;
    FUN2(VAR9, VAR2->VAR15);
    VAR12 = &VAR2->VAR16[VAR6[0]];
    VAR11 = &VAR2->VAR16[VAR6[1]];
    VAR13 = VAR12->VAR17;
    VAR14 = VAR11->VAR17;
    if (((FUN3(0) || VAR12->VAR18) && VAR11->VAR19 != VAR20) || VAR11->VAR19 == VAR21)
    {
        FUN4(VAR2, VAR11, VAR22[VAR14], VAR9);
    }
    if (FUN5(0) && !VAR12->VAR18)
    {
        FUN6(FUN3(0));
        FUN6(VAR11->VAR19 == VAR20);
        if (!VAR12->VAR23)
        {
            FUN7(VAR2, VAR6[0]);
        }
        if (VAR12->VAR24)
        {
            FUN8(VAR9, VAR11->VAR25);
            FUN4(VAR2, VAR12->VAR26, VAR22[VAR27], VAR9);
        }
        FUN9(VAR2, VAR13, VAR11->VAR25, VAR12->VAR26->VAR25, VAR12->VAR28);
        if (FUN5(1))
        {
            FUN10(VAR2, VAR11);
        }
        FUN10(VAR2, VAR12);
    }
    else if (VAR11->VAR19 == VAR29)
    {
        if (VAR12->VAR19 == VAR20)
        {
            VAR2->VAR30[VAR12->VAR25] = NULL;
        }
        VAR12->VAR19 = VAR29;
        VAR12->VAR31 = VAR11->VAR31;
        if (FUN5(1))
        {
            FUN10(VAR2, VAR11);
        }
    }
    else
    {
        FUN6(VAR11->VAR19 == VAR20);
        if (FUN5(1) && !VAR11->VAR18 && !VAR12->VAR18)
        {
            if (VAR12->VAR19 == VAR20)
            {
                VAR2->VAR30[VAR12->VAR25] = NULL;
            }
            VAR12->VAR25 = VAR11->VAR25;
            FUN10(VAR2, VAR11);
        }
        else
        {
            if (VAR12->VAR19 != VAR20)
            {
                FUN8(VAR9, VAR11->VAR25);
                VAR12->VAR25 = FUN11(VAR2, VAR22[VAR13], VAR9, VAR12->VAR32);
            }
            FUN12(VAR2, VAR13, VAR12->VAR25, VAR11->VAR25);
        }
        VAR12->VAR19 = VAR20;
        VAR12->VAR33 = 0;
        VAR2->VAR30[VAR12->VAR25] = VAR12;
        if (FUN3(0))
        {
            FUN13(VAR2, VAR12->VAR25, VAR9);
        }
    }
}