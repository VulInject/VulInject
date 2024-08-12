static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9;
    int VAR10 = VAR11;
    int VAR12, VAR13, VAR14, VAR15[4];
    unsigned VAR16;
    int VAR17;
    FUN2(VAR2->VAR18 & VAR19);
    if (VAR2->VAR2->VAR20 & VAR21)
        VAR10 |= VAR22;
    if (VAR4->VAR23 & VAR24)
    {
        if (VAR4->VAR23 & VAR25)
            VAR10 |= VAR26;
        if (VAR4->VAR23 & VAR27)
            VAR10 |= VAR28;
        if (VAR4->VAR23 & VAR29)
            VAR10 |= VAR30;
    }
    if (VAR4->VAR31)
        VAR10 |= VAR26 | VAR28;
    VAR13 = VAR2->VAR32;
    VAR14 = VAR2->VAR33;
    if (FUN3(VAR13, VAR14, 0, VAR2))
        return -1;
    FUN4(VAR2, &VAR13, &VAR14, VAR15);
    VAR16 = VAR2->VAR18 & VAR19 ? 0 : FUN5();
    VAR13 += VAR16 << 1;
    VAR14 += VAR16 << 1;
    if (!(VAR9 = FUN6(VAR6->VAR34[0], VAR10, VAR13, VAR14)))
        return -1;
    VAR17 = VAR35[VAR9->VAR36].VAR37[0].VAR38 + 1;
    VAR9->VAR39->VAR13 = VAR2->VAR32;
    VAR9->VAR39->VAR14 = VAR2->VAR33;
    for (VAR12 = 0; VAR12 < 4; VAR12++)
    {
        unsigned VAR40 = (VAR12 == 1 || VAR12 == 2) ? VAR35[VAR9->VAR36].VAR41 : 0;
        unsigned VAR42 = (VAR12 == 1 || VAR12 == 2) ? VAR35[VAR9->VAR36].VAR43 : 0;
        if (VAR9->VAR44[VAR12])
        {
            VAR9->VAR44[VAR12] += ((VAR16 * VAR17) >> VAR40) + ((VAR16 * VAR9->VAR45[VAR12]) >> VAR42);
        }
        VAR4->VAR44[VAR12] = VAR9->VAR44[VAR12];
        VAR4->VAR45[VAR12] = VAR9->VAR45[VAR12];
    }
    VAR4->VAR7 = VAR9;
    VAR4->VAR46 = VAR47;
    VAR4->VAR48 = VAR49;
    VAR4->VAR50 = VAR2->VAR50;
    if (VAR2->VAR51)
        VAR4->VAR52 = VAR2->VAR51->VAR53;
    else
        VAR4->VAR52 = VAR54;
    return 0;
}