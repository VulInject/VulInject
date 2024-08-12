static void *FUN1(VAR1 *VAR2, ram_addr_t VAR3, const char *VAR4, VAR5 **VAR6)
{
    struct stat VAR7;
    char *VAR8;
    char *VAR9;
    char *VAR10;
    void *VAR11;
    int VAR12;
    uint64_t VAR13;
    VAR5 *VAR14 = NULL;
    VAR13 = FUN2(VAR4, &VAR14);
    if (VAR14)
    {
        FUN3(VAR6, VAR14);
        goto VAR15;
    }
    VAR2->VAR16->VAR17 = VAR13;
    if (VAR3 < VAR13)
    {
        FUN4(VAR6, "" VAR18 ""
                         "" VAR19,
                   VAR3, VAR13);
        goto VAR15;
    }
    if (FUN5() && !FUN6())
    {
        FUN4(VAR6, "");
        goto VAR15;
    }
    if (!FUN7(VAR4, &VAR7) && FUN8(VAR7.VAR20))
    {
        VAR9 = FUN9(FUN10(VAR2->VAR16));
        for (VAR10 = VAR9; *VAR10 != ''; VAR10++)
        {
            if (*VAR10 == '')
            {
                *VAR10 = '';
            }
        }
        VAR8 = FUN11("", VAR4, VAR9);
        FUN12(VAR9);
        VAR12 = mkstemp(VAR8);
        if (VAR12 >= 0)
        {
            unlink(VAR8);
        }
        FUN12(VAR8);
    }
    else
    {
        VAR12 = open(VAR4, VAR21 | VAR22, 0644);
    }
    if (VAR12 < 0)
    {
        FUN13(VAR6, VAR23, "");
        goto VAR15;
    }
    VAR3 = FUN14(VAR3, VAR13);
    if (FUN15(VAR12, VAR3))
    {
        FUN16("");
    }
    VAR11 = FUN17(VAR12, VAR3, VAR13, VAR2->VAR24 & VAR25);
    if (VAR11 == VAR26)
    {
        FUN13(VAR6, VAR23, "");
        close(VAR12);
        goto VAR15;
    }
    if (VAR27)
    {
        FUN18(VAR12, VAR11, VAR3);
    }
    VAR2->VAR12 = VAR12;
    return VAR11;
VAR15:
    return NULL;
}