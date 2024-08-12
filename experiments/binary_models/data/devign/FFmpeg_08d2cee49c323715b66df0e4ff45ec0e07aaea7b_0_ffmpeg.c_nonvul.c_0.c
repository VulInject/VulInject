static int FUN1(const char *VAR1, const char *VAR2)
{
    VAR3 *VAR4;
    VAR5 *VAR6 = NULL;
    int VAR7, VAR8, VAR9, VAR10, VAR11;
    int64_t VAR12;
    uint8_t VAR13[128];
    VAR14 **VAR15;
    int VAR16;
    if (VAR17)
    {
        if (!(VAR6 = FUN2(VAR17)))
        {
            fprintf(VAR18, "", VAR17);
            FUN3(1);
        }
        VAR17 = NULL;
    }
    if (!strcmp(VAR2, ""))
        VAR2 = "";
    VAR19 |= !FUN4(VAR2, "", 5) || !strcmp(VAR2, "");
    VAR4 = FUN5();
    if (!VAR4)
    {
        FUN6(VAR2, FUN7(VAR20));
        FUN3(1);
    }
    if (VAR21)
    {
        snprintf(VAR13, sizeof(VAR13), "", VAR21);
        FUN8(&VAR22, "", VAR13, 0);
    }
    if (VAR23)
    {
        snprintf(VAR13, sizeof(VAR13), "", VAR23);
        FUN8(&VAR22, "", VAR13, 0);
    }
    if (VAR24.VAR25)
    {
        snprintf(VAR13, sizeof(VAR13), "", VAR24.VAR25, VAR24.VAR26);
        FUN8(&VAR22, "", VAR13, 0);
    }
    if (VAR27 && VAR28)
    {
        snprintf(VAR13, sizeof(VAR13), "", VAR27, VAR28);
        FUN8(&VAR22, "", VAR13, 0);
    }
    if (VAR29 != VAR30)
        FUN8(&VAR22, "", FUN9(VAR29), 0);
    VAR4->VAR31 = FUN10(VAR32, VAR33, 0);
    VAR4->VAR34 = FUN10(VAR35, VAR36, 0);
    VAR4->VAR37 = FUN10(VAR38, VAR39, 0);
    VAR4->VAR40 |= VAR41;
    if (VAR42)
    {
        FUN11(NULL, VAR43, "");
        VAR4->VAR42 = VAR42;
    }
    VAR7 = FUN12(&VAR4, VAR2, VAR6, &VAR22);
    if (VAR7 < 0)
    {
        FUN6(VAR2, VAR7);
        FUN3(1);
    }
    FUN13(VAR22);
    if (VAR44)
    {
        int VAR8, VAR45;
        int VAR46 = 0;
        for (VAR8 = 0; VAR8 < VAR4->VAR47; VAR8++)
        {
            VAR4->VAR48[VAR8]->VAR49 = VAR50;
        }
        for (VAR8 = 0; VAR8 < VAR4->VAR51; VAR8++)
        {
            VAR52 *VAR53 = VAR4->VAR54[VAR8];
            if (VAR53->VAR55 != VAR44)
            {
                VAR53->VAR49 = VAR50;
            }
            else
            {
                VAR46 = 1;
                for (VAR45 = 0; VAR45 < VAR53->VAR56; VAR45++)
                {
                    VAR4->VAR48[VAR53->VAR57[VAR45]]->VAR49 = VAR58;
                }
            }
        }
        if (!VAR46)
        {
            fprintf(VAR18, "");
            FUN3(1);
        }
        VAR44 = 0;
    }
    VAR15 = FUN14(VAR4, VAR59);
    VAR16 = VAR4->VAR47;
    VAR9 = FUN15(VAR4, VAR15);
    if (VAR9 < 0 && VAR60 >= 0)
    {
        fprintf(VAR18, "", VAR2);
        FUN16(VAR4);
        FUN3(1);
    }
    VAR12 = VAR61;
    if (VAR4->VAR61 != VAR62)
        VAR12 += VAR4->VAR61;
    if (VAR61 != 0)
    {
        VAR9 = FUN17(VAR4, -1, VAR12, VAR63);
        if (VAR9 < 0)
        {
            fprintf(VAR18, "", VAR2, (double)VAR12 / VAR64);
        }
        VAR61 = 0;
    }
    for (VAR8 = 0; VAR8 < VAR4->VAR47; VAR8++)
    {
        VAR65 *VAR66 = VAR4->VAR48[VAR8];
        VAR67 *VAR68 = VAR66->VAR69;
        VAR70 *VAR71;
        VAR68->VAR72 = VAR72;
        VAR73 = FUN18(VAR73, sizeof(*VAR73), &VAR74, VAR74 + 1);
        VAR71 = &VAR73[VAR74 - 1];
        VAR71->VAR66 = VAR66;
        VAR71->VAR75 = VAR76;
        VAR71->VAR49 = 1;
        VAR71->VAR15 = FUN19(VAR59, VAR71->VAR66->VAR69->VAR77, 0);
        if (VAR8 < VAR78)
            VAR71->VAR79 = VAR79[VAR8];
        switch (VAR68->VAR80)
        {
        case VAR36:
            VAR71->VAR68 = FUN20(VAR35);
            if (!VAR71->VAR68)
                VAR71->VAR68 = FUN21(VAR68->VAR77);
            if (VAR81)
                VAR66->VAR49 = VAR50;
            break;
        case VAR33:
            VAR71->VAR68 = FUN20(VAR32);
            if (!VAR71->VAR68)
                VAR71->VAR68 = FUN21(VAR68->VAR77);
            VAR10 = VAR4->VAR48[VAR8]->VAR82.VAR25;
            VAR11 = VAR4->VAR48[VAR8]->VAR82.VAR26;
            if (VAR68->VAR83)
            {
                VAR68->VAR40 |= VAR84;
            }
            if (VAR85)
                VAR68->VAR86 |= VAR87;
            if (VAR68->VAR88.VAR26 != VAR10 * VAR68->VAR89 || VAR68->VAR88.VAR25 != VAR11)
            {
                if (VAR60 >= 0)
                    fprintf(VAR18, "", VAR8, (float)VAR68->VAR88.VAR26 / VAR68->VAR88.VAR25, VAR68->VAR88.VAR26, VAR68->VAR88.VAR25, (float)VAR10 / VAR11, VAR10, VAR11);
            }
            if (VAR90)
                VAR66->VAR49 = VAR50;
            else if (VAR91)
                VAR66->VAR49 = VAR91;
            break;
        case VAR92:
            break;
        case VAR39:
            VAR71->VAR68 = FUN20(VAR38);
            if (!VAR71->VAR68)
                VAR71->VAR68 = FUN21(VAR68->VAR77);
            if (VAR93)
                VAR66->VAR49 = VAR50;
            break;
        case VAR94:
        case VAR95:
            break;
        default:
            FUN22();
        }
    }
    if (VAR60 >= 0)
        FUN23(VAR4, VAR76, VAR2, 0);
    VAR96 = FUN18(VAR96, sizeof(*VAR96), &VAR76, VAR76 + 1);
    VAR96[VAR76 - 1].VAR97 = VAR4;
    VAR96[VAR76 - 1].VAR98 = VAR74 - VAR4->VAR47;
    VAR96[VAR76 - 1].VAR99 = VAR100 - (VAR101 ? 0 : VAR12);
    VAR102 = -1;
    VAR24 = (VAR103){0, 0};
    VAR29 = VAR30;
    VAR28 = 0;
    VAR27 = 0;
    VAR21 = 0;
    VAR23 = 0;
    VAR104 = VAR105;
    FUN24(&VAR79);
    VAR78 = 0;
    for (VAR8 = 0; VAR8 < VAR16; VAR8++)
        FUN25(&VAR15[VAR8]);
    FUN24(&VAR15);
    FUN24(&VAR32);
    FUN24(&VAR35);
    FUN24(&VAR38);
    FUN26();
    FUN27();
    return 0;
}