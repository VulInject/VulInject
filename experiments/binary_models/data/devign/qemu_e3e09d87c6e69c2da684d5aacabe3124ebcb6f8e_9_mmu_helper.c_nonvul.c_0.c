int FUN1(VAR1 *VAR2, target_ulong VAR3, int VAR4, uint64_t VAR5, VAR6 *VAR7, int *VAR8, bool VAR9)
{
    int VAR10 = -1;
    VAR11 *VAR12;
    *VAR8 = VAR13 | VAR14 | VAR15;
    VAR3 &= VAR16;
    if (!(VAR2->VAR17.VAR18 & VAR19))
    {
        *VAR7 = VAR3;
        VAR10 = 0;
        goto VAR20;
    }
    switch (VAR5)
    {
    case VAR21:
    case VAR22:
        VAR10 = FUN2(VAR2, VAR3, VAR5, VAR7, VAR8, VAR4, VAR9);
        break;
    case VAR23:
        if (VAR4 == 2)
        {
            VAR10 = FUN2(VAR2, VAR3, VAR21, VAR7, VAR8, VAR4, VAR9);
            *VAR8 &= ~(VAR13 | VAR14);
        }
        else
        {
            VAR10 = FUN2(VAR2, VAR3, VAR23, VAR7, VAR8, VAR4, VAR9);
            *VAR8 &= ~(VAR15);
        }
        break;
    case VAR24:
    default:
        FUN3("");
        break;
    }
VAR20:
    *VAR7 = FUN4(VAR2, *VAR7);
    if (*VAR7 <= VAR25)
    {
        VAR12 = &VAR2->VAR26[*VAR7 / VAR27];
        if (*VAR8 & VAR13)
        {
            *VAR12 |= VAR28;
        }
        if (*VAR8 & VAR14)
        {
            *VAR12 |= VAR29;
        }
    }
    return VAR10;
}