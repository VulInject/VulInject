static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4;
    VAR5 *VAR6;
    enum CodecID VAR7;
    VAR4 = FUN2(VAR2, VAR2->VAR8);
    if (!VAR4)
    {
        fprintf(VAR9, "");
        FUN3(1);
    }
    FUN4(VAR4->VAR10, VAR11);
    VAR12[VAR13][VAR2->VAR8 - 1] = VAR14;
    VAR14 = NULL;
    FUN5(VAR4->VAR10, VAR15);
    VAR6 = VAR4->VAR10;
    if (VAR16)
        VAR6->VAR17 = VAR16;
    if ((VAR18 & 1) || (VAR18 == 0 && (VAR2->VAR19->VAR20 & VAR21)))
    {
        VAR6->VAR20 |= VAR22;
        VAR23[VAR11]->VAR20 |= VAR22;
    }
    if (VAR18 & 2)
    {
        VAR6->VAR24 |= VAR25;
        VAR23[VAR11]->VAR24 |= VAR25;
    }
    if (VAR26)
    {
        VAR4->VAR27 = 1;
        VAR6->VAR28 = VAR11;
        VAR6->VAR29 = VAR4->VAR29 = FUN6(VAR30 * VAR31 / VAR32, 255);
    }
    else
    {
        const char *VAR33;
        int VAR34;
        VAR35 *VAR10;
        AVRational VAR36 = VAR37.VAR38 ? VAR37 : (VAR39){25, 1};
        if (VAR40)
        {
            VAR7 = FUN7(VAR40, VAR11, 1);
            VAR10 = FUN8(VAR40);
            VAR41[VAR42] = VAR10;
        }
        else
        {
            VAR7 = FUN9(VAR2->VAR19, NULL, VAR2->VAR43, NULL, VAR11);
            VAR10 = FUN10(VAR7);
        }
        VAR6->VAR7 = VAR7;
        FUN11(VAR6, VAR23[VAR11], VAR44 | VAR45);
        if (VAR10 && VAR10->VAR46 && !VAR47)
            VAR36 = VAR10->VAR46[FUN12(VAR36, VAR10->VAR46)];
        VAR6->VAR48.VAR49 = VAR36.VAR38;
        VAR6->VAR48.VAR38 = VAR36.VAR49;
        VAR6->VAR50 = VAR32;
        VAR6->VAR51 = VAR31;
        VAR6->VAR29 = FUN6(VAR30 * VAR6->VAR51 / VAR6->VAR50, 255);
        VAR6->VAR52 = VAR53;
        VAR4->VAR29 = VAR6->VAR29;
        FUN13(VAR4, VAR10);
        if (VAR54)
            VAR6->VAR55 = 0;
        if (VAR56 || VAR57)
        {
            VAR6->VAR20 |= VAR58;
            VAR6->VAR59 = VAR4->VAR60 = VAR61 * VAR56;
        }
        if (VAR62)
            VAR6->VAR62 = VAR62;
        if (VAR63)
            VAR6->VAR63 = VAR63;
        VAR33 = VAR64;
        for (VAR34 = 0; VAR33; VAR34++)
        {
            int VAR65, VAR66, VAR67;
            int VAR68 = sscanf(VAR33, "", &VAR65, &VAR66, &VAR67);
            if (VAR68 != 3)
            {
                fprintf(VAR9, "");
                FUN3(1);
            }
            VAR6->VAR69 = FUN14(VAR6->VAR69, sizeof(VAR70) * (VAR34 + 1));
            VAR6->VAR69[VAR34].VAR71 = VAR65;
            VAR6->VAR69[VAR34].VAR72 = VAR66;
            if (VAR67 > 0)
            {
                VAR6->VAR69[VAR34].VAR73 = VAR67;
                VAR6->VAR69[VAR34].VAR74 = 1.0;
            }
            else
            {
                VAR6->VAR69[VAR34].VAR73 = 0;
                VAR6->VAR69[VAR34].VAR74 = -VAR67 / 100.0;
            }
            VAR33 = strchr(VAR33, '');
            if (VAR33)
                VAR33++;
        }
        VAR6->VAR75 = VAR34;
        if (!VAR6->VAR76)
            VAR6->VAR76 = VAR6->VAR77 * 3 / 4;
        VAR6->VAR78 = VAR78;
        VAR6->VAR79 = VAR79 - 8;
        if (VAR80)
            VAR6->VAR20 |= VAR81;
        if (VAR82)
        {
            if (VAR82 == 1)
            {
                VAR6->VAR20 |= VAR83;
            }
            else
            {
                VAR6->VAR20 |= VAR84;
            }
        }
    }
    VAR42++;
    if (VAR85)
    {
        FUN15(&VAR4->VAR86, "", VAR85, 0);
        FUN16(&VAR85);
    }
    VAR87 = 0;
    FUN16(&VAR40);
    VAR26 = 0;
    VAR53 = VAR88;
}