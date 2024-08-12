static int FUN1(const char *VAR1, VAR2 *VAR3, VAR4 **VAR5)
{
    char *VAR6 = NULL;
    char *VAR7 = NULL;
    char *VAR8 = NULL;
    uint64_t VAR9 = 0;
    int VAR10 = 0;
    size_t VAR11 = VAR12;
    PreallocMode VAR13;
    int VAR14;
    uint64_t VAR15;
    int VAR16;
    const char *VAR17 = NULL;
    VAR4 *VAR18 = NULL;
    int VAR19;
    VAR9 = FUN2(FUN3(VAR3, VAR20, 0), VAR21);
    VAR6 = FUN4(VAR3, VAR22);
    VAR7 = FUN4(VAR3, VAR23);
    VAR17 = FUN4(VAR3, VAR24);
    if (VAR17)
    {
        if (FUN4(VAR3, VAR25))
        {
            FUN5(VAR5, "" VAR25 "" VAR24 "");
            VAR19 = -VAR26;
            goto VAR27;
        }
    }
    else if (FUN6(VAR3, VAR25, false))
    {
        VAR17 = "";
    }
    VAR11 = FUN7(VAR3, &VAR18);
    if (VAR18)
    {
        FUN8(VAR5, VAR18);
        VAR19 = -VAR26;
        goto VAR27;
    }
    VAR8 = FUN4(VAR3, VAR28);
    VAR13 = FUN9(VAR29, VAR8, VAR30, VAR31, &VAR18);
    if (VAR18)
    {
        FUN8(VAR5, VAR18);
        VAR19 = -VAR26;
        goto VAR27;
    }
    VAR14 = FUN10(VAR3, &VAR18);
    if (VAR18)
    {
        FUN8(VAR5, VAR18);
        VAR19 = -VAR26;
        goto VAR27;
    }
    if (FUN6(VAR3, VAR32, false))
    {
        VAR10 |= VAR33;
    }
    if (VAR6 && VAR13 != VAR31)
    {
        FUN5(VAR5, ""
                         "");
        VAR19 = -VAR26;
        goto VAR27;
    }
    if (VAR14 < 3 && (VAR10 & VAR33))
    {
        FUN5(VAR5, ""
                         "");
        VAR19 = -VAR26;
        goto VAR27;
    }
    VAR15 = FUN11(VAR3, VAR14, &VAR18);
    if (VAR18)
    {
        FUN8(VAR5, VAR18);
        VAR19 = -VAR26;
        goto VAR27;
    }
    VAR16 = FUN12(VAR15);
    VAR19 = FUN13(VAR1, VAR9, VAR6, VAR7, VAR10, VAR11, VAR13, VAR3, VAR14, VAR16, VAR17, &VAR18);
    FUN8(VAR5, VAR18);
VAR27:
    FUN14(VAR6);
    FUN14(VAR7);
    FUN14(VAR8);
    return VAR19;
}