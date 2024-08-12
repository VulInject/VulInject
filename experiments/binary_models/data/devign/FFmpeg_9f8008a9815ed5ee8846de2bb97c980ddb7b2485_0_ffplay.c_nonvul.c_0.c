static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9;
    int VAR10 = VAR11;
    int VAR12, VAR13, VAR14, VAR15[4];
    unsigned VAR16;
    if (VAR2->VAR2->VAR17 & VAR18)
        VAR10 |= VAR19;
    if (VAR4->VAR20 & VAR21)
    {
        if (VAR4->VAR20 & VAR22)
            VAR10 |= VAR23;
        if (VAR4->VAR20 & VAR24)
            VAR10 |= VAR25;
        if (VAR4->VAR20 & VAR26)
            VAR10 |= VAR27;
    }
    if (VAR4->VAR28)
        VAR10 |= VAR23 | VAR25;
    VAR13 = VAR2->VAR29;
    VAR14 = VAR2->VAR30;
    if (FUN2(VAR13, VAR14, 0, VAR2))
        return -1;
    FUN3(VAR2, &VAR13, &VAR14, VAR15);
    VAR16 = VAR2->VAR31 & VAR32 ? 0 : FUN4();
    VAR13 += VAR16 << 1;
    VAR14 += VAR16 << 1;
    if (!(VAR9 = FUN5(VAR6->VAR33[0], VAR10, VAR13, VAR14)))
        return -1;
    VAR9->VAR34->VAR13 = VAR2->VAR29;
    VAR9->VAR34->VAR14 = VAR2->VAR30;
    for (VAR12 = 0; VAR12 < 4; VAR12++)
    {
        unsigned VAR35 = (VAR12 == 1 || VAR12 == 2) ? VAR36[VAR9->VAR37].VAR38 : 0;
        unsigned VAR39 = (VAR12 == 1 || VAR12 == 2) ? VAR36[VAR9->VAR37].VAR40 : 0;
        if (VAR9->VAR41[VAR12])
        {
            VAR9->VAR41[VAR12] += (VAR16 >> VAR35) + ((VAR16 * VAR9->VAR42[VAR12]) >> VAR39);
        }
        VAR4->VAR41[VAR12] = VAR9->VAR41[VAR12];
        VAR4->VAR42[VAR12] = VAR9->VAR42[VAR12];
    }
    VAR4->VAR7 = VAR9;
    VAR4->VAR43 = VAR44;
    VAR4->VAR45 = VAR46;
    VAR4->VAR47 = VAR2->VAR47;
    if (VAR2->VAR48)
        VAR4->VAR49 = VAR2->VAR48->VAR50;
    else
        VAR4->VAR49 = VAR51;
    return 0;
}