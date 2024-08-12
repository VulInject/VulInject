static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, int VAR6, VAR7 **VAR8)
{
    VAR9 *VAR10 = VAR2->VAR11;
    VAR12 *VAR13;
    VAR7 *VAR14 = NULL;
    const char *VAR15;
    int VAR16, VAR17;
    VAR13 = FUN2(&VAR18);
    FUN3(VAR13, VAR4, &VAR14);
    if (FUN4(&VAR14))
    {
        FUN5(VAR8, VAR14);
        VAR17 = -VAR19;
        goto VAR20;
    }
    VAR15 = FUN6(VAR13, "");
    VAR17 = FUN7(&VAR15);
    if (VAR17 != 0)
    {
        FUN8(VAR8, -VAR17, "");
        goto VAR20;
    }
    VAR10->VAR6 = VAR6;
    FUN9(VAR5, &VAR10->VAR6);
    VAR10->VAR16 = -1;
    VAR16 = FUN10(VAR15, VAR10->VAR6, 0644);
    if (VAR16 < 0)
    {
        VAR17 = -VAR21;
        if (VAR17 == -VAR22)
        {
            VAR17 = -VAR23;
        }
        goto VAR20;
    }
    VAR10->VAR16 = VAR16;
    if (FUN11(&VAR10->VAR24, &VAR10->VAR25, VAR5))
    {
        FUN12(VAR16);
        VAR17 = -VAR21;
        FUN8(VAR8, -VAR17, "");
        goto VAR20;
    }
    VAR10->VAR26 = true;
    if (FUN13(VAR10->VAR16))
    {
        VAR10->VAR27 = true;
    }
    VAR17 = 0;
VAR20:
    FUN14(VAR13);
    return VAR17;
}