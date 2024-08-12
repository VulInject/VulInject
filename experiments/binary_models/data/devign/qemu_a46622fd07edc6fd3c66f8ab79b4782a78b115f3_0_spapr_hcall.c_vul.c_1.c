static VAR1 FUN1(VAR2 *VAR3, VAR4 *VAR5, target_ulong VAR6, VAR1 *VAR7)
{
    VAR8 *VAR9;
    target_ulong VAR10 = VAR7[0];
    target_ulong VAR11 = VAR7[1];
    target_ulong VAR12 = VAR7[2];
    target_ulong VAR13 = VAR7[3];
    target_ulong VAR14 = VAR15;
    if (VAR11 == VAR16)
    {
        if (VAR12)
        {
            VAR14 = VAR17;
            goto VAR18;
        }
        if (VAR13)
        {
            VAR14 = VAR19;
            goto VAR18;
        }
        switch (VAR10)
        {
        case VAR20:
            FUN2(VAR9)
            {
                VAR2 *VAR21 = FUN3(VAR9);
                VAR22 *VAR23 = &VAR21->VAR23;
                VAR23->VAR24[VAR25] &= ~VAR26;
            }
            VAR14 = VAR27;
            break;
        case VAR28:
            FUN2(VAR9)
            {
                VAR2 *VAR21 = FUN3(VAR9);
                VAR22 *VAR23 = &VAR21->VAR23;
                VAR23->VAR24[VAR25] |= VAR26;
            }
            VAR14 = VAR27;
            break;
        default:
            VAR14 = VAR29;
        }
    }
VAR18:
    return VAR14;
}