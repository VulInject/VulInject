static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9 = VAR6->VAR10;
    int64_t VAR11, VAR12 = VAR4->VAR13;
    int64_t VAR14;
    int VAR15;
    if (VAR9->VAR16)
    {
        FUN2(&VAR4);
        return 0;
    }
    if (VAR4->VAR14 != VAR17)
        VAR14 = FUN3(VAR4->VAR14, VAR2->VAR18, (VAR19){1, VAR2->VAR20});
    else
        VAR14 = VAR9->VAR21;
    VAR9->VAR21 = VAR14 + VAR4->VAR13;
    if (VAR9->VAR11 < 0 && VAR9->VAR22 == VAR17)
    {
        VAR11 = 0;
    }
    else
    {
        VAR15 = 1;
        VAR11 = VAR4->VAR13;
        if (VAR9->VAR11 >= 0 && VAR9->VAR13 + VAR4->VAR13 > VAR9->VAR11)
        {
            VAR15 = 0;
            VAR11 = FUN4(VAR11, VAR9->VAR11 - VAR9->VAR13);
        }
        if (VAR9->VAR22 != VAR17 && VAR14 != VAR17 && VAR14 + VAR4->VAR13 > VAR9->VAR22)
        {
            VAR15 = 0;
            VAR11 = FUN4(VAR11, VAR9->VAR22 - VAR14);
        }
        if (VAR15)
            goto VAR15;
    }
    if (VAR9->VAR23 == VAR17)
        VAR9->VAR23 = VAR14 + VAR11;
    if (VAR9->VAR12 == VAR24 && VAR9->VAR25 == VAR17 && !VAR9->VAR26)
    {
        VAR12 = VAR4->VAR13;
    }
    else
    {
        VAR15 = 1;
        VAR12 = 0;
        if (VAR9->VAR12 != VAR24 && VAR9->VAR13 < VAR9->VAR12)
        {
            VAR15 = 0;
            VAR12 = FUN5(VAR12, VAR9->VAR12 - VAR9->VAR13);
        }
        if (VAR9->VAR25 != VAR17 && VAR14 != VAR17 && VAR14 < VAR9->VAR25)
        {
            VAR15 = 0;
            VAR12 = FUN5(VAR12, VAR9->VAR25 - VAR14);
        }
        if (VAR9->VAR26 && VAR14 - VAR9->VAR23 < VAR9->VAR26)
        {
            VAR15 = 0;
            VAR12 = FUN5(VAR12, VAR9->VAR23 + VAR9->VAR26 - VAR14);
        }
        if (VAR15)
        {
            VAR9->VAR16 = 1;
            goto VAR15;
        }
    }
    VAR9->VAR13 += VAR4->VAR13;
    VAR11 = FUN5(0, VAR11);
    VAR12 = FUN4(VAR4->VAR13, VAR12);
    FUN6(VAR11 < VAR12);
    if (VAR11)
    {
        VAR3 *VAR27 = FUN7(VAR6->VAR28[0], VAR12 - VAR11);
        if (!VAR27)
        {
            FUN2(&VAR4);
            return FUN8(VAR29);
        }
        FUN9(VAR27, VAR4);
        FUN10(VAR27->VAR30, VAR4->VAR30, 0, VAR11, VAR27->VAR13, FUN11(VAR4->VAR31), VAR4->VAR32);
        if (VAR27->VAR14 != VAR17)
            VAR27->VAR14 += FUN3(VAR11, (VAR19){1, VAR27->VAR20}, VAR2->VAR18);
        FUN2(&VAR4);
        VAR4 = VAR27;
    }
    else
        VAR4->VAR13 = VAR12;
    return FUN12(VAR6->VAR28[0], VAR4);
VAR15:
    VAR9->VAR13 += VAR4->VAR13;
    FUN2(&VAR4);
    return 0;
}