FUN1(VAR1 *VAR2, GIOCondition VAR3, gpointer VAR4)
{
    char *VAR5;
    VCardEmulError VAR6;
    static unsigned int VAR7;
    unsigned int VAR8;
    VAR9 *VAR10 = NULL;
    VAR11 *VAR12 = NULL;
    FUN2(VAR3 & VAR13);
    VAR8 = VAR7;
    FUN3(VAR2, &VAR5, NULL, NULL, &VAR12);
    if (VAR12 != NULL)
    {
        FUN4("", VAR12->VAR14);
    }
    if (VAR5 != NULL)
    {
        if (FUN5(VAR5, "", 4) == 0)
        {
            VAR15 *VAR16 = FUN6();
            VAR17 *VAR18;
            FUN7("");
            for (VAR18 = FUN8(VAR16); VAR18; VAR18 = FUN9(VAR18))
            {
                VAR9 *VAR10 = FUN10(VAR18);
                vreader_id_t VAR8;
                VAR8 = FUN11(VAR10);
                if (VAR8 == -1)
                {
                    continue;
                }
                if (FUN12(VAR10) == VAR19)
                {
                    FUN13(VAR20, VAR8, NULL, 0);
                }
                FUN13(VAR21, VAR8, NULL, 0);
            }
            FUN14(0);
        }
        else if (FUN5(VAR5, "", 6) == 0)
        {
            if (VAR5[6] == '')
            {
                VAR8 = FUN15(&VAR5[7], VAR8);
            }
            VAR10 = FUN16(VAR8);
            if (VAR10 != NULL)
            {
                VAR6 = FUN17(VAR10);
                FUN7("", FUN18(VAR10), VAR6);
            }
            else
            {
                FUN7("", VAR8);
            }
        }
        else if (FUN5(VAR5, "", 6) == 0)
        {
            if (VAR5[6] == '')
            {
                VAR8 = FUN15(&VAR5[7], VAR8);
            }
            VAR10 = FUN16(VAR8);
            if (VAR10 != NULL)
            {
                VAR6 = FUN19(VAR10);
                FUN7("", FUN18(VAR10), VAR6);
            }
            else
            {
                FUN7("", VAR8);
            }
        }
        else if (FUN5(VAR5, "", 6) == 0)
        {
            if (VAR5[6] == '')
            {
                VAR8 = FUN15(&VAR5[7], VAR22);
            }
            if (VAR8 != VAR22)
            {
                VAR10 = FUN16(VAR8);
            }
            if (VAR10)
            {
                FUN7("", VAR8, FUN18(VAR10));
                VAR7 = VAR8;
            }
            else
            {
                FUN7("", VAR8);
            }
        }
        else if (FUN5(VAR5, "", 5) == 0)
        {
            if (VAR5[5] == '')
            {
                VAR23 = FUN15(&VAR5[6], 0);
            }
            FUN7("", VAR23);
        }
        else if (FUN5(VAR5, "", 4) == 0)
        {
            VAR15 *VAR16 = FUN6();
            VAR17 *VAR18;
            FUN7("");
            for (VAR18 = FUN8(VAR16); VAR18; VAR18 = FUN9(VAR18))
            {
                VAR9 *VAR10 = FUN10(VAR18);
                vreader_id_t VAR8;
                VAR8 = FUN11(VAR10);
                if (VAR8 == -1)
                {
                    continue;
                }
                FUN7("", VAR8, FUN12(VAR10) == VAR19 ? "" : "", FUN18(VAR10));
            }
            FUN7("");
            for (VAR18 = FUN8(VAR16); VAR18; VAR18 = FUN9(VAR18))
            {
                VAR9 *VAR10 = FUN10(VAR18);
                vreader_id_t VAR8;
                VAR8 = FUN11(VAR10);
                if (VAR8 != -1)
                {
                    continue;
                }
                FUN7("", FUN12(VAR10) == VAR19 ? "" : "", FUN18(VAR10));
            }
        }
        else if (*VAR5 != 0)
        {
            FUN7("");
            FUN7("");
            FUN7("");
            FUN7("");
            FUN7("");
            FUN7("");
            FUN7("");
        }
    }
    FUN20(VAR10);
    FUN7("");
    FUN21(VAR24);
    return VAR25;