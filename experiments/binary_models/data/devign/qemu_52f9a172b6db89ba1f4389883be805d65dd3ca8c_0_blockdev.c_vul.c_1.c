int FUN1(VAR1 *VAR2, const VAR3 *VAR4, VAR5 **VAR6)
{
    const char *VAR7 = FUN2(VAR4, "");
    const char *VAR8 = FUN3(VAR4, "");
    const char *VAR9 = FUN3(VAR4, "");
    VAR10 *VAR11;
    VAR12 *VAR13, *VAR14;
    int VAR15 = 0;
    int VAR16;
    if (!VAR8)
    {
        FUN4(VAR17, "");
        VAR15 = -1;
        goto VAR18;
    }
    VAR11 = FUN5(VAR7);
    if (!VAR11)
    {
        FUN4(VAR19, VAR7);
        VAR15 = -1;
        goto VAR18;
    }
    if (!VAR9)
    {
        VAR9 = "";
    }
    VAR13 = FUN6(VAR9);
    if (!VAR13)
    {
        FUN4(VAR20, VAR9);
        VAR15 = -1;
        goto VAR18;
    }
    VAR14 = FUN7(VAR8);
    if (!VAR14)
    {
        FUN4(VAR20, VAR9);
        VAR15 = -1;
        goto VAR18;
    }
    VAR15 = FUN8(VAR8, VAR9, VAR11->VAR8, VAR11->VAR13->VAR21, NULL, -1, VAR11->VAR22);
    if (VAR15)
    {
        goto VAR18;
    }
    FUN9();
    FUN10(VAR11);
    VAR16 = VAR11->VAR22;
    FUN11(VAR11);
    VAR15 = FUN12(VAR11, VAR8, VAR16, VAR13);
    if (VAR15 != 0)
    {
        FUN13();
    }
VAR18:
    if (VAR15)
    {
        VAR15 = -1;
    }
    return VAR15;
}