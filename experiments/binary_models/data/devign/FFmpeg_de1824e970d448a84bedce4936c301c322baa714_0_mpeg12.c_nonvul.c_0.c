static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    int VAR9 = VAR6->VAR10;
    VAR11 *VAR12 = VAR2->VAR13;
    VAR14 *VAR15 = VAR3;
    VAR16 *VAR17 = &VAR12->VAR18;
    FUN2(VAR2, "");
    if (VAR9 == 0 || (VAR9 == 4 && FUN3(VAR8) == VAR19))
    {
        if (VAR17->VAR20 == 0 && VAR17->VAR21)
        {
            *VAR15 = VAR17->VAR21->VAR22;
            VAR17->VAR21 = NULL;
            *VAR4 = sizeof(VAR14);
        }
        return VAR9;
    }
    if (VAR17->VAR23 & VAR24)
    {
        int VAR25 = FUN4(&VAR17->VAR26, VAR8, VAR9, NULL);
        if (FUN5(&VAR17->VAR26, VAR25, (const VAR7 **)&VAR8, &VAR9) < 0)
            return VAR9;
    }
    VAR17->VAR27 = FUN6(VAR2->VAR27);
    if (VAR12->VAR28 == 0 && (VAR17->VAR27 == FUN7("") || VAR17->VAR27 == FUN7("")))
        FUN8(VAR2);
    VAR12->VAR29 = 0;
    if (VAR2->VAR30 && !VAR12->VAR31)
    {
        int VAR32 = FUN9(VAR2, VAR15, VAR4, VAR2->VAR30, VAR2->VAR33);
        if (*VAR4)
        {
            FUN10(VAR2, VAR34, "");
            *VAR4 = 0;
        }
        VAR12->VAR31 = 1;
        if (VAR32 < 0 && (VAR2->VAR35 & VAR36))
            return VAR32;
    }
    return FUN9(VAR2, VAR15, VAR4, VAR8, VAR9);
}