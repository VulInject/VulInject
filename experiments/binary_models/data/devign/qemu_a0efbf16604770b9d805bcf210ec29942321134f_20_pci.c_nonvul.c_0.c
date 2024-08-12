static void FUN1(VAR1 *VAR2, VAR3 *VAR4, void *VAR5)
{
    VAR6 *VAR7 = VAR5;
    VAR8 *VAR9 = FUN2(VAR4);
    uint16_t VAR10 = FUN3(VAR4->VAR11 + VAR12);
    int VAR13;
    if (!(VAR10 & VAR14))
    {
        return;
    }
    if (VAR9->VAR15)
    {
        pcibus_t VAR16 = FUN4(VAR4, VAR17);
        pcibus_t VAR18 = FUN5(VAR4, VAR17);
        VAR16 = FUN6(VAR16, 0x1ULL << 32);
        if (VAR18 >= VAR16)
        {
            Range VAR19;
            FUN7(&VAR19, VAR16, VAR18);
            FUN8(VAR7, &VAR19);
        }
    }
    for (VAR13 = 0; VAR13 < VAR20; ++VAR13)
    {
        VAR21 *VAR22 = &VAR4->VAR23[VAR13];
        pcibus_t VAR24, VAR25;
        Range VAR26;
        if (!VAR22->VAR27 || (VAR22->VAR28 & VAR29) || !(VAR22->VAR28 & VAR30))
        {
            continue;
        }
        VAR24 = FUN9(VAR4, VAR13, VAR22->VAR28, VAR22->VAR27);
        VAR25 = VAR24 + VAR22->VAR27 - 1;
        if (VAR24 == VAR31)
        {
            continue;
        }
        VAR24 = FUN6(VAR24, 0x1ULL << 32);
        if (VAR25 >= VAR24)
        {
            FUN7(&VAR26, VAR24, VAR25);
            FUN8(VAR7, &VAR26);
        }
    }
}