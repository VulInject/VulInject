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
        FUN2("", VAR22);
        VAR10 = FUN3(VAR2, VAR3, VAR5, VAR2->VAR23[1], VAR7, VAR8, VAR4, VAR9);
        break;
    case VAR24:
        FUN2("", VAR22);
        VAR10 = FUN3(VAR2, VAR3, VAR5, VAR2->VAR23[13], VAR7, VAR8, VAR4, VAR9);
        break;
    case VAR25:
        FUN2("", VAR22);
        if (VAR4 == VAR26)
        {
            VAR10 = FUN3(VAR2, VAR3, VAR21, VAR2->VAR23[1], VAR7, VAR8, VAR4, VAR9);
            *VAR8 &= ~(VAR13 | VAR14);
        }
        else
        {
            VAR10 = FUN3(VAR2, VAR3, VAR25, VAR2->VAR23[7], VAR7, VAR8, VAR4, VAR9);
            *VAR8 &= ~(VAR15);
        }
        break;
    case VAR27:
    default:
        FUN4("");
        break;
    }
VAR20:
    *VAR7 = FUN5(VAR2, *VAR7);
    if (*VAR7 <= VAR28)
    {
        VAR12 = &VAR2->VAR29[*VAR7 / VAR30];
        if (*VAR8 & VAR13)
        {
            *VAR12 |= VAR31;
        }
        if (*VAR8 & VAR14)
        {
            *VAR12 |= VAR32;
        }
    }
    return VAR10;
}