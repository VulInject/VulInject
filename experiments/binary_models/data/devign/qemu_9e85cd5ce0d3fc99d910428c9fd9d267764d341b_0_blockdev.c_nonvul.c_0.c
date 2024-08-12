void FUN1(const char *VAR1, bool VAR2, const char *VAR3, bool VAR4, const char *VAR5, bool VAR6, const char *VAR7, bool VAR8, int64_t VAR9, VAR10 **VAR11)
{
    VAR12 *VAR13;
    VAR12 *VAR14, *VAR15;
    VAR16 *VAR17;
    VAR10 *VAR18 = NULL;
    BlockdevOnError VAR19 = VAR20;
    if (!VAR8)
    {
        VAR9 = 0;
    }
    VAR13 = FUN2(VAR1);
    if (!VAR13)
    {
        FUN3(VAR11, VAR21, VAR1);
        return;
    }
    VAR17 = FUN4(VAR13);
    FUN5(VAR17);
    FUN6();
    if (FUN7(VAR13, VAR22, VAR11))
    {
        goto VAR23;
    }
    VAR15 = VAR13;
    if (VAR4 && VAR5)
    {
        if (strcmp(VAR13->VAR24, VAR5) != 0)
        {
            VAR15 = FUN8(VAR13, VAR5);
        }
    }
    if (VAR15 == NULL)
    {
        FUN9(VAR11, "", VAR5 ? VAR5 : "");
        goto VAR23;
    }
    assert(FUN4(VAR15) == VAR17);
    if (VAR2 && VAR3)
    {
        VAR14 = FUN8(VAR15, VAR3);
    }
    else
    {
        VAR14 = FUN10(VAR15);
    }
    if (VAR14 == NULL)
    {
        FUN3(VAR11, VAR25, VAR3 ? VAR3 : "");
        goto VAR23;
    }
    assert(FUN4(VAR14) == VAR17);
    if (VAR15 == VAR14)
    {
        FUN9(VAR11, "");
        goto VAR23;
    }
    if (VAR15 == VAR13)
    {
        if (VAR6)
        {
            FUN9(VAR11, ""
                             "");
            goto VAR23;
        }
        FUN11(VAR13, VAR14, VAR9, VAR19, VAR26, VAR13, &VAR18);
    }
    else
    {
        FUN12(VAR13, VAR14, VAR15, VAR9, VAR19, VAR26, VAR13, VAR6 ? VAR7 : NULL, &VAR18);
    }
    if (VAR18 != NULL)
    {
        FUN13(VAR11, VAR18);
        goto VAR23;
    }
VAR23:
    FUN14(VAR17);
}