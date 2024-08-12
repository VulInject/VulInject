void FUN1(VAR1 *VAR2, const VAR3 *VAR4)
{
    int VAR5, VAR6;
    unsigned VAR7;
    int VAR8, VAR9;
    VAR10 *VAR11;
    VAR12 *VAR13 = NULL;
    const char *VAR14 = FUN2(VAR4, "");
    const char *VAR15 = FUN2(VAR4, "");
    VAR16 *VAR17;
    VAR13 = FUN3(VAR15);
    if (!VAR13)
        goto VAR18;
    if (VAR13->VAR19)
    {
        FUN4(VAR2, "");
        goto VAR18;
    }
    VAR8 = VAR13->VAR8;
    VAR9 = FUN5(VAR8);
    switch (VAR8)
    {
    case VAR20:
        if (FUN6(VAR2, VAR14, &VAR5, &VAR6, &VAR7))
        {
            goto VAR18;
        }
        VAR11 = FUN7(VAR6, VAR7, 0);
        if (!VAR11)
        {
            FUN4(VAR2, "", VAR14);
            goto VAR18;
        }
        VAR17 = FUN8(&VAR11->VAR21.VAR22);
        FUN9(FUN10(VAR23, VAR24, VAR17), VAR13, VAR13->VAR25);
        FUN4(VAR2, "", VAR13->VAR9, VAR13->VAR25);
        break;
    case VAR26:
        FUN4(VAR2, "");
        break;
    default:
        FUN4(VAR2, "", VAR8);
        goto VAR18;
    }
    return;
VAR18:
    if (VAR13)
        FUN11(VAR13);
    return;
}