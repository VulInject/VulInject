static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR3 *VAR5, const char *VAR6, int64_t VAR7, int VAR8)
{
    VAR9 *VAR10, *VAR11;
    VAR12 *VAR13 = VAR2->VAR14;
    VAR15 *VAR16;
    AMFDataType VAR17;
    char VAR18[256];
    double VAR19;
    VAR19 = 0;
    VAR16 = VAR2->VAR20;
    VAR17 = FUN2(VAR16);
    switch (VAR17)
    {
    case VAR21:
        VAR19 = FUN3(FUN4(VAR16));
        break;
    case VAR22:
        VAR19 = FUN2(VAR16);
        break;
    case VAR23:
        if (FUN5(VAR16, VAR18, sizeof(VAR18)) < 0)
            return -1;
        break;
    case VAR24:
        if ((VAR5 || VAR4) && VAR6 && VAR16->VAR25 && !strcmp(VAR26, VAR6) && VAR8 == 1)
            if (FUN6(VAR2, VAR16, VAR5 ? VAR5 : VAR4, VAR7) < 0)
                FUN7(VAR2, VAR27, "");
        while (FUN8(VAR16) < VAR7 - 2 && FUN5(VAR16, VAR18, sizeof(VAR18)) > 0)
            if (FUN1(VAR2, VAR4, VAR5, VAR18, VAR7, VAR8 + 1) < 0)
                return -1;
        if (FUN2(VAR16) != VAR28)
            return -1;
        break;
    case VAR29:
    case VAR30:
    case VAR31:
        break;
    case VAR32:
        FUN9(VAR16, 4);
        while (FUN8(VAR16) < VAR7 - 2 && FUN5(VAR16, VAR18, sizeof(VAR18)) > 0)
            if (FUN1(VAR2, VAR4, VAR5, VAR18, VAR7, VAR8 + 1) < 0)
                return -1;
        if (FUN2(VAR16) != VAR28)
            return -1;
        break;
    case VAR33:
    {
        unsigned int VAR34, VAR35;
        VAR34 = FUN10(VAR16);
        for (VAR35 = 0; VAR35 < VAR34 && FUN8(VAR16) < VAR7 - 1; VAR35++)
            if (FUN1(VAR2, NULL, NULL, NULL, VAR7, VAR8 + 1) < 0)
                return -1;
    }
    break;
    case VAR36:
        FUN9(VAR16, 8 + 2);
        break;
    default:
        return -1;
    }
    if (VAR6)
    {
        if (VAR8 == 1)
        {
            VAR10 = VAR4 ? VAR4->VAR37 : NULL;
            VAR11 = VAR5 ? VAR5->VAR37 : NULL;
            if (VAR17 == VAR21 || VAR17 == VAR22)
            {
                if (!strcmp(VAR6, ""))
                    VAR2->VAR38 = VAR19 * VAR39;
                else if (!strcmp(VAR6, "") && VAR11 && 0 <= (int)(VAR19 * 1024.0))
                    VAR11->VAR40 = VAR19 * 1024.0;
                else if (!strcmp(VAR6, "") && VAR10 && 0 <= (int)(VAR19 * 1024.0))
                    VAR10->VAR40 = VAR19 * 1024.0;
                else if (!strcmp(VAR6, ""))
                {
                    VAR3 *VAR41 = FUN11(VAR2, VAR42);
                    if (!VAR41)
                        return FUN12(VAR43);
                    VAR41->VAR37->VAR44 = VAR45;
                }
                else if (VAR13->VAR46)
                {
                    if (!strcmp(VAR6, "") && VAR11)
                    {
                        FUN13(VAR2, VAR5, VAR19, 0);
                    }
                    else if (!strcmp(VAR6, "") && VAR10)
                    {
                        int VAR47 = ((int)VAR19) << VAR48;
                        FUN14(VAR2, VAR4, VAR10, VAR47);
                    }
                    else if (!strcmp(VAR6, "") && VAR10)
                    {
                        VAR10->VAR49 = VAR19;
                    }
                    else if (!strcmp(VAR6, "") && VAR10)
                    {
                        VAR10->VAR50 = VAR19;
                    }
                    else if (!strcmp(VAR6, "") && VAR10)
                    {
                        VAR10->VAR51 = VAR19 + 1;
                        VAR10->VAR52 = VAR10->VAR51 == 2 ? VAR53 : VAR54;
                    }
                    else if (!strcmp(VAR6, "") && VAR11)
                    {
                        VAR11->VAR55 = VAR19;
                    }
                    else if (!strcmp(VAR6, "") && VAR11)
                    {
                        VAR11->VAR56 = VAR19;
                    }
                }
            }
        }
        if (VAR17 == VAR24 && VAR2->VAR57 == 1 && ((!VAR10 && !strcmp(VAR6, "")) || (!VAR11 && !strcmp(VAR6, ""))))
            VAR2->VAR58 &= ~VAR59;
        if (!strcmp(VAR6, "") || !strcmp(VAR6, "") || !strcmp(VAR6, "") || !strcmp(VAR6, "") || !strcmp(VAR6, "") || !strcmp(VAR6, "") || !strcmp(VAR6, "") || !strcmp(VAR6, "") || !strcmp(VAR6, "") || !strcmp(VAR6, "") || !strcmp(VAR6, "") || !strcmp(VAR6, "") || !strcmp(VAR6, ""))
            return 0;
        VAR2->VAR60 |= VAR61;
        if (VAR17 == VAR22)
        {
            FUN15(VAR18, VAR19 > 0 ? "" : "", sizeof(VAR18));
            FUN16(&VAR2->VAR62, VAR6, VAR18, 0);
        }
        else if (VAR17 == VAR21)
        {
            snprintf(VAR18, sizeof(VAR18), "", VAR19);
            FUN16(&VAR2->VAR62, VAR6, VAR18, 0);
        }
        else if (VAR17 == VAR23)
            FUN16(&VAR2->VAR62, VAR6, VAR18, 0);
    }
    return 0;
}