void FUN1(VAR1 *VAR2, const char *VAR3, VAR4 **VAR5)
{
    VAR6 *VAR7 = VAR2 ? (VAR6 *)VAR2->VAR8 : VAR9;
    const char *VAR10;
    int VAR11 = 0;
    int VAR12 = 0;
    int VAR13 = 0, VAR14 = 0;
    int VAR15 = 0;
    int VAR16;
    int VAR17 = 0;
    int VAR18 = 1;
    if (!VAR9)
    {
        FUN2(VAR5, "");
        return;
    }
    FUN3(VAR2);
    if (strcmp(VAR3, "") == 0)
        return;
    VAR7->VAR3 = FUN4(VAR3);
    VAR7->VAR19 = VAR20;
    VAR10 = VAR3;
    while ((VAR10 = strchr(VAR10, '')))
    {
        VAR10++;
        if (FUN5(VAR10, "", 8) == 0)
        {
            if (FUN6())
            {
                FUN2(VAR5, ""
                                 ""
                                 "");
                goto VAR21;
            }
            VAR11 = 1;
        }
        else if (FUN5(VAR10, "", 7) == 0)
        {
            VAR12 = 1;
        }
        else if (FUN5(VAR10, "", 16) == 0)
        {
            VAR18 = 0;
        }
        else if (FUN5(VAR10, "", 4) == 0)
        {
            VAR15 = 1;
        }
        else if (FUN5(VAR10, "", 9) == 0)
        {
            char *VAR22, *VAR23;
            VAR7->VAR24 = 1;
            VAR22 = strchr(VAR10, '');
            VAR23 = strchr(VAR10, '');
            if (VAR22 && (!VAR23 || (VAR22 < VAR23)))
            {
                int VAR25 = VAR23 ? VAR23 - (VAR22 + 1) : strlen(VAR22 + 1);
                if (VAR25 < 6)
                {
                    char *VAR26 = NULL, *VAR27 = NULL, *VAR28 = NULL;
                    VAR27 = FUN7(VAR22 + 1, VAR25);
                    VAR23 = strchr(VAR3, '');
                    VAR28 = FUN8(VAR3, VAR23 - VAR3, "");
                    if (VAR28)
                    {
                        VAR26 = FUN7(VAR3, VAR28 - VAR3 + 1);
                    }
                    else
                    {
                        VAR26 = FUN7("", 1);
                    }
                    VAR7->VAR29 = FUN9(VAR26, VAR27, NULL);
                    FUN10(VAR26);
                    FUN10(VAR27);
                }
            }
        }
        else if (FUN5(VAR10, "", 3) == 0)
        {
            VAR13 = 1;
        }
        else if (FUN5(VAR10, "", 4) == 0)
        {
            char *VAR22, *VAR23;
            VAR14 = 1;
            if (FUN5(VAR10, "", 10) == 0)
                VAR7->VAR13.VAR30 = 1;
            VAR22 = strchr(VAR10, '');
            VAR23 = strchr(VAR10, '');
            if (VAR22 && (!VAR23 || (VAR22 < VAR23)))
            {
                int VAR25 = VAR23 ? VAR23 - (VAR22 + 1) : strlen(VAR22 + 1);
                char *VAR31 = FUN7(VAR22 + 1, VAR25);
                FUN11("", VAR31);
                if (FUN12(VAR7, VAR31) < 0)
                {
                    FUN2(VAR5, "", VAR31);
                    FUN10(VAR31);
                    goto VAR21;
                }
                FUN10(VAR31);
            }
            else
            {
                FUN2(VAR5, "");
                goto VAR21;
            }
        }
        else if (FUN5(VAR10, "", 3) == 0)
        {
            VAR17 = 1;
        }
        else if (FUN5(VAR10, "", 5) == 0)
        {
            VAR7->VAR32 = true;
        }
        else if (FUN5(VAR10, "", 12) == 0)
        {
            VAR7->VAR33 = true;
        }
        else if (FUN5(VAR10, "", 6) == 0)
        {
            if (FUN5(VAR10 + 6, "", 6) == 0)
            {
                VAR7->VAR19 = VAR34;
            }
            else if (FUN5(VAR10 + 6, "", 15) == 0)
            {
                VAR7->VAR19 = VAR20;
            }
            else if (FUN5(VAR10 + 6, "", 12) == 0)
            {
                VAR7->VAR19 = VAR35;
            }
            else
            {
                FUN2(VAR5, "");
                goto VAR21;
            }
        }
    }
    if (VAR17 && VAR14 && VAR7->VAR13.VAR30)
    {
        if (!(VAR7->VAR13.VAR17 = FUN13("")))
        {
            fprintf(VAR36, "");
            FUN14(1);
        }
    }
    if (VAR17 && VAR15)
    {
        if (!(VAR7->VAR15.VAR17 = FUN13("")))
        {
            fprintf(VAR36, "");
            FUN14(1);
        }
    }
    if (VAR11)
    {
        if (VAR13)
        {
            VAR7->VAR37 = VAR38;
            if (VAR14)
            {
                FUN11("");
                VAR7->VAR39 = VAR40;
            }
            else
            {
                FUN11("");
                VAR7->VAR39 = VAR41;
            }
        }
        else
        {
            FUN11("");
            VAR7->VAR37 = VAR42;
            VAR7->VAR39 = VAR43;
        }
    }
    else if (VAR15)
    {
        if (VAR13)
        {
            VAR7->VAR37 = VAR38;
            if (VAR14)
            {
                FUN11("");
                VAR7->VAR39 = VAR44;
            }
            else
            {
                FUN11("");
                VAR7->VAR39 = VAR45;
            }
        }
        else
        {
            FUN11("");
            VAR7->VAR37 = VAR46;
            VAR7->VAR39 = VAR43;
        }
    }
    else
    {
        if (VAR13)
        {
            VAR7->VAR37 = VAR38;
            if (VAR14)
            {
                FUN11("");
                VAR7->VAR39 = VAR47;
            }
            else
            {
                FUN11("");
                VAR7->VAR39 = VAR48;
            }
        }
        else
        {
            FUN11("");
            VAR7->VAR37 = VAR49;
            VAR7->VAR39 = VAR43;
        }
    }
    if ((VAR16 = FUN15(NULL, "")) != VAR50)
    {
        FUN2(VAR5, "", FUN16(VAR16, NULL, NULL));
        goto VAR21;
    }
    VAR7->VAR18 = VAR18;
    if (VAR12)
    {
        int VAR51;
        VAR7->VAR52 = -1;
        VAR7->VAR53 = -1;
        if (FUN5(VAR3, "", 5) == 0)
        {
            VAR51 = FUN17(VAR3 + 5, VAR5);
        }
        else
        {
            VAR51 = FUN18(VAR3, VAR5);
        }
        if (VAR51 < 0)
        {
            goto VAR21;
        }
        FUN19(VAR7, VAR51, 0, 0);
    }
    else
    {
        char *VAR54;
        VAR54 = FUN20(256);
        if (FUN5(VAR3, "", 5) == 0)
        {
            FUN21(VAR54, 256, "");
            VAR7->VAR52 = FUN22(VAR3 + 5, VAR54 + 5, 256 - 5, VAR5);
        }
        else
        {
            VAR7->VAR52 = FUN23(VAR3, VAR54, 256, VAR55, 5900, VAR5);
            if (VAR7->VAR52 < 0)
            {
                FUN10(VAR54);
                goto VAR21;
            }
            if (VAR7->VAR24)
            {
                if (VAR7->VAR29)
                {
                    VAR7->VAR53 = FUN23(VAR7->VAR29, NULL, 256, VAR55, 0, VAR5);
                }
                else
                {
                    VAR7->VAR53 = FUN23(VAR7->VAR3, NULL, 256, VAR55, 5700, VAR5);
                }
                if (VAR7->VAR53 < 0)
                {
                    if (VAR7->VAR52)
                    {
                        close(VAR7->VAR52);
                        VAR7->VAR52 = -1;
                    }
                    FUN10(VAR54);
                    goto VAR21;
                }
            }
        }
        FUN10(VAR7->VAR3);
        VAR7->VAR3 = VAR54;
        FUN24(VAR7->VAR52, NULL, VAR56, NULL, VAR7);
        if (VAR7->VAR24)
        {
            FUN24(VAR7->VAR53, NULL, VAR57, NULL, VAR7);
        }
    }
    return;
VAR21:
    FUN10(VAR7->VAR3);
    VAR7->VAR3 = NULL;
    FUN10(VAR7->VAR29);
    VAR7->VAR29 = NULL;
}