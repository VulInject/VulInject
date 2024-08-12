static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    int VAR6 = 0, VAR7;
    char *VAR8;
    char VAR9[1024];
    if (VAR4->VAR10)
        VAR4->VAR11 = 1;
    if (VAR4->VAR11)
        VAR4->VAR12 = 0;
    FUN2(VAR4->VAR13, VAR2->VAR14, sizeof(VAR4->VAR13));
    VAR8 = strrchr(VAR4->VAR13, '');
    if (VAR8)
    {
        FUN2(VAR9, &VAR8[1], sizeof(VAR9));
        VAR8[1] = '';
    }
    else
    {
        VAR4->VAR13[0] = '';
        FUN2(VAR9, VAR2->VAR14, sizeof(VAR9));
    }
    VAR8 = strrchr(VAR9, '');
    if (VAR8)
        *VAR8 = '';
    VAR4->VAR15 = FUN3(sizeof(*VAR4->VAR15) * VAR2->VAR16);
    if (!VAR4->VAR15)
        return FUN4(VAR17);
    if ((VAR6 = FUN5(VAR2)) < 0)
        return VAR6;
    for (VAR7 = 0; VAR7 < VAR2->VAR16; VAR7++)
    {
        VAR18 *VAR19 = &VAR4->VAR15[VAR7];
        VAR20 *VAR21 = &VAR4->VAR21[VAR19->VAR22 - 1];
        VAR1 *VAR23;
        VAR24 *VAR25;
        VAR26 *VAR27 = NULL;
        char VAR14[1024];
        VAR19->VAR28 = VAR2->VAR15[VAR7]->VAR29->VAR28;
        if (VAR19->VAR28)
        {
            snprintf(VAR19->VAR30, sizeof(VAR19->VAR30), ""%VAR31\"", VAR19->VAR28);
        }
        else
        {
            int VAR32 = VAR2->VAR33 >= VAR34 ? VAR35 : VAR36;
            FUN6(VAR2, VAR32, "", VAR7);
            if (VAR2->VAR33 >= VAR34)
                return FUN4(VAR37);
        }
        FUN7(&VAR21->VAR38, VAR2->VAR15[VAR7]->VAR38, "");
        FUN7(&VAR21->VAR38, VAR2->VAR15[VAR7]->VAR38, "");
        VAR23 = FUN8();
        if (!VAR23)
            return FUN4(VAR17);
        if (VAR2->VAR15[VAR7]->VAR29->VAR39 == VAR40 || VAR2->VAR15[VAR7]->VAR29->VAR39 == VAR41 || VAR2->VAR15[VAR7]->VAR29->VAR39 == VAR42 || VAR2->VAR15[VAR7]->VAR29->VAR39 == VAR43)
        {
            snprintf(VAR19->VAR44, sizeof(VAR19->VAR44), "");
        }
        else
        {
            snprintf(VAR19->VAR44, sizeof(VAR19->VAR44), "");
        }
        VAR23->VAR45 = FUN9(VAR19->VAR44, NULL, NULL);
        if (!VAR23->VAR45)
            return VAR46;
        VAR19->VAR23 = VAR23;
        VAR23->VAR47 = VAR2->VAR47;
        VAR23->VAR48 = VAR2->VAR48;
        VAR23->VAR49 = VAR2->VAR49;
        VAR23->VAR50 = VAR2->VAR50;
        if (!(VAR25 = FUN10(VAR23, NULL)))
            return FUN4(VAR17);
        FUN11(VAR25->VAR29, VAR2->VAR15[VAR7]->VAR29);
        VAR25->VAR51 = VAR2->VAR15[VAR7]->VAR51;
        VAR25->VAR52 = VAR2->VAR15[VAR7]->VAR52;
        VAR25->VAR53 = VAR2->VAR15[VAR7]->VAR53;
        VAR23->VAR54 = VAR2->VAR54;
        VAR23->VAR55 = VAR2->VAR55;
        if ((VAR6 = FUN12(&VAR23->VAR56)) < 0)
            return VAR6;
        if (VAR4->VAR11)
        {
            if (VAR4->VAR10)
                FUN13(VAR19->VAR57, sizeof(VAR19->VAR57), VAR4->VAR10, VAR7, 0, VAR19->VAR28, 0);
            else
                snprintf(VAR19->VAR57, sizeof(VAR19->VAR57), "", VAR9, VAR7);
        }
        else
        {
            FUN13(VAR19->VAR57, sizeof(VAR19->VAR57), VAR4->VAR58, VAR7, 0, VAR19->VAR28, 0);
        }
        snprintf(VAR14, sizeof(VAR14), "", VAR4->VAR13, VAR19->VAR57);
        FUN14(&VAR27, VAR4);
        VAR6 = VAR2->FUN15(VAR2, &VAR19->VAR59, VAR14, VAR60, &VAR27);
        if (VAR6 < 0)
            return VAR6;
        FUN16(&VAR27);
        VAR19->VAR61 = 0;
        if (!strcmp(VAR19->VAR44, ""))
        {
            FUN17(&VAR27, "", "", 0);
        }
        else
        {
            FUN18(&VAR27, "", VAR4->VAR62 / 1000, 0);
            FUN18(&VAR27, "", 5 * 1024 * 1024, 0);
            FUN18(&VAR27, "", 1, 0);
            FUN18(&VAR27, "", VAR7 + 1, 0);
            FUN18(&VAR27, "", 1, 0);
        }
        if ((VAR6 = FUN19(VAR23, &VAR27)) < 0)
            return VAR6;
        VAR19->VAR63 = 1;
        FUN20(VAR23->VAR56);
        FUN16(&VAR27);
        FUN6(VAR2, VAR64, "", VAR7, VAR14);
        if (strcmp(VAR19->VAR44, ""))
        {
            FUN21(VAR2, VAR19);
        }
        VAR2->VAR15[VAR7]->VAR52 = VAR25->VAR52;
        VAR2->VAR54 = VAR23->VAR54;
        if (VAR25->VAR29->VAR65 == VAR66)
        {
            AVRational VAR53 = VAR2->VAR15[VAR7]->VAR53;
            if (VAR53.VAR67 > 0)
            {
                if (FUN22(VAR53, VAR21->VAR68) < 0)
                    VAR21->VAR68 = VAR53;
                if (FUN22(VAR21->VAR69, VAR53) < 0)
                    VAR21->VAR69 = VAR53;
            }
            else
            {
                VAR21->VAR70 = 1;
            }
            VAR4->VAR71 = 1;
        }
        FUN23(VAR2, VAR25->VAR29, VAR19->VAR72, sizeof(VAR19->VAR72));
        VAR19->VAR73 = VAR74;
        VAR19->VAR75 = VAR74;
        VAR19->VAR76 = VAR74;
        VAR19->VAR77 = 1;
    }
    if (!VAR4->VAR71 && VAR4->VAR62 <= 0)
    {
        FUN6(VAR2, VAR36, "");
        return FUN4(VAR37);
    }
    return 0;
}