static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    int VAR6 = 0, VAR7;
    VAR8 *VAR9;
    mkdir(VAR2->VAR10, 0777);
    VAR9 = FUN2("", NULL, NULL);
    if (!VAR9)
    {
        VAR6 = VAR11;
        goto VAR12;
    }
    VAR4->VAR13 = FUN3(sizeof(*VAR4->VAR13) * VAR2->VAR14);
    if (!VAR4->VAR13)
    {
        VAR6 = FUN4(VAR15);
        goto VAR12;
    }
    for (VAR7 = 0; VAR7 < VAR2->VAR14; VAR7++)
    {
        VAR16 *VAR17 = &VAR4->VAR13[VAR4->VAR14];
        VAR1 *VAR18;
        VAR19 *VAR20 = VAR2->VAR13[VAR7];
        if (!VAR20->VAR21->VAR22)
        {
            FUN5(VAR2, VAR23, "", VAR7);
            VAR6 = FUN4(VAR24);
            goto VAR12;
        }
        if (VAR20->VAR21->VAR25 == VAR26)
        {
            if (VAR17->VAR27)
            {
                VAR4->VAR14++;
                VAR17++;
            }
            VAR17->VAR27 = 1;
        }
        else if (VAR20->VAR21->VAR25 == VAR28)
        {
            if (VAR17->VAR29)
            {
                VAR4->VAR14++;
                VAR17++;
            }
            VAR17->VAR29 = 1;
        }
        else
        {
            FUN5(VAR2, VAR23, "", VAR7);
            VAR6 = FUN4(VAR24);
            goto VAR12;
        }
        VAR17->VAR30 += VAR2->VAR13[VAR7]->VAR21->VAR22;
        if (!VAR17->VAR18)
        {
            VAR17->VAR31 = VAR7;
            VAR18 = FUN6();
            if (!VAR18)
            {
                VAR6 = FUN4(VAR15);
                goto VAR12;
            }
            VAR17->VAR18 = VAR18;
            VAR18->VAR9 = VAR9;
            VAR18->VAR32 = VAR2->VAR32;
            VAR18->VAR33 = FUN7(VAR17->VAR34, sizeof(VAR17->VAR34), VAR35, VAR17, NULL, VAR36, NULL);
            if (!VAR18->VAR33)
            {
                VAR6 = FUN4(VAR15);
                goto VAR12;
            }
        }
        else
        {
            VAR18 = VAR17->VAR18;
        }
        VAR2->VAR13[VAR7]->VAR37 = VAR4->VAR14;
        if (!(VAR20 = FUN8(VAR18, NULL)))
        {
            VAR6 = FUN4(VAR15);
            goto VAR12;
        }
        FUN9(VAR20->VAR21, VAR2->VAR13[VAR7]->VAR21);
        VAR20->VAR38 = VAR2->VAR13[VAR7]->VAR38;
    }
    if (VAR4->VAR13[VAR4->VAR14].VAR18)
        VAR4->VAR14++;
    for (VAR7 = 0; VAR7 < VAR4->VAR14; VAR7++)
    {
        VAR16 *VAR17 = &VAR4->VAR13[VAR7];
        int VAR39;
        if ((VAR6 = FUN10(VAR17->VAR18, NULL)) < 0)
        {
            goto VAR12;
        }
        VAR17->VAR40 = 1;
        FUN11(VAR17->VAR18->VAR33);
        for (VAR39 = 0; VAR39 < VAR17->VAR18->VAR14; VAR39++)
            VAR2->VAR13[VAR17->VAR31 + VAR39]->VAR41 = VAR17->VAR18->VAR13[VAR39]->VAR41;
        snprintf(VAR17->VAR42, sizeof(VAR17->VAR42), "", VAR2->VAR10, VAR7);
        VAR6 = FUN12(VAR2, VAR17, 0);
        if (VAR6 < 0)
            goto VAR12;
        if (!VAR17->VAR27 && VAR4->VAR43 <= 0)
        {
            FUN5(VAR2, VAR44, "", VAR7);
            VAR6 = FUN4(VAR24);
        }
        VAR17->VAR45 = 1;
        FUN13(VAR2, VAR17, 0);
    }
    VAR6 = FUN14(VAR2, 0);
VAR12:
    if (VAR6)
        FUN15(VAR2);
    return VAR6;
}