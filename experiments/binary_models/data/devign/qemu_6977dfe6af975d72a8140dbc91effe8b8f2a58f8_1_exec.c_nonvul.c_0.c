VAR1 FUN1(VAR2 *VAR3, const char *VAR4, ram_addr_t VAR5, void *VAR6)
{
    VAR7 *VAR8, *VAR9;
    VAR5 = FUN2(VAR5);
    VAR8 = FUN3(sizeof(*VAR8));
    if (VAR3 && VAR3->VAR10 && VAR3->VAR10->VAR11->VAR12)
    {
        char *VAR13 = VAR3->VAR10->VAR11->FUN4(VAR3);
        if (VAR13)
        {
            snprintf(VAR8->VAR14, sizeof(VAR8->VAR14), "", VAR13);
            FUN5(VAR13);
        }
    }
    FUN6(VAR8->VAR14, sizeof(VAR8->VAR14), VAR4);
    FUN7(VAR9, &VAR15.VAR16, VAR17)
    {
        if (!strcmp(VAR9->VAR14, VAR8->VAR14))
        {
            fprintf(VAR18, ""%VAR19\"", VAR8->VAR14);
            FUN8();
        }
    }
    if (VAR6)
    {
        VAR8->VAR6 = VAR6;
    }
    else
    {
        if (VAR20)
        {
            VAR8->VAR6 = FUN9(VAR8, VAR5, VAR20);
            if (!VAR8->VAR6)
            {
                VAR8->VAR6 = FUN10(VAR5);
                FUN11(VAR8->VAR6, VAR5, VAR21);
            }
            fprintf(VAR18, "");
            FUN12(1);
        }
        else
        {
            VAR8->VAR6 = FUN13((void *)0x1000000, VAR5, VAR22 | VAR23 | VAR24, VAR25 | VAR26, -1, 0);
            VAR8->VAR6 = FUN10(VAR5);
            FUN11(VAR8->VAR6, VAR5, VAR21);
        }
    }
    VAR8->VAR27 = FUN14(VAR5);
    VAR8->VAR28 = VAR5;
    FUN15(&VAR15.VAR16, VAR8, VAR17);
    VAR15.VAR29 = FUN16(VAR15.VAR29, FUN17() >> VAR30);
    memset(VAR15.VAR29 + (VAR8->VAR27 >> VAR30), 0xff, VAR5 >> VAR30);
    if (FUN18())
        FUN19(VAR8->VAR6, VAR5);
    return VAR8->VAR27;
}