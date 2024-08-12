static int FUN1(const char *VAR1, VAR2 *VAR3, VAR4 **VAR5)
{
    char *VAR6 = NULL;
    char *VAR7 = NULL;
    char *VAR8 = NULL;
    uint64_t VAR9 = 0;
    int VAR10 = 0;
    size_t VAR11 = VAR12;
    PreallocMode VAR13;
    int VAR14 = 3;
    uint64_t VAR15 = 16;
    int VAR16;
    VAR4 *VAR17 = NULL;
    int VAR18;
    VAR9 = FUN2(FUN3(VAR3, VAR19, 0), VAR20);
    VAR6 = FUN4(VAR3, VAR21);
    VAR7 = FUN4(VAR3, VAR22);
    if (FUN5(VAR3, VAR23, false))
    {
        VAR10 |= VAR24;
    }
    VAR11 = FUN3(VAR3, VAR25, VAR12);
    VAR8 = FUN4(VAR3, VAR26);
    VAR13 = FUN6(VAR27, VAR8, VAR28, VAR29, &VAR17);
    if (VAR17)
    {
        FUN7(VAR5, VAR17);
        VAR18 = -VAR30;
        goto VAR31;
    }
    FUN8(VAR8);
    VAR8 = FUN4(VAR3, VAR32);
    if (!VAR8)
    {
    }
    else if (!strcmp(VAR8, ""))
    {
        VAR14 = 2;
    }
    else if (!strcmp(VAR8, ""))
    {
        VAR14 = 3;
    }
    else
    {
        FUN9(VAR5, "", VAR8);
        VAR18 = -VAR30;
        goto VAR31;
    }
    if (FUN5(VAR3, VAR33, false))
    {
        VAR10 |= VAR34;
    }
    if (VAR6 && VAR13 != VAR29)
    {
        FUN9(VAR5, ""
                         "");
        VAR18 = -VAR30;
        goto VAR31;
    }
    if (VAR14 < 3 && (VAR10 & VAR34))
    {
        FUN9(VAR5, ""
                         "");
        VAR18 = -VAR30;
        goto VAR31;
    }
    VAR15 = FUN10(VAR3, VAR35, VAR15);
    if (VAR15 > 64 || !FUN11(VAR15))
    {
        FUN9(VAR5, ""
                         "");
        VAR18 = -VAR30;
        goto VAR31;
    }
    if (VAR14 < 3 && VAR15 != 16)
    {
        FUN9(VAR5, ""
                         ""
                         "");
        VAR18 = -VAR30;
        goto VAR31;
    }
    VAR16 = FUN12(VAR15);
    VAR18 = FUN13(VAR1, VAR9, VAR6, VAR7, VAR10, VAR11, VAR13, VAR3, VAR14, VAR16, &VAR17);
    FUN7(VAR5, VAR17);
VAR31:
    FUN8(VAR6);
    FUN8(VAR7);
    FUN8(VAR8);
    return VAR18;
}