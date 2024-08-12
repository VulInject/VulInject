void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    int VAR5, VAR6;
    xen_pfn_t VAR7;
    xen_pfn_t VAR8;
    evtchn_port_t VAR9;
    VAR10 *VAR11;
    VAR11 = FUN2(sizeof(VAR10));
    VAR11->VAR12 = FUN3(NULL, 0);
    if (VAR11->VAR12 == NULL)
    {
        FUN4("");
        goto VAR13;
    }
    VAR11->VAR14 = FUN5();
    if (VAR11->VAR14 == NULL)
    {
        FUN4("");
        goto VAR13;
    }
    VAR6 = FUN6(VAR15, VAR16, &VAR11->VAR17);
    if (VAR6 < 0)
    {
        FUN4("");
        goto VAR13;
    }
    VAR11->VAR18.VAR19 = VAR20;
    FUN7(&VAR11->VAR18);
    VAR11->VAR21.VAR19 = VAR22;
    FUN8(&VAR11->VAR21);
    VAR11->VAR23.VAR19 = VAR24;
    FUN9(&VAR11->VAR23);
    VAR6 = FUN10(VAR15, VAR16, VAR11->VAR17, &VAR7, &VAR8, &VAR9);
    if (VAR6 < 0)
    {
        FUN11("" VAR25, VAR26, VAR15);
        goto VAR13;
    }
    FUN12("", VAR7);
    FUN12("", VAR8);
    FUN12("", VAR9);
    VAR11->VAR27 = FUN13(VAR15, VAR16, VAR28, VAR29 | VAR30, VAR7);
    if (VAR11->VAR27 == NULL)
    {
        FUN11("" VAR25, VAR26, VAR15);
        goto VAR13;
    }
    VAR6 = FUN14(VAR15, VAR16, &VAR7);
    if (!VAR6)
    {
        FUN12("", VAR7);
        VAR11->VAR31 = FUN13(VAR15, VAR16, VAR28, VAR29 | VAR30, VAR7);
        if (VAR11->VAR31 == NULL)
        {
            FUN11("" VAR25, VAR26, VAR15);
            goto VAR13;
        }
    }
    else if (VAR6 != -VAR32)
    {
        FUN11("", VAR26, VAR6);
        goto VAR13;
    }
    VAR11->VAR33 = FUN13(VAR15, VAR16, VAR28, VAR29 | VAR30, VAR8);
    if (VAR11->VAR33 == NULL)
    {
        FUN11("", VAR26);
        goto VAR13;
    }
    VAR11->VAR34 = FUN2(VAR35 * sizeof(VAR36 *));
    VAR6 = FUN15(VAR15, VAR16, VAR11->VAR17, true);
    if (VAR6 < 0)
    {
        FUN11("" VAR25, VAR26, VAR15);
        goto VAR13;
    }
    VAR11->VAR37 = FUN2(VAR35 * sizeof(VAR38));
    for (VAR5 = 0; VAR5 < VAR35; VAR5++)
    {
        VAR6 = FUN16(VAR11->VAR12, VAR16, FUN17(VAR11->VAR27, VAR5));
        if (VAR6 == -1)
        {
            FUN11("", VAR5, VAR26);
            goto VAR13;
        }
        VAR11->VAR37[VAR5] = VAR6;
    }
    VAR6 = FUN16(VAR11->VAR12, VAR16, VAR9);
    if (VAR6 == -1)
    {
        FUN11("", VAR26);
        goto VAR13;
    }
    VAR11->VAR39 = VAR6;
    FUN18(VAR40, VAR11);
    FUN19(VAR2, VAR41, VAR4);
    FUN20(VAR42, VAR11);
    VAR11->VAR43 = VAR44;
    FUN21(&VAR11->VAR45);
    FUN22(&VAR11->VAR43, &VAR46);
    VAR11->VAR47 = NULL;
    VAR11->VAR48 = VAR49;
    FUN22(&VAR11->VAR48, &VAR50);
    VAR11->VAR51 = VAR52;
    FUN23(&VAR11->VAR51);
    if (FUN24() != 0)
    {
        FUN11("");
        goto VAR13;
    }
    FUN25("", &VAR53);
    FUN25("", &VAR54);
    FUN25("", &VAR55);
    FUN26(VAR11);
    return;
VAR13:
    FUN11("");
    FUN27(1);
}