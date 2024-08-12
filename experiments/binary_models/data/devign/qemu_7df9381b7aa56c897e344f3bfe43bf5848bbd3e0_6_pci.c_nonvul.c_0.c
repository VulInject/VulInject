static int FUN1(VAR1 *VAR2, bool VAR3)
{
    VAR4 *VAR5;
    struct VAR6 *VAR7;
    struct VAR8 *VAR9;
    struct VAR10 *VAR11;
    VAR12 *VAR13;
    int VAR14, VAR15, VAR16;
    bool VAR17 = false;
    FUN2(VAR2->VAR18.VAR19, VAR3 ? "" : "");
    FUN3(VAR2);
    VAR2->VAR18.VAR20 = false;
    VAR7 = FUN4(sizeof(*VAR7));
    VAR7->VAR21 = sizeof(*VAR7);
    VAR14 = FUN5(VAR2->VAR18.VAR22, VAR23, VAR7);
    if (VAR14 && VAR24 != VAR25)
    {
        VAR14 = -VAR24;
        if (!VAR2->VAR26)
        {
            FUN6(""
                         "",
                         VAR2->VAR18.VAR19);
        }
        goto VAR27;
    }
    VAR16 = VAR7->VAR16;
    VAR7 = FUN7(VAR7, sizeof(*VAR7) + (VAR16 * sizeof(*VAR9)));
    VAR7->VAR21 = sizeof(*VAR7) + (VAR16 * sizeof(*VAR9));
    VAR9 = &VAR7->VAR9[0];
    VAR14 = FUN5(VAR2->VAR18.VAR22, VAR23, VAR7);
    if (VAR14)
    {
        VAR14 = -VAR24;
        FUN6("");
        goto VAR27;
    }
    FUN8(VAR2->VAR18.VAR19);
    for (VAR15 = 0; VAR15 < VAR7->VAR16; VAR15++)
    {
        PCIHostDeviceAddress VAR28;
        VAR1 *VAR29;
        VAR30 *VAR31;
        VAR28.VAR32 = VAR9[VAR15].VAR33;
        VAR28.VAR34 = VAR9[VAR15].VAR34;
        VAR28.VAR35 = FUN9(VAR9[VAR15].VAR36);
        VAR28.VAR37 = FUN10(VAR9[VAR15].VAR36);
        FUN11(VAR28.VAR32, VAR28.VAR34, VAR28.VAR35, VAR28.VAR37, VAR9[VAR15].VAR38);
        if (FUN12(&VAR28, VAR2->VAR18.VAR19))
        {
            continue;
        }
        FUN13(VAR5, &VAR39, VAR40)
        {
            if (VAR5->VAR41 == VAR9[VAR15].VAR38)
            {
                break;
            }
        }
        if (!VAR5)
        {
            if (!VAR2->VAR26)
            {
                FUN6(""
                             "",
                             VAR2->VAR18.VAR19, VAR9[VAR15].VAR38);
            }
            VAR14 = -VAR42;
            goto VAR43;
        }
        FUN13(VAR31, &VAR5->VAR44, VAR40)
        {
            if (VAR31->VAR45 != VAR46)
            {
                continue;
            }
            VAR29 = FUN14(VAR31, VAR1, VAR18);
            if (FUN12(&VAR28, VAR29->VAR18.VAR19))
            {
                if (VAR3)
                {
                    VAR14 = -VAR47;
                    goto VAR27;
                }
                FUN3(VAR29);
                VAR29->VAR18.VAR20 = false;
                VAR17 = true;
                break;
            }
        }
    }
    if (!VAR3 && !VAR17)
    {
        VAR14 = -VAR47;
        goto VAR27;
    }
    VAR16 = 0;
    FUN13(VAR5, &VAR39, VAR40)
    {
        for (VAR15 = 0; VAR15 < VAR7->VAR16; VAR15++)
        {
            if (VAR5->VAR41 == VAR9[VAR15].VAR38)
            {
                VAR16++;
                break;
            }
        }
    }
    VAR11 = FUN4(sizeof(*VAR11) + (VAR16 * sizeof(*VAR13)));
    VAR11->VAR21 = sizeof(*VAR11) + (VAR16 * sizeof(*VAR13));
    VAR13 = &VAR11->VAR48[0];
    FUN13(VAR5, &VAR39, VAR40)
    {
        for (VAR15 = 0; VAR15 < VAR7->VAR16; VAR15++)
        {
            if (VAR5->VAR41 == VAR9[VAR15].VAR38)
            {
                VAR13[VAR11->VAR16++] = VAR5->VAR22;
                break;
            }
        }
    }
    VAR14 = FUN5(VAR2->VAR18.VAR22, VAR49, VAR11);
    FUN15(VAR11);
    FUN16(VAR2->VAR18.VAR19, VAR14 ? "" : "");
VAR43:
    for (VAR15 = 0; VAR15 < VAR7->VAR16; VAR15++)
    {
        PCIHostDeviceAddress VAR28;
        VAR1 *VAR29;
        VAR30 *VAR31;
        VAR28.VAR32 = VAR9[VAR15].VAR33;
        VAR28.VAR34 = VAR9[VAR15].VAR34;
        VAR28.VAR35 = FUN9(VAR9[VAR15].VAR36);
        VAR28.VAR37 = FUN10(VAR9[VAR15].VAR36);
        if (FUN12(&VAR28, VAR2->VAR18.VAR19))
        {
            continue;
        }
        FUN13(VAR5, &VAR39, VAR40)
        {
            if (VAR5->VAR41 == VAR9[VAR15].VAR38)
            {
                break;
            }
        }
        if (!VAR5)
        {
            break;
        }
        FUN13(VAR31, &VAR5->VAR44, VAR40)
        {
            if (VAR31->VAR45 != VAR46)
            {
                continue;
            }
            VAR29 = FUN14(VAR31, VAR1, VAR18);
            if (FUN12(&VAR28, VAR29->VAR18.VAR19))
            {
                FUN17(VAR29);
                break;
            }
        }
    }
VAR27:
    FUN17(VAR2);
    FUN15(VAR7);
    return VAR14;
}