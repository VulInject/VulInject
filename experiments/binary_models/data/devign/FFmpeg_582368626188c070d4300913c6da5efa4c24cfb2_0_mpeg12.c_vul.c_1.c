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
            *VAR4 = 1;
        }
        return VAR9;
    }
    if (VAR17->VAR23 & VAR24)
    {
        int VAR25 = FUN4(&VAR17->VAR26, VAR8, VAR9, NULL);
        if (FUN5(&VAR17->VAR26, VAR25, (const VAR7 **)&VAR8, &VAR9) < 0)
            return VAR9;
    }
    if (VAR12->VAR27 == 0 && VAR2->VAR28 == FUN6(""))
        FUN7(VAR2);
    VAR12->VAR29 = 0;
    if (VAR2->VAR30 && !VAR2->VAR31)
    {
        int VAR32 = FUN8(VAR2, VAR15, VAR4, VAR2->VAR30, VAR2->VAR33);
        if (VAR32 < 0 && (VAR2->VAR34 & VAR35))
            return VAR32;
    }
    return FUN8(VAR2, VAR15, VAR4, VAR8, VAR9);
}