static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7 = VAR4->VAR8[0];
    VAR9 *VAR10 = VAR4->VAR11;
    VAR12 *VAR13, *VAR14, *VAR15 = NULL;
    int VAR16;
    VAR16 = FUN2(VAR2, &VAR13, &VAR14);
    if (VAR16 < 0)
        return VAR16;
    if (!VAR13 || !VAR14)
    {
        VAR16 = VAR17;
        goto VAR18;
    }
    if (!VAR10->VAR19)
    {
        FUN3(VAR10, VAR14);
    }
    VAR16 = FUN4(VAR7, VAR13, &VAR15);
    if (VAR16 < 0)
        goto VAR18;
    return FUN5(VAR4->VAR20[0], VAR15);
VAR18:
    FUN6(&VAR13);
    FUN6(&VAR14);
    return VAR16;
}