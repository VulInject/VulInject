int FUN1(VAR1 *VAR2, const char *VAR3)
{
    VAR4 *VAR5 = VAR2->VAR6;
    VAR7 *VAR8;
    int VAR9, VAR10, VAR11;
    VAR10 = FUN2(VAR2, VAR3);
    if (VAR10 < 0)
        return -VAR12;
    VAR8 = &VAR5->VAR13[VAR10];
    if (FUN3(VAR2, VAR5->VAR14, VAR5->VAR15, -1) < 0)
        goto VAR16;
    if (FUN4(VAR2, VAR8->VAR15) < 0)
        goto VAR16;
    VAR5->VAR15 = VAR8->VAR15;
    VAR11 = VAR5->VAR15 * sizeof(VAR17);
    if (FUN5(VAR2->VAR18, VAR8->VAR14, VAR5->VAR19, VAR11) != VAR11)
        goto VAR16;
    if (FUN6(VAR2->VAR18, VAR5->VAR14, VAR5->VAR19, VAR11) != VAR11)
        goto VAR16;
    for (VAR9 = 0; VAR9 < VAR5->VAR15; VAR9++)
    {
        FUN7(&VAR5->VAR19[VAR9]);
    }
    if (FUN3(VAR2, VAR5->VAR14, VAR5->VAR15, 1) < 0)
        goto VAR16;
    FUN8(VAR2);
    return 0;
VAR16:
    return -VAR20;
}