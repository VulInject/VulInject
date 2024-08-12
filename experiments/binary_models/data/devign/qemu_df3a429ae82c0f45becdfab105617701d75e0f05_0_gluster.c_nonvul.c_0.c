static int FUN1(const char *VAR1, VAR2 *VAR3, VAR4 **VAR5)
{
    VAR6 *VAR7;
    struct VAR8 *VAR8;
    struct VAR9 *VAR10;
    int VAR11 = 0;
    PreallocMode VAR12;
    int64_t VAR13 = 0;
    char *VAR14 = NULL;
    VAR4 *VAR15 = NULL;
    VAR7 = FUN2(VAR6, 1);
    VAR7->VAR16 = FUN3(VAR3, VAR17, VAR18);
    if (VAR7->VAR16 < 0)
    {
        VAR7->VAR16 = 0;
    }
    else if (VAR7->VAR16 > VAR19)
    {
        VAR7->VAR16 = VAR19;
    }
    VAR7->VAR20 = true;
    VAR7->VAR21 = FUN4(VAR3, VAR22);
    if (!VAR7->VAR21)
    {
        VAR7->VAR21 = FUN5(VAR23);
    }
    VAR7->VAR24 = true;
    VAR8 = FUN6(VAR7, VAR1, NULL, VAR5);
    if (!VAR8)
    {
        VAR11 = -VAR25;
        goto VAR26;
    }
    VAR13 = FUN7(FUN8(VAR3, VAR27, 0), VAR28);
    VAR14 = FUN4(VAR3, VAR29);
    VAR12 = FUN9(VAR30, VAR14, VAR31, VAR32, &VAR15);
    FUN10(VAR14);
    if (VAR15)
    {
        FUN11(VAR5, VAR15);
        VAR11 = -VAR33;
        goto VAR26;
    }
    VAR10 = FUN12(VAR8, VAR7->VAR34, VAR35 | VAR36 | VAR37 | VAR38, VAR39 | VAR40);
    if (!VAR10)
    {
        VAR11 = -VAR25;
        goto VAR26;
    }
    switch (VAR12)
    {
    case VAR41:
        if (FUN13(VAR10, 0, 0, VAR13))
        {
            FUN14(VAR5, "");
            VAR11 = -VAR25;
        }
        break;
    case VAR42:
        if (!FUN15(VAR10, VAR13))
        {
            if (FUN16(VAR10, 0, VAR13))
            {
                FUN14(VAR5, "");
                VAR11 = -VAR25;
            }
        }
        else
        {
            FUN14(VAR5, "");
            VAR11 = -VAR25;
        }
        break;
    case VAR32:
        if (FUN15(VAR10, VAR13) != 0)
        {
            VAR11 = -VAR25;
            FUN14(VAR5, "");
        }
        break;
    default:
        VAR11 = -VAR33;
        FUN14(VAR5, "", VAR30[VAR12]);
        break;
    }
    if (FUN17(VAR10) != 0)
    {
        VAR11 = -VAR25;
    }
VAR26:
    FUN18(VAR7);
    FUN19(VAR8);
    return VAR11;
}