static void *FUN1(VAR1 *VAR2, ram_addr_t VAR3, const char *VAR4, VAR5 **VAR6)
{
    bool VAR7 = false;
    char *VAR8;
    char *VAR9;
    char *VAR10;
    void *VAR11 = VAR12;
    int VAR13 = -1;
    int64_t VAR14;
    if (FUN2() && !FUN3())
    {
        FUN4(VAR6, "");
        return NULL;
    }
    for (;;)
    {
        VAR13 = open(VAR4, VAR15);
        if (VAR13 >= 0)
        {
            break;
        }
        if (VAR16 == VAR17)
        {
            VAR13 = open(VAR4, VAR15 | VAR18 | VAR19, 0644);
            if (VAR13 >= 0)
            {
                VAR7 = true;
                break;
            }
        }
        else if (VAR16 == VAR20)
        {
            VAR9 = FUN5(FUN6(VAR2->VAR21));
            for (VAR10 = VAR9; *VAR10 != ''; VAR10++)
            {
                if (*VAR10 == '')
                {
                    *VAR10 = '';
                }
            }
            VAR8 = FUN7("", VAR4, VAR9);
            FUN8(VAR9);
            VAR13 = mkstemp(VAR8);
            if (VAR13 >= 0)
            {
                unlink(VAR8);
                FUN8(VAR8);
                break;
            }
            FUN8(VAR8);
        }
        if (VAR16 != VAR22 && VAR16 != VAR23)
        {
            FUN9(VAR6, VAR16, "", VAR4);
            goto VAR24;
        }
    }
    VAR2->VAR25 = FUN10(VAR13);
    VAR2->VAR21->VAR26 = VAR2->VAR25;
    if (FUN2())
    {
        VAR2->VAR21->VAR26 = FUN11(VAR2->VAR21->VAR26, VAR27);
    }
    VAR14 = FUN12(VAR13);
    if (VAR3 < VAR2->VAR25)
    {
        FUN4(VAR6, "" VAR28 ""
                         "",
                   VAR3, VAR2->VAR25);
        goto VAR24;
    }
    if (VAR14 > 0 && VAR14 < VAR3)
    {
        FUN4(VAR6, "" VAR29 "" VAR28, VAR4, VAR14, VAR3);
        goto VAR24;
    }
    VAR3 = FUN13(VAR3, VAR2->VAR25);
    if (!VAR14 && FUN14(VAR13, VAR3))
    {
        FUN15("");
    }
    VAR11 = FUN16(VAR13, VAR3, VAR2->VAR21->VAR26, VAR2->VAR30 & VAR31);
    if (VAR11 == VAR12)
    {
        FUN9(VAR6, VAR16, "");
        goto VAR24;
    }
    if (VAR32)
    {
        FUN17(VAR13, VAR11, VAR3, VAR6);
        if (VAR6 && *VAR6)
        {
            goto VAR24;
        }
    }
    VAR2->VAR13 = VAR13;
    return VAR11;
VAR24:
    if (VAR11 != VAR12)
    {
        FUN18(VAR11, VAR3);
    }
    if (VAR7)
    {
        unlink(VAR4);
    }
    if (VAR13 != -1)
    {
        close(VAR13);
    }
    return NULL;
}