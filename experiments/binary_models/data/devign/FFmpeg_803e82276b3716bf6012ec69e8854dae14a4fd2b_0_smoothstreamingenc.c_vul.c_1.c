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
        VAR16 *VAR17 = &VAR4->VAR13[VAR7];
        VAR1 *VAR18;
        VAR19 *VAR20;
        VAR21 *VAR22 = NULL;
        char VAR23[10];
        if (!VAR2->VAR13[VAR7]->VAR24->VAR25)
        {
            FUN5(VAR2, VAR26, "", VAR7);
            VAR6 = FUN4(VAR27);
            goto VAR12;
        }
        snprintf(VAR17->VAR28, sizeof(VAR17->VAR28), "", VAR2->VAR10, VAR2->VAR13[VAR7]->VAR24->VAR25);
        mkdir(VAR17->VAR28, 0777);
        VAR18 = FUN6();
        if (!VAR18)
        {
            VAR6 = FUN4(VAR15);
            goto VAR12;
        }
        VAR17->VAR18 = VAR18;
        VAR18->VAR9 = VAR9;
        VAR18->VAR29 = VAR2->VAR29;
        if (!(VAR20 = FUN7(VAR18, NULL)))
        {
            VAR6 = FUN4(VAR15);
            goto VAR12;
        }
        FUN8(VAR20->VAR24, VAR2->VAR13[VAR7]->VAR24);
        VAR20->VAR30 = VAR2->VAR13[VAR7]->VAR30;
        VAR18->VAR31 = FUN9(VAR17->VAR32, sizeof(VAR17->VAR32), VAR33, VAR17, NULL, VAR34, VAR35);
        if (!VAR18->VAR31)
        {
            VAR6 = FUN4(VAR15);
            goto VAR12;
        }
        snprintf(VAR23, sizeof(VAR23), "", VAR4->VAR36);
        FUN10(&VAR22, "", VAR23, 0);
        FUN10(&VAR22, "", "", 0);
        if ((VAR6 = FUN11(VAR18, &VAR22)) < 0)
        {
            goto VAR12;
        }
        VAR17->VAR37 = 1;
        FUN12(VAR18->VAR31);
        FUN13(&VAR22);
        VAR2->VAR13[VAR7]->VAR38 = VAR20->VAR38;
        if (VAR20->VAR24->VAR39 == VAR40)
        {
            VAR4->VAR41 = 1;
            VAR17->VAR42 = "";
            if (VAR20->VAR24->VAR43 == VAR44)
            {
                VAR17->VAR45 = "";
            }
            else if (VAR20->VAR24->VAR43 == VAR46)
            {
                VAR17->VAR45 = "";
            }
            else
            {
                FUN5(VAR2, VAR26, "");
                VAR6 = FUN4(VAR27);
                goto VAR12;
            }
        }
        else
        {
            VAR4->VAR47 = 1;
            VAR17->VAR42 = "";
            if (VAR20->VAR24->VAR43 == VAR48)
            {
                VAR17->VAR45 = "";
                VAR17->VAR49 = 0xff;
            }
            else if (VAR20->VAR24->VAR43 == VAR50)
            {
                VAR17->VAR45 = "";
                VAR17->VAR49 = 0x0162;
            }
            else
            {
                FUN5(VAR2, VAR26, "");
                VAR6 = FUN4(VAR27);
                goto VAR12;
            }
            VAR17->VAR51 = VAR20->VAR24->VAR52 ? VAR20->VAR24->VAR52 : 4;
        }
        FUN14(VAR17);
    }
    if (!VAR4->VAR41 && VAR4->VAR53 <= 0)
    {
        FUN5(VAR2, VAR54, "");
        VAR6 = FUN4(VAR27);
    }
    VAR6 = FUN15(VAR2, 0);
VAR12:
    if (VAR6)
        FUN16(VAR2);
    return VAR6;
}