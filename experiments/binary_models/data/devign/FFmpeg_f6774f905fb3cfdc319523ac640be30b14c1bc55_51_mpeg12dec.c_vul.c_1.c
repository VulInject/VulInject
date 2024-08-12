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
            int VAR22 = FUN4(VAR15, &VAR17->VAR21->VAR23);
            if (VAR22 < 0)
                return VAR22;
            VAR17->VAR21 = NULL;
            *VAR4 = 1;
        }
        return VAR9;
    }
    if (VAR17->VAR24 & VAR25)
    {
        int VAR26 = FUN5(&VAR17->VAR27, VAR8, VAR9, NULL);
        if (FUN6(&VAR17->VAR27, VAR26, (const VAR7 **)&VAR8, &VAR9) < 0)
            return VAR9;
    }
    if (VAR12->VAR28 == 0 && VAR2->VAR29 == FUN7(""))
        FUN8(VAR2);
    VAR12->VAR30 = 0;
    if (VAR2->VAR31 && !VAR12->VAR32)
    {
        int VAR22 = FUN9(VAR2, VAR15, VAR4, VAR2->VAR31, VAR2->VAR33);
        VAR12->VAR32 = 1;
        if (VAR22 < 0 && (VAR2->VAR34 & VAR35))
            return VAR22;
    }
    return FUN9(VAR2, VAR15, VAR4, VAR8, VAR9);
}