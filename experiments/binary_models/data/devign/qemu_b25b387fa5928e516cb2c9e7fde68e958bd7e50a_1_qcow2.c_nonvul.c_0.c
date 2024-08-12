static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, void *VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    int VAR11 = VAR9->VAR12, VAR13 = VAR11;
    uint64_t VAR14 = 0;
    const char *VAR15 = NULL, *VAR16 = NULL;
    bool VAR17 = VAR9->VAR18;
    const char *VAR19 = NULL;
    uint64_t VAR20 = VAR9->VAR20;
    bool VAR21;
    int VAR22 = VAR9->VAR22;
    VAR23 *VAR24 = NULL;
    int VAR25;
    VAR26 *VAR27 = VAR4->VAR28->VAR27;
    Qcow2AmendHelperCBInfo VAR29;
    while (VAR27 && VAR27->VAR30)
    {
        if (!FUN2(VAR4, VAR27->VAR30))
        {
            VAR27++;
            continue;
        }
        if (!strcmp(VAR27->VAR30, VAR31))
        {
            VAR19 = FUN3(VAR4, VAR31);
            if (!VAR19)
            {
            }
            else if (!strcmp(VAR19, ""))
            {
                VAR13 = 2;
            }
            else if (!strcmp(VAR19, ""))
            {
                VAR13 = 3;
            }
            else
            {
                FUN4("", VAR19);
                return -VAR32;
            }
        }
        else if (!strcmp(VAR27->VAR30, VAR33))
        {
            FUN4("");
            return -VAR34;
        }
        else if (!strcmp(VAR27->VAR30, VAR35))
        {
            VAR14 = FUN5(VAR4, VAR35, 0);
        }
        else if (!strcmp(VAR27->VAR30, VAR36))
        {
            VAR15 = FUN3(VAR4, VAR36);
        }
        else if (!strcmp(VAR27->VAR30, VAR37))
        {
            VAR16 = FUN3(VAR4, VAR37);
        }
        else if (!strcmp(VAR27->VAR30, VAR38))
        {
            VAR21 = FUN6(VAR4, VAR38, !!VAR9->VAR39);
            if (VAR21 != !!VAR9->VAR39)
            {
                FUN4("");
                return -VAR34;
            }
        }
        else if (!strcmp(VAR27->VAR30, VAR40))
        {
            VAR20 = FUN5(VAR4, VAR40, VAR20);
            if (VAR20 != VAR9->VAR20)
            {
                FUN4("");
                return -VAR34;
            }
        }
        else if (!strcmp(VAR27->VAR30, VAR41))
        {
            VAR17 = FUN6(VAR4, VAR41, VAR17);
        }
        else if (!strcmp(VAR27->VAR30, VAR42))
        {
            VAR22 = FUN7(VAR4, VAR42, VAR22);
            if (VAR22 <= 0 || VAR22 > 64 || !FUN8(VAR22))
            {
                FUN4(""
                             "");
                return -VAR32;
            }
        }
        else
        {
            FUN9();
        }
        VAR27++;
    }
    VAR29 = (VAR43){.VAR44 = VAR6, .VAR45 = VAR7, .VAR46 = (VAR13 < VAR11) + (VAR9->VAR22 != VAR22)};
    if (VAR13 > VAR11)
    {
        VAR9->VAR12 = VAR13;
        VAR25 = FUN10(VAR2);
        if (VAR25 < 0)
        {
            VAR9->VAR12 = VAR11;
            return VAR25;
        }
    }
    if (VAR9->VAR22 != VAR22)
    {
        int VAR47 = FUN11(VAR22);
        if (VAR13 < 3 && VAR22 != 16)
        {
            FUN4(""
                         ""
                         "");
            return -VAR32;
        }
        VAR29.VAR48 = VAR49;
        VAR25 = FUN12(VAR2, VAR47, &VAR50, &VAR29, &VAR24);
        if (VAR25 < 0)
        {
            FUN13(VAR24);
            return VAR25;
        }
    }
    if (VAR15 || VAR16)
    {
        VAR25 = FUN14(VAR2, VAR15 ?: VAR9->VAR51, VAR16 ?: VAR9->VAR52);
        if (VAR25 < 0)
        {
            return VAR25;
        }
    }
    if (VAR9->VAR18 != VAR17)
    {
        if (VAR17)
        {
            if (VAR13 < 3)
            {
                FUN4(""
                             "");
                return -VAR32;
            }
            VAR9->VAR53 |= VAR54;
            VAR25 = FUN10(VAR2);
            if (VAR25 < 0)
            {
                VAR9->VAR53 &= ~VAR54;
                return VAR25;
            }
            VAR9->VAR18 = true;
        }
        else
        {
            VAR25 = FUN15(VAR2);
            if (VAR25 < 0)
            {
                return VAR25;
            }
            VAR9->VAR53 &= ~VAR54;
            VAR25 = FUN10(VAR2);
            if (VAR25 < 0)
            {
                VAR9->VAR53 |= VAR54;
                return VAR25;
            }
            VAR9->VAR18 = false;
        }
    }
    if (VAR14)
    {
        VAR55 *VAR56 = FUN16(VAR57, VAR58);
        VAR25 = FUN17(VAR56, VAR2, &VAR24);
        if (VAR25 < 0)
        {
            FUN13(VAR24);
            FUN18(VAR56);
            return VAR25;
        }
        VAR25 = FUN19(VAR56, VAR14, &VAR24);
        FUN18(VAR56);
        if (VAR25 < 0)
        {
            FUN13(VAR24);
            return VAR25;
        }
    }
    if (VAR13 < VAR11)
    {
        VAR29.VAR48 = VAR59;
        VAR25 = FUN20(VAR2, VAR13, &VAR50, &VAR29);
        if (VAR25 < 0)
        {
            return VAR25;
        }
    }
    return 0;
}