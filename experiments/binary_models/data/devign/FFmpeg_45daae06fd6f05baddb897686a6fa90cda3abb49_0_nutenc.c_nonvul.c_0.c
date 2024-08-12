static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5, VAR6, VAR7, VAR8, VAR9, VAR10, VAR11, VAR12, VAR13;
    int64_t VAR14;
    FUN2(VAR4, VAR2->VAR15);
    if (VAR2->VAR15 > 3)
        FUN2(VAR4, VAR2->VAR16);
    FUN2(VAR4, VAR2->VAR17->VAR18);
    FUN2(VAR4, VAR2->VAR19);
    FUN2(VAR4, VAR2->VAR20);
    for (VAR5 = 0; VAR5 < VAR2->VAR20; VAR5++)
    {
        FUN2(VAR4, VAR2->VAR21[VAR5].VAR22);
        FUN2(VAR4, VAR2->VAR21[VAR5].VAR23);
    }
    VAR7 = 0;
    VAR10 = 1;
    VAR9 = 0;
    VAR14 = 1 - (1LL << 62);
    VAR13 = 0;
    for (VAR5 = 0; VAR5 < 256;)
    {
        VAR12 = 0;
        VAR11 = 0;
        if (VAR7 != VAR2->VAR24[VAR5].VAR25)
            VAR12 = 1;
        if (VAR10 != VAR2->VAR24[VAR5].VAR26)
            VAR12 = 2;
        if (VAR9 != VAR2->VAR24[VAR5].VAR27)
            VAR12 = 3;
        if (VAR11 != VAR2->VAR24[VAR5].VAR28)
            VAR12 = 4;
        if (VAR13 != VAR2->VAR24[VAR5].VAR29)
            VAR12 = 8;
        VAR7 = VAR2->VAR24[VAR5].VAR25;
        VAR8 = VAR2->VAR24[VAR5].VAR30;
        VAR9 = VAR2->VAR24[VAR5].VAR27;
        VAR10 = VAR2->VAR24[VAR5].VAR26;
        VAR11 = VAR2->VAR24[VAR5].VAR28;
        VAR13 = VAR2->VAR24[VAR5].VAR29;
        for (VAR6 = 0; VAR5 < 256; VAR6++, VAR5++)
        {
            if (VAR5 == '')
            {
                VAR6--;
                continue;
            }
            if (VAR2->VAR24[VAR5].VAR25 != VAR7 || VAR2->VAR24[VAR5].VAR30 != VAR8 || VAR2->VAR24[VAR5].VAR27 != VAR9 || VAR2->VAR24[VAR5].VAR26 != VAR10 || VAR2->VAR24[VAR5].VAR28 != VAR11 + VAR6 || VAR2->VAR24[VAR5].VAR29 != VAR13)
                break;
        }
        if (VAR6 != VAR10 - VAR11)
            VAR12 = 6;
        FUN2(VAR4, VAR8);
        FUN2(VAR4, VAR12);
        if (VAR12 > 0)
            FUN3(VAR4, VAR7);
        if (VAR12 > 1)
            FUN2(VAR4, VAR10);
        if (VAR12 > 2)
            FUN2(VAR4, VAR9);
        if (VAR12 > 3)
            FUN2(VAR4, VAR11);
        if (VAR12 > 4)
            FUN2(VAR4, 0);
        if (VAR12 > 5)
            FUN2(VAR4, VAR6);
        if (VAR12 > 6)
            FUN2(VAR4, VAR14);
        if (VAR12 > 7)
            FUN2(VAR4, VAR13);
    }
    FUN2(VAR4, VAR2->VAR31 - 1);
    for (VAR5 = 1; VAR5 < VAR2->VAR31; VAR5++)
    {
        FUN2(VAR4, VAR2->VAR32[VAR5]);
        FUN4(VAR4, VAR2->VAR33[VAR5], VAR2->VAR32[VAR5]);
    }
    if (VAR2->VAR15 > 3)
        FUN2(VAR4, VAR2->VAR30);
}