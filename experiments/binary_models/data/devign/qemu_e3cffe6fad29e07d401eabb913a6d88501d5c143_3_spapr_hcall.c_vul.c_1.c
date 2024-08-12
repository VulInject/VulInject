static VAR1 FUN1(VAR2 *VAR3, VAR4 *VAR5, target_ulong VAR6, VAR1 *VAR7)
{
    VAR8 *VAR9 = &VAR3->VAR9;
    int VAR10;
    target_ulong VAR11 = VAR12;
    for (VAR10 = 0; VAR10 < VAR13; VAR10++)
    {
        VAR1 *VAR14 = &VAR7[VAR10 * 2];
        target_ulong VAR15 = VAR7[VAR10 * 2 + 1];
        target_ulong VAR16, VAR17, VAR18;
        if ((*VAR14 & VAR19) == VAR20)
        {
            break;
        }
        else if ((*VAR14 & VAR19) != VAR21)
        {
            return VAR22;
        }
        *VAR14 &= VAR23 | VAR24;
        *VAR14 |= VAR25;
        if ((*VAR14 & VAR26) && (*VAR14 & VAR27))
        {
            *VAR14 |= VAR28;
            return VAR22;
        }
        VAR18 = FUN2(VAR3, *VAR14 & VAR23, VAR15, (*VAR14 & VAR24) >> 26, &VAR16, &VAR17);
        *VAR14 |= VAR18 << 60;
        switch (VAR18)
        {
        case VAR29:
            *VAR14 |= (VAR17 & (VAR30 | VAR31)) << 43;
            break;
        case VAR32:
            VAR11 = VAR22;
            goto VAR33;
        case VAR34:
            VAR11 = VAR35;
            goto VAR33;
        }
    }
VAR33:
    FUN3(VAR9);
    return VAR11;
}