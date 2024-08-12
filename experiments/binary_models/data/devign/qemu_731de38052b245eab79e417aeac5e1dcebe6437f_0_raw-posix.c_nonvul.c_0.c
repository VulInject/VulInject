static int FUN1(const char *VAR1, VAR2 *VAR3, VAR4 **VAR5)
{
    int VAR6;
    int VAR7 = 0;
    int64_t VAR8 = 0;
    bool VAR9 = false;
    PreallocMode VAR10;
    char *VAR11 = NULL;
    VAR4 *VAR12 = NULL;
    FUN2(VAR1, "", &VAR1);
    VAR8 = FUN3(FUN4(VAR3, VAR13, 0), VAR14);
    VAR9 = FUN5(VAR3, VAR15, false);
    VAR11 = FUN6(VAR3, VAR16);
    VAR10 = FUN7(VAR17, VAR11, VAR18, VAR19, &VAR12);
    FUN8(VAR11);
    if (VAR12)
    {
        FUN9(VAR5, VAR12);
        VAR7 = -VAR20;
        goto VAR21;
    }
    VAR6 = FUN10(VAR1, VAR22 | VAR23 | VAR24 | VAR25, 0644);
    if (VAR6 < 0)
    {
        VAR7 = -VAR26;
        FUN11(VAR5, -VAR7, "");
        goto VAR21;
    }
    if (VAR9)
    {
        int VAR27;
        if (FUN12(VAR6, VAR28, &VAR27) == 0)
        {
            VAR27 |= VAR29;
            FUN12(VAR6, VAR30, &VAR27);
        }
    }
    if (FUN13(VAR6, VAR8) != 0)
    {
        VAR7 = -VAR26;
        FUN11(VAR5, -VAR7, "");
        goto VAR31;
    }
    switch (VAR10)
    {
    case VAR32:
        VAR7 = -FUN14(VAR6, 0, VAR8);
        if (VAR7 != 0)
        {
            FUN11(VAR5, -VAR7, "");
        }
        break;
    case VAR33:
    {
        int64_t VAR34 = 0, VAR35 = VAR8;
        VAR11 = FUN15(65536);
        while (VAR35 > 0)
        {
            VAR34 = FUN16(VAR35, 65536);
            VAR7 = write(VAR6, VAR11, VAR34);
            if (VAR7 < 0)
            {
                VAR7 = -VAR26;
                FUN11(VAR5, -VAR7, "");
                break;
            }
            VAR35 -= VAR7;
        }
        if (VAR7 >= 0)
        {
            FUN17(VAR6);
        }
        FUN8(VAR11);
        break;
    }
    case VAR19:
        break;
    default:
        VAR7 = -VAR20;
        FUN18(VAR5, "", VAR17[VAR10]);
        break;
    }
VAR31:
    if (FUN19(VAR6) != 0 && VAR7 == 0)
    {
        VAR7 = -VAR26;
        FUN11(VAR5, -VAR7, "");
    }
VAR21:
    return VAR7;
}