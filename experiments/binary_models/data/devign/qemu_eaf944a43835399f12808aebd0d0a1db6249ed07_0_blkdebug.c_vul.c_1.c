static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, VAR6 **VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    VAR11 *VAR12;
    VAR6 *VAR13 = NULL;
    const char *VAR14;
    uint64_t VAR15;
    int VAR16;
    VAR12 = FUN2(&VAR17, NULL, 0, &VAR18);
    FUN3(VAR12, VAR4, &VAR13);
    if (FUN4(&VAR13))
    {
        FUN5(VAR7, VAR13);
        VAR16 = -VAR19;
        goto VAR20;
    }
    VAR14 = FUN6(VAR12, "");
    VAR16 = FUN7(VAR9, VAR14, VAR4, VAR7);
    if (VAR16)
    {
        goto VAR20;
    }
    VAR9->VAR21 = 1;
    VAR16 = FUN8(&VAR2->VAR22, FUN6(VAR12, ""), VAR4, "", VAR5, true, false, &VAR13);
    if (VAR16 < 0)
    {
        FUN5(VAR7, VAR13);
        goto VAR20;
    }
    VAR15 = FUN9(VAR12, "", VAR2->VAR23);
    if (VAR15 > 0 && VAR15 < VAR24 && !(VAR15 & (VAR15 - 1)))
    {
        VAR2->VAR23 = VAR15;
    }
    else
    {
        FUN10(VAR7, "");
        VAR16 = -VAR19;
        goto VAR20;
    }
    VAR16 = 0;
VAR20:
    FUN11(VAR12);
    return VAR16;
}