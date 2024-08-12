static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, VAR6 **VAR7)
{
    char *VAR8;
    int VAR9;
    VAR10 *VAR11 = VAR2->VAR12;
    uint32_t VAR13;
    VAR8 = FUN2(VAR2->VAR14, 0, VAR7);
    if (!VAR8)
    {
        return -VAR15;
    }
    VAR13 = FUN3(VAR8);
    switch (VAR13)
    {
    case VAR16:
    case VAR17:
        VAR9 = FUN4(VAR2, VAR2->VAR14, VAR5, VAR8, VAR4, VAR7);
        VAR11->VAR18 = 0x200;
        break;
    default:
        VAR9 = FUN5(VAR2, VAR5, VAR8, VAR4, VAR7);
        break;
    }
    if (VAR9)
    {
        goto VAR19;
    }
    VAR9 = FUN6(VAR2);
    if (VAR9)
    {
        goto VAR19;
    }
    VAR11->VAR20 = FUN7(VAR2, 0);
    VAR11->VAR21 = FUN7(VAR2, 1);
    FUN8(&VAR11->VAR22);
    FUN9(&VAR11->VAR23, ""
                                      "",
               FUN10(VAR2));
    FUN11(VAR11->VAR23);
    FUN12(VAR8);
    return 0;
VAR19:
    FUN12(VAR8);
    FUN12(VAR11->VAR24);
    VAR11->VAR24 = NULL;
    FUN13(VAR2);
    return VAR9;
}