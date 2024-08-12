static int FUN1(void)
{
    int VAR1, VAR2;
    VAR3 *VAR4, *VAR5;
    VAR6 *VAR7;
    VAR8 *VAR9;
    VAR10 *VAR11;
    int VAR12 = 0;
    int64_t VAR13;
    if (!(VAR11 = FUN2(VAR14)))
        FUN3(1);
    VAR1 = FUN4();
    if (VAR1 < 0)
        goto VAR15;
    if (!VAR16)
    {
        FUN5(NULL, VAR17, "");
    }
    VAR13 = FUN6();
    for (; VAR18 == 0;)
    {
        int VAR19, VAR20;
        AVPacket VAR21;
        int64_t VAR22 = FUN6();
        if (!VAR16)
            if (FUN7(VAR22) < 0)
                break;
        if (!FUN8())
        {
            FUN5(NULL, VAR23, "");
            break;
        }
        VAR19 = FUN9(VAR11);
        if (VAR19 < 0)
        {
            if (VAR12)
            {
                VAR12 = 0;
                memset(VAR11, 0, VAR14);
                FUN10(10000);
                continue;
            }
            break;
        }
        VAR4 = VAR24[VAR19]->VAR25;
        VAR1 = FUN11(VAR4, &VAR21);
        if (VAR1 == FUN12(VAR26))
        {
            VAR11[VAR19] = 1;
            VAR12++;
            continue;
        }
        if (VAR1 < 0)
        {
            VAR24[VAR19]->VAR27 = 1;
            for (VAR2 = 0; VAR2 < VAR24[VAR19]->VAR28; VAR2++)
            {
                VAR9 = VAR29[VAR24[VAR19]->VAR20 + VAR2];
                if (VAR9->VAR30)
                    FUN13(VAR9, NULL);
            }
            if (VAR31)
                break;
            else
                continue;
        }
        VAR12 = 0;
        memset(VAR11, 0, VAR14);
        if (VAR32)
        {
            FUN14(NULL, VAR33, &VAR21, VAR34, VAR4->VAR35[VAR21.VAR36]);
        }
        if (VAR21.VAR36 >= VAR24[VAR19]->VAR28)
            goto VAR37;
        VAR20 = VAR24[VAR19]->VAR20 + VAR21.VAR36;
        VAR9 = VAR29[VAR20];
        if (VAR9->VAR38)
            goto VAR37;
        if (VAR21.VAR39 != VAR40)
            VAR21.VAR39 += FUN15(VAR24[VAR9->VAR19]->VAR41, VAR42, VAR9->VAR43->VAR44);
        if (VAR21.VAR45 != VAR40)
            VAR21.VAR45 += FUN15(VAR24[VAR9->VAR19]->VAR41, VAR42, VAR9->VAR43->VAR44);
        if (VAR21.VAR45 != VAR40)
            VAR21.VAR45 *= VAR9->VAR46;
        if (VAR21.VAR39 != VAR40)
            VAR21.VAR39 *= VAR9->VAR46;
        if (VAR47)
        {
            FUN5(NULL, VAR17, ""
                                      "" VAR48 "",
                   VAR20, FUN16(VAR9->VAR43->VAR49->VAR50), FUN17(VAR9->VAR51), FUN18(VAR9->VAR51, &VAR9->VAR43->VAR44), FUN17(VAR9->VAR52), FUN18(VAR9->VAR52, &VAR9->VAR43->VAR44), FUN17(VAR21.VAR45), FUN18(VAR21.VAR45, &VAR9->VAR43->VAR44), FUN17(VAR21.VAR39), FUN18(VAR21.VAR39, &VAR9->VAR43->VAR44), VAR24[VAR9->VAR19]->VAR41);
        }
        if (VAR21.VAR39 != VAR40 && VAR9->VAR51 != VAR40 && !VAR53)
        {
            int64_t VAR54 = FUN15(VAR21.VAR39, VAR9->VAR43->VAR44, VAR42);
            int64_t VAR55 = VAR54 - VAR9->VAR51;
            if (VAR4->VAR56->VAR57 & VAR58)
            {
                if (VAR55 < -1LL * VAR59 * VAR60 || (VAR55 > 1LL * VAR59 * VAR60 && VAR9->VAR43->VAR49->VAR50 != VAR61) || VAR54 + 1 < VAR9->VAR45)
                {
                    VAR24[VAR9->VAR19]->VAR41 -= VAR55;
                    FUN5(NULL, VAR33, "" VAR48 "" VAR48 "", VAR55, VAR24[VAR9->VAR19]->VAR41);
                    VAR21.VAR39 -= FUN15(VAR55, VAR42, VAR9->VAR43->VAR44);
                    if (VAR21.VAR45 != VAR40)
                        VAR21.VAR45 -= FUN15(VAR55, VAR42, VAR9->VAR43->VAR44);
                }
            }
            else
            {
                if (VAR55 < -1LL * VAR62 * VAR60 || (VAR55 > 1LL * VAR62 * VAR60 && VAR9->VAR43->VAR49->VAR50 != VAR61) || VAR54 + 1 < VAR9->VAR45)
                {
                    FUN5(NULL, VAR63, "" VAR48 "" VAR48 "", VAR21.VAR39, VAR9->VAR51, VAR21.VAR36);
                    VAR21.VAR39 = VAR40;
                }
                if (VAR21.VAR45 != VAR40)
                {
                    int64_t VAR64 = FUN15(VAR21.VAR45, VAR9->VAR43->VAR44, VAR42);
                    VAR55 = VAR64 - VAR9->VAR51;
                    if (VAR55 < -1LL * VAR62 * VAR60 || (VAR55 > 1LL * VAR62 * VAR60 && VAR9->VAR43->VAR49->VAR50 != VAR61) || VAR64 + 1 < VAR9->VAR45)
                    {
                        FUN5(NULL, VAR63, "" VAR48 "" VAR48 "", VAR21.VAR45, VAR9->VAR51, VAR21.VAR36);
                        VAR21.VAR45 = VAR40;
                    }
                }
            }
        }
        if ((VAR1 = FUN13(VAR9, &VAR21)) < 0 || ((VAR1 = FUN19()) < 0 && VAR1 != VAR65))
        {
            char VAR66[128];
            FUN20(VAR1, VAR66, sizeof(VAR66));
            FUN5(NULL, VAR67, "", VAR9->VAR19, VAR9->VAR43->VAR68, VAR66);
            if (VAR69)
                FUN3(1);
            FUN21(&VAR21);
            continue;
        }
    VAR37:
        FUN21(&VAR21);
        FUN22(0, VAR13, VAR22);
    }
    for (VAR2 = 0; VAR2 < VAR70; VAR2++)
    {
        VAR9 = VAR29[VAR2];
        if (!VAR24[VAR9->VAR19]->VAR27 && VAR9->VAR30)
        {
            FUN13(VAR9, NULL);
        }
    }
    FUN19();
    FUN23();
    FUN24();
    for (VAR2 = 0; VAR2 < VAR71; VAR2++)
    {
        VAR5 = VAR72[VAR2]->VAR25;
        FUN25(VAR5);
    }
    FUN22(1, VAR13, FUN6());
    for (VAR2 = 0; VAR2 < VAR73; VAR2++)
    {
        VAR7 = VAR74[VAR2];
        if (VAR7->VAR75)
        {
            FUN26(&VAR7->VAR43->VAR49->VAR76);
            FUN27(VAR7->VAR43->VAR49);
        }
    }
    for (VAR2 = 0; VAR2 < VAR70; VAR2++)
    {
        VAR9 = VAR29[VAR2];
        if (VAR9->VAR30)
        {
            FUN27(VAR9->VAR43->VAR49);
        }
    }
    VAR1 = 0;
VAR15:
    FUN26(&VAR11);
    if (VAR74)
    {
        for (VAR2 = 0; VAR2 < VAR73; VAR2++)
        {
            VAR7 = VAR74[VAR2];
            if (VAR7)
            {
                if (VAR7->VAR77)
                    FUN26(&VAR7->VAR43->VAR49->VAR78);
                if (VAR7->VAR79)
                {
                    fclose(VAR7->VAR79);
                    VAR7->VAR79 = NULL;
                }
                FUN26(&VAR7->VAR43->VAR49->VAR80);
                FUN28(VAR7->VAR81);
                FUN29(&VAR7->VAR82);
            }
        }
    }
    return VAR1;
}