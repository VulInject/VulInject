static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, const VAR5 *VAR6, int VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    VAR11 *VAR12 = VAR3;
    VAR13 *VAR14 = &VAR9->VAR15;
    FUN2(VAR2, "");
    if (VAR7 == 0 || (VAR7 == 4 && FUN3(VAR6) == VAR16))
    {
        if (VAR14->VAR17 == 0 && VAR14->VAR18)
        {
            *VAR12 = *(VAR11 *)VAR14->VAR18;
            VAR14->VAR18 = NULL;
            *VAR4 = sizeof(VAR11);
        }
        return VAR7;
    }
    if (VAR14->VAR19 & VAR20)
    {
        int VAR21 = FUN4(&VAR14->VAR22, VAR6, VAR7, NULL);
        if (FUN5(&VAR14->VAR22, VAR21, (const VAR5 **)&VAR6, &VAR7) < 0)
            return VAR7;
    }
    if (VAR9->VAR23 % 2 == 1)
    {
        VAR9->VAR23++;
        if (VAR2->VAR19 & VAR24)
        {
            *VAR4 = sizeof(VAR25);
            goto VAR26;
        }
    }
    if (VAR9->VAR27 == 0 && VAR2->VAR28 == FUN6(""))
        FUN7(VAR2);
    VAR9->VAR29 = 0;
    if (VAR2->VAR30 && !VAR2->VAR31)
        FUN8(VAR2, VAR12, VAR4, VAR2->VAR30, VAR2->VAR32);
    return FUN8(VAR2, VAR12, VAR4, VAR6, VAR7);
}