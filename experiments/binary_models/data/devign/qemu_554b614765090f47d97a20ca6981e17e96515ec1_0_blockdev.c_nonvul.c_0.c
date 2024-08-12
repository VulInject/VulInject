void FUN1(bool VAR1, const char *VAR2, const char *VAR3, bool VAR4, const char *VAR5, bool VAR6, const char *VAR7, bool VAR8, int64_t VAR9, bool VAR10, BlockdevOnError VAR11, VAR12 **VAR13)
{
    VAR14 *VAR15, *VAR16;
    VAR14 *VAR17 = NULL;
    VAR18 *VAR19;
    VAR12 *VAR20 = NULL;
    const char *VAR21 = NULL;
    if (!VAR10)
    {
        VAR11 = VAR22;
    }
    VAR15 = FUN2(VAR3, VAR3, VAR13);
    if (!VAR15)
    {
        return;
    }
    VAR19 = FUN3(VAR15);
    FUN4(VAR19);
    if (VAR4)
    {
        VAR17 = FUN5(VAR15, VAR5);
        if (VAR17 == NULL)
        {
            FUN6(VAR13, VAR23, VAR5);
            goto VAR24;
        }
        assert(FUN3(VAR17) == VAR19);
        VAR21 = VAR5;
    }
    for (VAR16 = VAR15; VAR16 && VAR16 != VAR17; VAR16 = FUN7(VAR16))
    {
        if (FUN8(VAR16, VAR25, VAR13))
        {
            goto VAR24;
        }
    }
    if (VAR17 == NULL && VAR6)
    {
        FUN6(VAR13, ""
                         "");
        goto VAR24;
    }
    VAR21 = VAR6 ? VAR7 : VAR21;
    FUN9(VAR1 ? VAR2 : NULL, VAR15, VAR17, VAR21, VAR8 ? VAR9 : 0, VAR11, VAR26, VAR15, &VAR20);
    if (VAR20)
    {
        FUN10(VAR13, VAR20);
        goto VAR24;
    }
    FUN11(VAR15, VAR15->VAR27);
VAR24:
    FUN12(VAR19);
}