int FUN1(VAR1 *VAR2, const char *VAR3, int VAR4, int VAR5, const char *VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    int VAR10 = 0, VAR11, VAR12, VAR13, VAR14 = 0, VAR15;
    VAR16 *VAR17;
    RTSPMessageHeader VAR18, *VAR19 = &VAR18;
    char VAR20[2048];
    const char *VAR21;
    if (VAR8->VAR22 == VAR23)
        VAR21 = "";
    else
        VAR21 = "";
    VAR8->VAR24 = 60;
    VAR15 = FUN2() % ((VAR8->VAR25 - VAR8->VAR26) / 2);
    VAR15 -= VAR15 & 0x01;
    for (VAR11 = VAR8->VAR26 + VAR15, VAR12 = 0; VAR12 < VAR8->VAR27; ++VAR12)
    {
        char VAR22[2048];
        if (VAR5 == VAR28 && VAR8->VAR29 == VAR30)
        {
            if (VAR12 == 0)
            {
                for (VAR10 = 0; VAR10 < VAR8->VAR27; VAR10++)
                {
                    int VAR31 = strlen(VAR8->VAR32[VAR10]->VAR33);
                    if (VAR31 >= 4 && !strcmp(VAR8->VAR32[VAR10]->VAR33 + VAR31 - 4, ""))
                        break;
                }
                if (VAR10 == VAR8->VAR27)
                    return -1;
                VAR17 = VAR8->VAR32[VAR10];
            }
            else
                VAR17 = VAR8->VAR32[VAR12 > VAR10 ? VAR12 : VAR12 - 1];
        }
        else
            VAR17 = VAR8->VAR32[VAR12];
        if (VAR5 == VAR28)
        {
            char VAR34[256];
            if (VAR8->VAR29 == VAR30 && VAR12 > 1)
            {
                VAR4 = VAR19->VAR35[0].VAR36;
                goto VAR37;
            }
            while (VAR11 <= VAR8->VAR25)
            {
                FUN3(VAR34, sizeof(VAR34), "", NULL, VAR3, -1, "", VAR11);
                VAR11 += 2;
                if (!FUN4(&VAR17->VAR38, VAR34, VAR39, &VAR2->VAR40, NULL))
                    goto VAR41;
            }
            FUN5(VAR2, VAR42, "");
            VAR13 = FUN6(VAR43);
            goto VAR44;
        VAR41:
            VAR4 = FUN7(VAR17->VAR38);
        VAR37:
            snprintf(VAR22, sizeof(VAR22) - 1, "", VAR21);
            if (VAR8->VAR29 != VAR45)
                FUN8(VAR22, "", sizeof(VAR22));
            FUN9(VAR22, sizeof(VAR22), "", VAR4);
            if (VAR8->VAR22 == VAR46 && !(VAR8->VAR29 == VAR30 && VAR12 > 0))
                FUN9(VAR22, sizeof(VAR22), "", VAR4 + 1);
        }
        else if (VAR5 == VAR47)
        {
            if (VAR8->VAR29 == VAR30 && (VAR17->VAR48 < 0 || VAR2->VAR49[VAR17->VAR48]->VAR50->VAR51 == VAR52))
                continue;
            snprintf(VAR22, sizeof(VAR22) - 1, "", VAR21);
            if (VAR8->VAR22 != VAR23)
                FUN8(VAR22, "", sizeof(VAR22));
            FUN9(VAR22, sizeof(VAR22), "", VAR14, VAR14 + 1);
            VAR14 += 2;
        }
        else if (VAR5 == VAR53)
        {
            snprintf(VAR22, sizeof(VAR22) - 1, "", VAR21);
        }
        if (VAR2->VAR54)
        {
            FUN8(VAR22, "", sizeof(VAR22));
        }
        else if (VAR8->VAR29 == VAR45 || VAR8->VAR29 == VAR30)
            FUN8(VAR22, "", sizeof(VAR22));
        snprintf(VAR20, sizeof(VAR20), "", VAR22);
        if (VAR8->VAR55)
            FUN8(VAR20, "", sizeof(VAR20));
        if (VAR12 == 0 && VAR8->VAR29 == VAR45 && VAR56)
        {
            char VAR57[41], VAR58[9];
            FUN10(VAR57, VAR58, VAR6);
            FUN9(VAR20, sizeof(VAR20), ""
                                          "",
                        VAR8->VAR59, VAR57, VAR58);
        }
        FUN11(VAR2, "", VAR17->VAR33, VAR20, VAR19, NULL);
        if (VAR19->VAR60 == 461 && VAR12 == 0)
        {
            VAR13 = 1;
            goto VAR44;
        }
        else if (VAR19->VAR60 != VAR61 || VAR19->VAR62 != 1)
        {
            VAR13 = VAR63;
            goto VAR44;
        }
        if (VAR12 > 0)
        {
            if (VAR19->VAR35[0].VAR5 != VAR8->VAR5 || VAR19->VAR35[0].VAR22 != VAR8->VAR22)
            {
                VAR13 = VAR63;
                goto VAR44;
            }
        }
        else
        {
            VAR8->VAR5 = VAR19->VAR35[0].VAR5;
            VAR8->VAR22 = VAR19->VAR35[0].VAR22;
        }
        if (VAR19->VAR35[0].VAR5 != VAR5)
        {
            FUN5(VAR2, VAR42, "");
            VAR13 = VAR63;
            goto VAR44;
        }
        switch (VAR19->VAR35[0].VAR5)
        {
        case VAR47:
            VAR17->VAR64 = VAR19->VAR35[0].VAR64;
            VAR17->VAR65 = VAR19->VAR35[0].VAR65;
            break;
        case VAR28:
        {
            char VAR66[1024], VAR67[30] = "";
            if (VAR8->VAR68 & VAR69)
                FUN12(VAR67, "", sizeof(VAR67));
            if (VAR19->VAR35[0].VAR70[0])
            {
                FUN3(VAR66, sizeof(VAR66), "", NULL, VAR19->VAR35[0].VAR70, VAR19->VAR35[0].VAR71, "", VAR67);
            }
            else
            {
                FUN3(VAR66, sizeof(VAR66), "", NULL, VAR3, VAR19->VAR35[0].VAR71, "", VAR67);
            }
            if (!(VAR8->VAR29 == VAR30 && VAR12 > 1) && FUN13(VAR17->VAR38, VAR66) < 0)
            {
                VAR13 = VAR63;
                goto VAR44;
            }
            if (!(VAR8->VAR29 == VAR30 && VAR12 > 1) && VAR2->VAR72 && VAR56)
                FUN14(VAR17->VAR38);
            break;
        }
        case VAR53:
        {
            char VAR66[1024], VAR73[50], VAR74[20] = "";
            struct sockaddr_storage VAR75;
            int VAR4, VAR76;
            if (VAR19->VAR35[0].VAR77.VAR78)
            {
                VAR75 = VAR19->VAR35[0].VAR77;
                VAR4 = VAR19->VAR35[0].VAR79;
                VAR76 = VAR19->VAR35[0].VAR76;
            }
            else
            {
                VAR75 = VAR17->VAR80;
                VAR4 = VAR17->VAR81;
                VAR76 = VAR17->VAR82;
            }
            if (VAR76 > 0)
                snprintf(VAR74, sizeof(VAR74), "", VAR76);
            getnameinfo((struct VAR83 *)&VAR75, sizeof(VAR75), VAR73, sizeof(VAR73), NULL, 0, VAR84);
            FUN3(VAR66, sizeof(VAR66), "", NULL, VAR73, VAR4, "", VAR74);
            if (FUN4(&VAR17->VAR38, VAR66, VAR39, &VAR2->VAR40, NULL) < 0)
            {
                VAR13 = VAR63;
                goto VAR44;
            }
            break;
        }
        }
        if ((VAR13 = FUN15(VAR2, VAR17)))
            goto VAR44;
    }
    if (VAR19->VAR24 > 0)
        VAR8->VAR24 = VAR19->VAR24;
    if (VAR8->VAR29 == VAR45)
        VAR8->VAR85 = 1;
    return 0;
VAR44:
    FUN16(VAR2);
    return VAR13;
}