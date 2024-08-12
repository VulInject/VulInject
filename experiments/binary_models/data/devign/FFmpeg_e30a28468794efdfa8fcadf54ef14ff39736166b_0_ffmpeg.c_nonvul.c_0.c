void FUN1(const char *VAR1)
{
    VAR2 *VAR3;
    VAR4 *VAR5;
    int VAR6, VAR7, VAR8, VAR9, VAR10;
    int VAR11;
    if (!strcmp(VAR1, ""))
        VAR1 = "";
    VAR5 = FUN2(sizeof(VAR4));
    if (!VAR12)
    {
        VAR12 = FUN3(NULL, VAR1, NULL);
        if (!VAR12)
            VAR12 = &VAR13;
    }
    VAR5->VAR14 = VAR12;
    if (!strcmp(VAR12->VAR15, "") && FUN4(VAR1, "", NULL))
    {
        if (FUN5(VAR5, VAR1) < 0)
        {
            fprintf(VAR16, "", VAR1);
            FUN6(1);
        }
    }
    else
    {
        VAR6 = VAR12->VAR17 != VAR18;
        VAR7 = VAR12->VAR19 != VAR18;
        if (VAR20 > 0)
        {
            FUN7(&VAR9, &VAR10);
            if (!VAR9)
                VAR6 = 0;
            if (!VAR10)
                VAR7 = 0;
        }
        if (VAR21)
        {
            VAR7 = 0;
        }
        if (VAR22)
        {
            VAR6 = 0;
        }
        VAR8 = 0;
        if (VAR6)
        {
            VAR23 *VAR24;
            VAR3 = FUN2(sizeof(VAR2));
            if (!VAR3)
            {
                fprintf(VAR16, "");
                FUN6(1);
            }
            VAR24 = &VAR3->VAR25;
            VAR11 = VAR12->VAR17;
            if (VAR26 != VAR18)
                VAR11 = VAR26;
            VAR24->VAR11 = VAR11;
            VAR24->VAR27 = VAR28;
            VAR24->VAR29 = VAR30;
            VAR24->VAR31 = VAR31;
            VAR24->VAR32 = VAR33;
            VAR24->VAR34 = VAR35;
            if (!VAR36)
                VAR24->VAR37 = VAR37;
            else
                VAR24->VAR37 = 0;
            if (VAR38 || VAR39)
            {
                VAR24->VAR40 |= VAR41;
                VAR24->VAR42 = VAR38;
            }
            if (VAR5->VAR14 == &VAR43 || VAR5->VAR14 == &VAR44)
            {
                VAR24->VAR45 = VAR46;
            }
            VAR5->VAR47[VAR8] = VAR3;
            VAR8++;
        }
        if (VAR7)
        {
            VAR23 *VAR48;
            VAR3 = FUN2(sizeof(VAR2));
            if (!VAR3)
            {
                fprintf(VAR16, "");
                FUN6(1);
            }
            VAR48 = &VAR3->VAR25;
            VAR11 = VAR12->VAR19;
            if (VAR49 != VAR18)
                VAR11 = VAR49;
            VAR48->VAR11 = VAR11;
            VAR48->VAR27 = VAR50;
            VAR48->VAR29 = VAR51;
            VAR48->VAR52 = VAR53;
            VAR48->VAR54 = VAR55;
            VAR5->VAR47[VAR8] = VAR3;
            VAR8++;
        }
        VAR5->VAR8 = VAR8;
        if (!VAR8)
        {
            fprintf(VAR16, "");
            FUN6(1);
        }
        if (VAR56)
            FUN8(VAR5->VAR57, sizeof(VAR5->VAR57), VAR56);
        if (VAR58)
            FUN8(VAR5->VAR59, sizeof(VAR5->VAR59), VAR58);
        if (VAR60)
            FUN8(VAR5->VAR61, sizeof(VAR5->VAR61), VAR60);
        if (VAR62)
            FUN8(VAR5->VAR63, sizeof(VAR5->VAR63), VAR62);
    }
    VAR64[VAR65] = VAR5;
    FUN9(VAR5, VAR65, VAR1, 1);
    VAR65++;
    strcpy(VAR5->VAR1, VAR1);
    if (VAR5->VAR14->VAR40 & VAR66)
    {
        if (FUN10(VAR5->VAR1) < 0)
            FUN6(1);
    }
    if (!(VAR5->VAR14->VAR40 & VAR67))
    {
        if (!VAR68 && (strchr(VAR1, '') == NULL || FUN4(VAR1, "", NULL)))
        {
            if (FUN11(VAR1))
            {
                int VAR69;
                FUN12("", VAR1);
                FUN13(VAR70);
                VAR69 = getchar();
                if (FUN14(VAR69) != '')
                {
                    fprintf(VAR16, "");
                    FUN6(1);
                }
            }
        }
        if (FUN15(&VAR5->VAR71, VAR1, VAR72) < 0)
        {
            fprintf(VAR16, "", VAR1);
            FUN6(1);
        }
    }
    VAR12 = NULL;
    VAR21 = 0;
    VAR22 = 0;
    VAR49 = VAR18;
    VAR26 = VAR18;
}