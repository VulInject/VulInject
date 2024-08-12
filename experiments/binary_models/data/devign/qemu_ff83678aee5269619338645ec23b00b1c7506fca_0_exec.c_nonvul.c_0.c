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
    VAR8->VAR20 = FUN9(VAR5);
    if (VAR6)
    {
        VAR8->VAR6 = VAR6;
        VAR8->VAR21 |= VAR22;
    }
    else
    {
        if (VAR23)
        {
            VAR8->VAR6 = FUN10(VAR8, VAR5, VAR23);
            if (!VAR8->VAR6)
            {
                VAR8->VAR6 = FUN11(VAR5);
                FUN12(VAR8->VAR6, VAR5, VAR24);
            }
            fprintf(VAR18, "");
            FUN13(1);
        }
        else
        {
            VAR8->VAR6 = FUN14((void *)0x800000000, VAR5, VAR25 | VAR26 | VAR27, VAR28 | VAR29 | VAR30, -1, 0);
            if (FUN15())
            {
                FUN16(VAR8->VAR20, VAR5);
            }
            else
            {
                VAR8->VAR6 = FUN11(VAR5);
            }
            FUN12(VAR8->VAR6, VAR5, VAR24);
        }
    }
    VAR8->VAR31 = VAR5;
    FUN17(&VAR15.VAR16, VAR8, VAR17);
    VAR15.VAR32 = FUN18(VAR15.VAR32, FUN19() >> VAR33);
    memset(VAR15.VAR32 + (VAR8->VAR20 >> VAR33), 0xff, VAR5 >> VAR33);
    if (FUN20())
        FUN21(VAR8->VAR6, VAR5);
    return VAR8->VAR20;
}