static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    int VAR6 = 0, VAR7;
    VAR8 *VAR9;
    if (mkdir(VAR2->VAR10, 0777) < 0)
    {
        FUN2(VAR2, VAR11, "");
        VAR6 = FUN3(VAR12);
        goto VAR13;
    }
    VAR9 = FUN4("", NULL, NULL);
    if (!VAR9)
    {
        VAR6 = VAR14;
        goto VAR13;
    }
    VAR4->VAR15 = FUN5(sizeof(*VAR4->VAR15) * VAR2->VAR16);
    if (!VAR4->VAR15)
    {
        VAR6 = FUN3(VAR17);
        goto VAR13;
    }
    for (VAR7 = 0; VAR7 < VAR2->VAR16; VAR7++)
    {
        VAR18 *VAR19 = &VAR4->VAR15[VAR7];
        VAR1 *VAR20;
        VAR21 *VAR22;
        VAR23 *VAR24 = NULL;
        char VAR25[10];
        if (!VAR2->VAR15[VAR7]->VAR26->VAR27)
        {
            FUN2(VAR2, VAR11, "", VAR7);
            VAR6 = FUN3(VAR28);
            goto VAR13;
        }
        snprintf(VAR19->VAR29, sizeof(VAR19->VAR29), "", VAR2->VAR10, VAR2->VAR15[VAR7]->VAR26->VAR27);
        if (mkdir(VAR19->VAR29, 0777) < 0)
        {
            VAR6 = FUN3(VAR12);
            FUN2(VAR2, VAR11, "");
            goto VAR13;
        }
        VAR20 = FUN6();
        if (!VAR20)
        {
            VAR6 = FUN3(VAR17);
            goto VAR13;
        }
        VAR19->VAR20 = VAR20;
        VAR20->VAR9 = VAR9;
        VAR20->VAR30 = VAR2->VAR30;
        if (!(VAR22 = FUN7(VAR20, NULL)))
        {
            VAR6 = FUN3(VAR17);
            goto VAR13;
        }
        FUN8(VAR22->VAR26, VAR2->VAR15[VAR7]->VAR26);
        VAR22->VAR31 = VAR2->VAR15[VAR7]->VAR31;
        VAR20->VAR32 = FUN9(VAR19->VAR33, sizeof(VAR19->VAR33), VAR34, VAR19, NULL, VAR35, VAR36);
        if (!VAR20->VAR32)
        {
            VAR6 = FUN3(VAR17);
            goto VAR13;
        }
        snprintf(VAR25, sizeof(VAR25), "", VAR4->VAR37);
        FUN10(&VAR24, "", VAR25, 0);
        FUN10(&VAR24, "", "", 0);
        if ((VAR6 = FUN11(VAR20, &VAR24)) < 0)
        {
            goto VAR13;
        }
        VAR19->VAR38 = 1;
        FUN12(VAR20->VAR32);
        FUN13(&VAR24);
        VAR2->VAR15[VAR7]->VAR39 = VAR22->VAR39;
        if (VAR22->VAR26->VAR40 == VAR41)
        {
            VAR4->VAR42 = 1;
            VAR19->VAR43 = "";
            if (VAR22->VAR26->VAR44 == VAR45)
            {
                VAR19->VAR46 = "";
            }
            else if (VAR22->VAR26->VAR44 == VAR47)
            {
                VAR19->VAR46 = "";
            }
            else
            {
                FUN2(VAR2, VAR11, "");
                VAR6 = FUN3(VAR28);
                goto VAR13;
            }
        }
        else
        {
            VAR4->VAR48 = 1;
            VAR19->VAR43 = "";
            if (VAR22->VAR26->VAR44 == VAR49)
            {
                VAR19->VAR46 = "";
                VAR19->VAR50 = 0xff;
            }
            else if (VAR22->VAR26->VAR44 == VAR51)
            {
                VAR19->VAR46 = "";
                VAR19->VAR50 = 0x0162;
            }
            else
            {
                FUN2(VAR2, VAR11, "");
                VAR6 = FUN3(VAR28);
                goto VAR13;
            }
            VAR19->VAR52 = VAR22->VAR26->VAR53 ? VAR22->VAR26->VAR53 : 4;
        }
        FUN14(VAR19);
    }
    if (!VAR4->VAR42 && VAR4->VAR54 <= 0)
    {
        FUN2(VAR2, VAR55, "");
        VAR6 = FUN3(VAR28);
    }
    VAR6 = FUN15(VAR2, 0);
VAR13:
    if (VAR6)
        FUN16(VAR2);
    return VAR6;
}