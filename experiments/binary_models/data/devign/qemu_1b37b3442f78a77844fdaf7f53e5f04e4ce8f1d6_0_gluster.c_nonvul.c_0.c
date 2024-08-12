static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, VAR6 **VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    int VAR11 = 0;
    int VAR12 = 0;
    VAR13 *VAR14 = FUN2(sizeof(VAR13));
    VAR15 *VAR16;
    VAR6 *VAR17 = NULL;
    const char *VAR18;
    VAR16 = FUN3(&VAR19, NULL, 0, &VAR20);
    FUN4(VAR16, VAR4, &VAR17);
    if (VAR17)
    {
        FUN5(VAR7, VAR17);
        VAR12 = -VAR21;
        goto VAR22;
    }
    VAR18 = FUN6(VAR16, "");
    VAR9->VAR23 = FUN7(VAR14, VAR18, VAR7);
    if (!VAR9->VAR23)
    {
        VAR12 = -VAR24;
        goto VAR22;
    }
    FUN8(VAR5, &VAR11);
    VAR9->VAR25 = FUN9(VAR9->VAR23, VAR14->VAR26, VAR11);
    if (!VAR9->VAR25)
    {
        VAR12 = -VAR24;
    }
VAR22:
    FUN10(VAR16);
    FUN11(VAR14);
    if (!VAR12)
    {
        return VAR12;
    }
    if (VAR9->VAR25)
    {
        FUN12(VAR9->VAR25);
    }
    if (VAR9->VAR23)
    {
        FUN13(VAR9->VAR23);
    }
    return VAR12;
}