int FUN1(VAR1 *VAR2, int VAR3, int64_t VAR4, int VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    VAR9 FUN2(VAR10), FUN2(VAR11), VAR12, VAR13;
    int64_t VAR14, VAR15, VAR16;
    int VAR17;
    VAR18 *VAR19;
    if (VAR3 < 0)
        return -1;
    FUN3(VAR2, VAR20, "" VAR21 "", VAR3, VAR4);
    VAR15 = VAR14 = VAR22;
    VAR13 = -1;
    VAR19 = VAR2->VAR23[VAR3];
    if (VAR19->VAR24)
    {
        VAR25 *VAR26;
        VAR17 = FUN4(VAR19, VAR4, VAR5 | VAR27);
        VAR17 = FUN5(VAR17, 0);
        VAR26 = &VAR19->VAR24[VAR17];
        if (VAR26->VAR28 <= VAR4 || VAR26->VAR12 == VAR26->VAR29)
        {
            VAR10 = VAR26->VAR12;
            VAR14 = VAR26->VAR28;
            FUN3(VAR2, VAR20, "" VAR30 "" VAR21 "", VAR10, VAR14);
        }
        else
        {
            assert(VAR17 == 0);
        }
        VAR17 = FUN4(VAR19, VAR4, VAR5 & ~VAR27);
        assert(VAR17 < VAR19->VAR31);
        if (VAR17 >= 0)
        {
            VAR26 = &VAR19->VAR24[VAR17];
            assert(VAR26->VAR28 >= VAR4);
            VAR11 = VAR26->VAR12;
            VAR15 = VAR26->VAR28;
            VAR13 = VAR11 - VAR26->VAR29;
            FUN3(VAR2, VAR20, "" VAR30 "" VAR30 "" VAR21 "", VAR11, VAR13, VAR15);
        }
    }
    VAR12 = FUN6(VAR2, VAR3, VAR4, VAR10, VAR11, VAR13, VAR14, VAR15, VAR5, &VAR16, VAR7->VAR32);
    if (VAR12 < 0)
        return -1;
    FUN7(VAR2->VAR33, VAR12, VAR34);
    FUN8(VAR2, VAR19, VAR16);
    return 0;
}