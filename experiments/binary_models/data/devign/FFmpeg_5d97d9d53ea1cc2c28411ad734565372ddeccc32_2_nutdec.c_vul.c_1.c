static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7 = &VAR4->VAR8;
    uint64_t VAR9, VAR10;
    unsigned int VAR11;
    int VAR12, VAR13, VAR14, VAR15, VAR16, VAR17, VAR18, VAR19;
    VAR10 = FUN2(VAR2, VAR7, 1);
    VAR10 += FUN3(VAR7) - 4;
    FUN4(VAR9, VAR9 >= 2 && VAR9 <= 3)
    FUN4(VAR11, VAR9 > 0 && VAR9 <= VAR20) VAR2->VAR21 = FUN5(VAR7);
    if (VAR2->VAR21 > 65536)
    {
        FUN6(VAR4, VAR22, "", VAR2->VAR21);
        VAR2->VAR21 = 65536;
    }
    FUN4(VAR2->VAR23, VAR9 > 0 && VAR9 < VAR24 / sizeof(VAR25))
    VAR2->VAR26 = FUN7(VAR2->VAR23 * sizeof(VAR25));
    for (VAR12 = 0; VAR12 < VAR2->VAR23; VAR12++)
    {
        FUN4(VAR2->VAR26[VAR12].VAR27, VAR9 > 0 && VAR9 < (1ULL << 31))
        FUN4(VAR2->VAR26[VAR12].VAR28, VAR9 > 0 && VAR9 < (1ULL << 31)) if (FUN8(VAR2->VAR26[VAR12].VAR27, VAR2->VAR26[VAR12].VAR28) != 1)
        {
            FUN6(VAR4, VAR29, "");
            return -1;
        }
    }
    VAR16 = 0;
    VAR15 = 1;
    VAR14 = 0;
    for (VAR12 = 0; VAR12 < 256;)
    {
        int VAR30 = FUN5(VAR7);
        int VAR31 = FUN5(VAR7);
        if (VAR31 > 0)
            VAR16 = FUN9(VAR7);
        if (VAR31 > 1)
            VAR15 = FUN5(VAR7);
        if (VAR31 > 2)
            VAR14 = FUN5(VAR7);
        if (VAR31 > 3)
            VAR17 = FUN5(VAR7);
        else
            VAR17 = 0;
        if (VAR31 > 4)
            VAR19 = FUN5(VAR7);
        else
            VAR19 = 0;
        if (VAR31 > 5)
            VAR18 = FUN5(VAR7);
        else
            VAR18 = VAR15 - VAR17;
        while (VAR31-- > 6)
            FUN5(VAR7);
        if (VAR18 == 0 || VAR12 + VAR18 > 256)
        {
            FUN6(VAR4, VAR29, "", VAR18, VAR12);
            return -1;
        }
        if (VAR14 >= VAR11)
        {
            FUN6(VAR4, VAR29, "");
            return -1;
        }
        for (VAR13 = 0; VAR13 < VAR18; VAR13++, VAR12++)
        {
            if (VAR12 == '')
            {
                VAR2->VAR32[VAR12].VAR33 = VAR34;
                VAR13--;
                continue;
            }
            VAR2->VAR32[VAR12].VAR33 = VAR30;
            VAR2->VAR32[VAR12].VAR35 = VAR16;
            VAR2->VAR32[VAR12].VAR36 = VAR14;
            VAR2->VAR32[VAR12].VAR37 = VAR15;
            VAR2->VAR32[VAR12].VAR38 = VAR17 + VAR13;
            VAR2->VAR32[VAR12].VAR39 = VAR19;
        }
    }
    assert(VAR2->VAR32[''].VAR33 == VAR34);
    if (FUN10(VAR7, VAR10) || FUN11(VAR7))
    {
        FUN6(VAR4, VAR29, "");
        return -1;
    }
    VAR2->VAR40 = FUN12(sizeof(VAR41) * VAR11);
    for (VAR12 = 0; VAR12 < VAR11; VAR12++)
    {
        FUN13(VAR4, VAR12);
    }
    return 0;
}