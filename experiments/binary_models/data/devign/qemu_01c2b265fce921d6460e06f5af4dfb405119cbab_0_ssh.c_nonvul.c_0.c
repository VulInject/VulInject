static int FUN1(VAR1 *VAR2, const char *VAR3, int VAR4, VAR5 **VAR6)
{
    const char *VAR7;
    char *VAR8 = NULL;
    VAR9 *VAR10 = NULL;
    struct VAR11 *VAR12;
    int VAR13, VAR14;
    const char *VAR15;
    size_t VAR16;
    int VAR17;
    VAR15 = FUN2(VAR2->VAR18, &VAR16, &VAR17);
    if (!VAR15)
    {
        VAR13 = -VAR19;
        FUN3(VAR6, VAR2, "");
        goto VAR20;
    }
    VAR10 = FUN4(VAR2->VAR18);
    if (!VAR10)
    {
        VAR13 = -VAR19;
        FUN3(VAR6, VAR2, "");
        goto VAR20;
    }
    VAR7 = getenv("");
    if (VAR7)
    {
        VAR8 = FUN5("", VAR7);
    }
    else
    {
        VAR8 = FUN5("");
    }
    FUN6(VAR10, VAR8, VAR21);
    VAR14 = FUN7(VAR10, VAR3, VAR4, VAR15, VAR16, VAR22 | VAR23, &VAR12);
    switch (VAR14)
    {
    case VAR24:
        FUN8("", VAR12->VAR25);
        break;
    case VAR26:
        VAR13 = -VAR19;
        FUN3(VAR6, VAR2, ""
                                    "",
                           VAR12->VAR25);
        goto VAR20;
    case VAR27:
        VAR13 = -VAR19;
        FUN3(VAR6, VAR2, "");
        goto VAR20;
    case VAR28:
        VAR13 = -VAR19;
        FUN3(VAR6, VAR2, "");
        goto VAR20;
    default:
        VAR13 = -VAR19;
        FUN3(VAR6, VAR2, ""
                                    "",
                           VAR14);
        goto VAR20;
    }
    VAR13 = 0;
VAR20:
    if (VAR10 != NULL)
    {
        FUN9(VAR10);
    }
    FUN10(VAR8);
    return VAR13;
}