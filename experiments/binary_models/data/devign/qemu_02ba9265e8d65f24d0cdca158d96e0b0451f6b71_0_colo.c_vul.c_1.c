void *FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    VAR4 *VAR5 = NULL;
    VAR6 *VAR7 = NULL;
    uint64_t VAR8;
    uint64_t VAR9;
    VAR10 *VAR11 = NULL;
    FUN2(&VAR3->VAR12, VAR13, VAR14);
    FUN3();
    VAR3->VAR15 = FUN4(VAR3->VAR16);
    if (!VAR3->VAR15)
    {
        FUN5("");
        goto VAR17;
    }
    FUN6(VAR3->VAR16, true);
    VAR7 = FUN7(VAR18);
    VAR5 = FUN8(FUN9(VAR7));
    FUN10(FUN11(VAR7));
    FUN12(VAR3->VAR15, VAR19, &VAR11);
    if (VAR11)
    {
        goto VAR17;
    }
    while (VAR3->VAR12 == VAR14)
    {
        int VAR20;
        FUN13(VAR3->VAR16, &VAR20, &VAR11);
        if (VAR11)
        {
            goto VAR17;
        }
        assert(VAR20);
        if (FUN14() != VAR21)
        {
            FUN5("");
            goto VAR17;
        }
        FUN12(VAR3->VAR15, VAR22, &VAR11);
        if (VAR11)
        {
            goto VAR17;
        }
        FUN15(VAR3->VAR16, VAR23, &VAR11);
        if (VAR11)
        {
            goto VAR17;
        }
        VAR9 = FUN16(VAR3->VAR16, VAR24, &VAR11);
        if (VAR11)
        {
            goto VAR17;
        }
        if (VAR9 > VAR7->VAR25)
        {
            VAR7->VAR25 = VAR9;
            VAR7->VAR26 = FUN17(VAR7->VAR26, VAR7->VAR25);
        }
        VAR8 = FUN18(VAR3->VAR16, VAR7->VAR26, VAR9);
        if (VAR8 != VAR9)
        {
            FUN5("" VAR27 ""
                         "" VAR27,
                         VAR8, VAR9);
            goto VAR17;
        }
        VAR7->VAR28 = VAR8;
        FUN19(FUN9(VAR7), 0, 0, NULL);
        FUN12(VAR3->VAR15, VAR29, &VAR11);
        if (VAR11)
        {
            goto VAR17;
        }
        FUN20();
        FUN21(VAR30);
        if (FUN22(VAR5) < 0)
        {
            FUN5("");
            FUN23();
            goto VAR17;
        }
        FUN23();
        FUN12(VAR3->VAR15, VAR31, &VAR11);
        if (VAR11)
        {
            goto VAR17;
        }
    }
VAR17:
    if (VAR11)
    {
        FUN24(VAR11);
    }
    if (VAR5)
    {
        FUN25(VAR5);
    }
    if (VAR3->VAR15)
    {
        FUN25(VAR3->VAR15);
    }
    FUN26();
    return NULL;
}