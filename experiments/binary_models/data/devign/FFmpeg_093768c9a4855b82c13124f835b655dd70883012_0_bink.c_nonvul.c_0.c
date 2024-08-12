static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9 = VAR2->VAR9;
    uint32_t VAR10, VAR11;
    VAR12 *VAR13, *VAR14;
    unsigned int VAR15;
    uint32_t VAR16, VAR17;
    uint16_t VAR18;
    int VAR19;
    VAR13 = FUN2(VAR2, 0);
    if (!VAR13)
        return FUN3(VAR20);
    VAR13->VAR21->VAR22 = FUN4(VAR9);
    VAR6->VAR23 = FUN4(VAR9) + 8;
    VAR13->VAR24 = FUN4(VAR9);
    if (VAR13->VAR24 > 1000000)
    {
        FUN5(VAR2, VAR25, "");
        return FUN3(VAR26);
    }
    if (FUN4(VAR9) > VAR6->VAR23)
    {
        FUN5(VAR2, VAR25, "");
        return FUN3(VAR26);
    }
    FUN6(VAR9, 4);
    VAR13->VAR21->VAR27 = FUN4(VAR9);
    VAR13->VAR21->VAR28 = FUN4(VAR9);
    VAR10 = FUN4(VAR9);
    VAR11 = FUN4(VAR9);
    if (VAR10 == 0 || VAR11 == 0)
    {
        FUN5(VAR2, VAR25, "", VAR10, VAR11);
        return FUN3(VAR26);
    }
    FUN7(VAR13, 64, VAR11, VAR10);
    VAR13->VAR21->VAR29 = VAR30;
    VAR13->VAR21->VAR31 = VAR32;
    VAR13->VAR21->VAR33 = FUN8(4 + VAR34);
    VAR13->VAR21->VAR35 = 4;
    FUN9(VAR9, VAR13->VAR21->VAR33, 4);
    VAR6->VAR36 = FUN4(VAR9);
    if (VAR6->VAR36 > VAR37)
    {
        FUN5(VAR2, VAR25, "" FUN10(VAR37) "", VAR6->VAR36);
        return FUN3(VAR26);
    }
    if (VAR6->VAR36)
    {
        FUN6(VAR9, 4 * VAR6->VAR36);
        for (VAR15 = 0; VAR15 < VAR6->VAR36; VAR15++)
        {
            VAR14 = FUN2(VAR2, 1);
            if (!VAR14)
                return FUN3(VAR20);
            VAR14->VAR21->VAR29 = VAR38;
            VAR14->VAR21->VAR39 = FUN11(VAR9);
            FUN7(VAR14, 64, 1, VAR14->VAR21->VAR39);
            VAR18 = FUN11(VAR9);
            VAR14->VAR21->VAR31 = VAR18 & VAR40 ? VAR41 : VAR42;
            VAR14->VAR21->VAR43 = VAR18 & VAR44 ? 2 : 1;
            VAR14->VAR21->VAR33 = FUN8(1 + VAR34);
            VAR14->VAR21->VAR35 = 1;
            VAR14->VAR21->VAR33[0] = VAR13->VAR21->VAR22 == FUN12('', '', '', '');
        }
        for (VAR15 = 0; VAR15 < VAR6->VAR36; VAR15++)
            VAR2->VAR45[VAR15 + 1]->VAR46 = FUN4(VAR9);
    }
    VAR17 = FUN4(VAR9);
    for (VAR15 = 0; VAR15 < VAR13->VAR24; VAR15++)
    {
        VAR16 = VAR17;
        if (VAR15 == VAR13->VAR24 - 1)
        {
            VAR17 = VAR6->VAR23;
            VAR19 = 0;
        }
        else
        {
            VAR17 = FUN4(VAR9);
            VAR19 = VAR16 & 1;
        }
        VAR16 &= ~1;
        VAR17 &= ~1;
        if (VAR17 <= VAR16)
        {
            FUN5(VAR2, VAR25, "");
            return FUN3(VAR26);
        }
        FUN13(VAR13, VAR16, VAR15, VAR17 - VAR16, 0, VAR19 ? VAR47 : 0);
    }
    FUN6(VAR9, 4);
    VAR6->VAR48 = -1;
    return 0;
}