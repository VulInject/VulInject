static void FUN1(VAR1 *VAR2, int VAR3)
{
    VAR4 *VAR5;
    VAR6 *VAR7;
    VAR8 *VAR9;
    enum CodecID VAR10 = VAR11;
    VAR12 *VAR13 = NULL;
    if (!VAR14)
    {
        if (VAR15)
        {
            VAR10 = FUN2(VAR15, VAR16, 1);
            VAR13 = FUN3(VAR15);
        }
        else
        {
            VAR10 = FUN4(VAR2->VAR17, NULL, VAR2->VAR18, NULL, VAR16);
            VAR13 = FUN5(VAR10);
        }
    }
    VAR7 = FUN6(VAR2, VAR3, VAR13);
    VAR5 = VAR7->VAR5;
    if (!VAR14)
    {
        VAR7->VAR19 = VAR19;
        VAR19 = 0;
        VAR7->VAR20 = VAR21;
        VAR21 = NULL;
    }
    VAR7->VAR22 = VAR23;
    VAR23 = NULL;
    VAR5->VAR13->VAR24 = VAR24;
    VAR9 = VAR5->VAR13;
    if (VAR25)
        VAR9->VAR26 = VAR25;
    if (VAR2->VAR17->VAR27 & VAR28)
    {
        VAR9->VAR27 |= VAR29;
    }
    if (VAR14)
    {
        VAR5->VAR30 = 1;
        VAR9->VAR31 = VAR16;
        VAR9->VAR32 = VAR5->VAR32 = FUN7(VAR19 * VAR33 / VAR34, 255);
    }
    else
    {
        const char *VAR35;
        int VAR36;
        if (VAR37.VAR38)
            VAR7->VAR37 = VAR37;
        VAR9->VAR10 = VAR10;
        FUN8(VAR9, VAR39[VAR16], VAR40 | VAR41, VAR13);
        VAR9->VAR42 = VAR34;
        VAR9->VAR43 = VAR33;
        VAR9->VAR44 = VAR45;
        VAR5->VAR32 = VAR9->VAR32;
        if (VAR46)
            VAR9->VAR47 = 0;
        if (VAR48 || VAR49)
        {
            VAR9->VAR27 |= VAR50;
            VAR9->VAR51 = VAR52 * VAR48;
        }
        if (VAR53)
            VAR9->VAR53 = VAR53;
        if (VAR54)
            VAR9->VAR54 = VAR54;
        VAR35 = VAR55;
        for (VAR36 = 0; VAR35; VAR36++)
        {
            int VAR56, VAR57, VAR58;
            int VAR59 = sscanf(VAR35, "", &VAR56, &VAR57, &VAR58);
            if (VAR59 != 3)
            {
                fprintf(VAR60, "");
                FUN9(1);
            }
            VAR9->VAR61 = FUN10(VAR9->VAR61, sizeof(VAR62) * (VAR36 + 1));
            VAR9->VAR61[VAR36].VAR63 = VAR56;
            VAR9->VAR61[VAR36].VAR64 = VAR57;
            if (VAR58 > 0)
            {
                VAR9->VAR61[VAR36].VAR65 = VAR58;
                VAR9->VAR61[VAR36].VAR66 = 1.0;
            }
            else
            {
                VAR9->VAR61[VAR36].VAR65 = 0;
                VAR9->VAR61[VAR36].VAR66 = -VAR58 / 100.0;
            }
            VAR35 = strchr(VAR35, '');
            if (VAR35)
                VAR35++;
        }
        VAR9->VAR67 = VAR36;
        if (!VAR9->VAR68)
            VAR9->VAR68 = VAR9->VAR69 * 3 / 4;
        VAR9->VAR70 = VAR70;
        VAR9->VAR71 = VAR71 - 8;
        if (VAR72)
            VAR9->VAR27 |= VAR73;
        if (VAR74)
        {
            if (VAR74 == 1)
            {
                VAR9->VAR27 |= VAR75;
            }
            else
            {
                VAR9->VAR27 |= VAR76;
            }
        }
        if (VAR77)
            FUN11(VAR77, VAR7, VAR9);
    }
    if (VAR78)
    {
        FUN12(&VAR5->VAR79, "", VAR78, 0);
        FUN13(&VAR78);
    }
    VAR80 = 0;
    FUN13(&VAR15);
    FUN13(&VAR77);
    VAR14 = 0;
    VAR45 = VAR81;
}