int FUN1(VAR1 *VAR2, const VAR3 *VAR4, VAR5 **VAR6)
{
    const char *VAR7 = FUN2(VAR4, "");
    const char *VAR8 = FUN3(VAR4, "");
    const char *VAR9 = FUN3(VAR4, "");
    VAR10 *VAR11;
    VAR12 *VAR13, *VAR14, *VAR15;
    int VAR16 = 0;
    int VAR17;
    char VAR18[1024];
    if (!VAR8)
    {
        FUN4(VAR19, "");
        VAR16 = -1;
        goto VAR20;
    }
    VAR11 = FUN5(VAR7);
    if (!VAR11)
    {
        FUN4(VAR21, VAR7);
        VAR16 = -1;
        goto VAR20;
    }
    FUN6(VAR18, sizeof(VAR18), VAR11->VAR8);
    VAR14 = VAR11->VAR13;
    VAR17 = VAR11->VAR22;
    if (!VAR9)
    {
        VAR9 = "";
    }
    VAR13 = FUN7(VAR9);
    if (!VAR13)
    {
        FUN4(VAR23, VAR9);
        VAR16 = -1;
        goto VAR20;
    }
    VAR15 = FUN8(VAR8);
    if (!VAR15)
    {
        FUN4(VAR23, VAR9);
        VAR16 = -1;
        goto VAR20;
    }
    VAR16 = FUN9(VAR8, VAR9, VAR11->VAR8, VAR11->VAR13->VAR24, NULL, -1, VAR17);
    if (VAR16)
    {
        goto VAR20;
    }
    FUN10();
    FUN11(VAR11);
    FUN12(VAR11);
    VAR16 = FUN13(VAR11, VAR8, VAR17, VAR13);
    if (VAR16 != 0)
    {
        VAR16 = FUN13(VAR11, VAR18, VAR17, VAR14);
        if (VAR16 != 0)
        {
            FUN4(VAR25, VAR18);
        }
        else
        {
            FUN4(VAR25, VAR8);
        }
    }
VAR20:
    if (VAR16)
    {
        VAR16 = -1;
    }
    return VAR16;
}