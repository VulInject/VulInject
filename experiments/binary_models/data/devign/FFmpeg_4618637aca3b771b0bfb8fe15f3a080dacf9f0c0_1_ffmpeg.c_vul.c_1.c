static void FUN1(VAR1 *VAR2, int VAR3)
{
    VAR4 *VAR5;
    VAR6 *VAR7;
    VAR8 *VAR9;
    enum CodecID VAR10;
    VAR11 *VAR12 = NULL;
    VAR5 = FUN2(VAR2, VAR2->VAR13 < VAR14 ? VAR15[VAR2->VAR13] : 0);
    if (!VAR5)
    {
        fprintf(VAR16, "");
        FUN3(1);
    }
    VAR7 = FUN4(VAR2, VAR3);
    VAR17 = FUN5(VAR17, sizeof(*VAR17), &VAR18, VAR18 + 1);
    if (!VAR19)
    {
        if (VAR20)
        {
            VAR10 = FUN6(VAR20, VAR21, 1, VAR22[VAR21]->VAR23);
            VAR12 = FUN7(VAR20);
            VAR17[VAR18 - 1] = VAR12;
        }
        else
        {
            VAR10 = FUN8(VAR2->VAR24, NULL, VAR2->VAR25, NULL, VAR21);
            VAR12 = FUN9(VAR10);
        }
    }
    FUN10(VAR5->VAR12, VAR12);
    VAR7->VAR26 = VAR27;
    VAR27 = NULL;
    FUN11(VAR5->VAR12, VAR28);
    VAR9 = VAR5->VAR12;
    if (VAR29)
        VAR9->VAR30 = VAR29;
    if ((VAR31 & 1) || (VAR31 == 0 && (VAR2->VAR24->VAR32 & VAR33)))
    {
        VAR9->VAR32 |= VAR34;
        VAR22[VAR21]->VAR32 |= VAR34;
    }
    if (VAR31 & 2)
    {
        VAR9->VAR35 |= VAR36;
        VAR22[VAR21]->VAR35 |= VAR36;
    }
    if (VAR19)
    {
        VAR5->VAR37 = 1;
        VAR9->VAR38 = VAR21;
        VAR9->VAR39 = VAR5->VAR39 = FUN12(VAR40 * VAR41 / VAR42, 255);
    }
    else
    {
        const char *VAR43;
        int VAR44;
        AVRational VAR45 = VAR46.VAR47 ? VAR46 : (VAR48){25, 1};
        VAR9->VAR10 = VAR10;
        FUN13(VAR9, VAR22[VAR21], VAR49 | VAR50, VAR12);
        if (VAR12 && VAR12->VAR51 && !VAR52)
            VAR45 = VAR12->VAR51[FUN14(VAR45, VAR12->VAR51)];
        VAR9->VAR53.VAR54 = VAR45.VAR47;
        VAR9->VAR53.VAR47 = VAR45.VAR54;
        VAR9->VAR55 = VAR42;
        VAR9->VAR56 = VAR41;
        VAR9->VAR39 = FUN12(VAR40 * VAR9->VAR56 / VAR9->VAR55, 255);
        VAR9->VAR57 = VAR58;
        VAR5->VAR39 = VAR9->VAR39;
        FUN15(VAR5, VAR12);
        if (VAR59)
            VAR9->VAR60 = 0;
        if (VAR61 || VAR62)
        {
            VAR9->VAR32 |= VAR63;
            VAR9->VAR64 = VAR5->VAR65 = VAR66 * VAR61;
        }
        if (VAR67)
            VAR9->VAR67 = VAR67;
        if (VAR68)
            VAR9->VAR68 = VAR68;
        VAR43 = VAR69;
        for (VAR44 = 0; VAR43; VAR44++)
        {
            int VAR70, VAR71, VAR72;
            int VAR73 = sscanf(VAR43, "", &VAR70, &VAR71, &VAR72);
            if (VAR73 != 3)
            {
                fprintf(VAR16, "");
                FUN3(1);
            }
            VAR9->VAR74 = FUN16(VAR9->VAR74, sizeof(VAR75) * (VAR44 + 1));
            VAR9->VAR74[VAR44].VAR76 = VAR70;
            VAR9->VAR74[VAR44].VAR77 = VAR71;
            if (VAR72 > 0)
            {
                VAR9->VAR74[VAR44].VAR78 = VAR72;
                VAR9->VAR74[VAR44].VAR79 = 1.0;
            }
            else
            {
                VAR9->VAR74[VAR44].VAR78 = 0;
                VAR9->VAR74[VAR44].VAR79 = -VAR72 / 100.0;
            }
            VAR43 = strchr(VAR43, '');
            if (VAR43)
                VAR43++;
        }
        VAR9->VAR80 = VAR44;
        if (!VAR9->VAR81)
            VAR9->VAR81 = VAR9->VAR82 * 3 / 4;
        VAR9->VAR83 = VAR83;
        VAR9->VAR84 = VAR84 - 8;
        if (VAR85)
            VAR9->VAR32 |= VAR86;
        if (VAR87)
        {
            if (VAR87 == 1)
            {
                VAR9->VAR32 |= VAR88;
            }
            else
            {
                VAR9->VAR32 |= VAR89;
            }
        }
        if (VAR90)
            FUN17(VAR90, VAR7, VAR9);
    }
    if (VAR91)
    {
        FUN18(&VAR5->VAR92, "", VAR91, 0);
        FUN19(&VAR91);
    }
    VAR93 = 0;
    FUN19(&VAR20);
    FUN19(&VAR90);
    VAR19 = 0;
    VAR58 = VAR94;
}