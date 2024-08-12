static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, VAR6 **VAR7)
{
    char *VAR8;
    int VAR9;
    VAR10 *VAR11 = VAR2->VAR12;
    uint32_t VAR13;
    VAR6 *VAR14 = NULL;
    VAR2->VAR15 = FUN2(NULL, VAR4, "", VAR2, &VAR16, false, VAR7);
    if (!VAR2->VAR15)
    {
        return -VAR17;
    }
    VAR8 = FUN3(VAR2->VAR15, 0, VAR7);
    if (!VAR8)
    {
        return -VAR17;
    }
    VAR13 = FUN4(VAR8);
    switch (VAR13)
    {
    case VAR18:
    case VAR19:
        VAR9 = FUN5(VAR2, VAR2->VAR15, VAR5, VAR8, VAR4, VAR7);
        VAR11->VAR20 = 0x200;
        break;
    default:
        VAR9 = FUN6(VAR2, VAR5, VAR8, VAR4, VAR7);
        break;
    }
    if (VAR9)
    {
        goto VAR21;
    }
    VAR9 = FUN7(VAR2);
    if (VAR9)
    {
        goto VAR21;
    }
    VAR11->VAR22 = FUN8(VAR2, 0);
    VAR11->VAR23 = FUN8(VAR2, 1);
    FUN9(&VAR11->VAR24);
    FUN10(&VAR11->VAR25, ""
                                      "",
               FUN11(VAR2));
    VAR9 = FUN12(VAR11->VAR25, &VAR14);
    if (VAR14)
    {
        FUN13(VAR7, VAR14);
        FUN14(VAR11->VAR25);
        goto VAR21;
    }
    FUN15(VAR8);
    return 0;
VAR21:
    FUN15(VAR8);
    FUN15(VAR11->VAR26);
    VAR11->VAR26 = NULL;
    FUN16(VAR2);
    return VAR9;
}