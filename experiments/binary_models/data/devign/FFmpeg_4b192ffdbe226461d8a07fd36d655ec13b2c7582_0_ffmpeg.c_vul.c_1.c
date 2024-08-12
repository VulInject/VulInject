static void FUN1(void)
{
    int VAR1, VAR2;
    for (VAR1 = 0; VAR1 < VAR3; VAR1++)
    {
        VAR4 *VAR5 = VAR6[VAR1];
        VAR7 *VAR8 = VAR5->VAR9;
        VAR10 *VAR11 = VAR12[VAR5->VAR13];
        if (!VAR5->VAR14)
            continue;
        if (!VAR5->VAR15)
        {
            VAR16 *VAR17 = VAR5->VAR18->VAR19;
            char VAR20[1024];
            FUN2(NULL, VAR21, "", VAR5->VAR13, VAR5->VAR22->VAR23);
            if (VAR5->VAR18 && !VAR17->VAR19)
            {
                int VAR24;
                for (VAR24 = 0; VAR24 < VAR17->VAR25; VAR24++)
                {
                    VAR26 *VAR27 = VAR17->VAR28[VAR24];
                    if (VAR27->VAR29 < 0)
                    {
                        VAR30 *VAR31 = VAR27->VAR32->VAR22->VAR33;
                        VAR27->VAR29 = VAR31->VAR29;
                        VAR27->VAR34 = VAR31->VAR34;
                        VAR27->VAR35 = VAR31->VAR35;
                        VAR27->VAR36 = VAR31->VAR36;
                        VAR27->VAR37 = VAR31->VAR37;
                        VAR27->VAR38 = VAR31->VAR38;
                        VAR27->VAR39 = VAR31->VAR39;
                    }
                }
                if (!FUN3(VAR17))
                    continue;
                VAR2 = FUN4(VAR17);
                if (VAR2 < 0)
                {
                    FUN2(NULL, VAR40, "");
                    FUN5(1);
                }
                FUN6(VAR5);
            }
            VAR2 = FUN7(VAR5, VAR20, sizeof(VAR20));
            if (VAR2 < 0)
            {
                FUN2(NULL, VAR40, "", VAR5->VAR13, VAR5->VAR23, VAR20);
                FUN5(1);
            }
        }
        if (VAR8->VAR41 == VAR42 && VAR8->VAR43 <= 1)
            continue;
        if (VAR8->VAR41 == VAR44 && (VAR11->VAR45->VAR46->VAR47 & VAR48) && VAR8->VAR49->VAR50 == VAR51)
            continue;
        if (VAR8->VAR41 != VAR44 && VAR8->VAR41 != VAR42)
            continue;
        FUN8(VAR8, NULL);
        for (;;)
        {
            const char *VAR52 = NULL;
            AVPacket VAR53;
            int VAR54;
            switch (VAR8->VAR41)
            {
            case VAR42:
                VAR52 = "";
                break;
            case VAR44:
                VAR52 = "";
                break;
            default:
                FUN9(0);
            }
            FUN10(&VAR53);
            VAR53.VAR55 = NULL;
            VAR53.VAR56 = 0;
            FUN11(NULL);
            VAR2 = FUN12(VAR8, &VAR53);
            FUN11("", VAR52, VAR5->VAR13, VAR5->VAR23);
            if (VAR2 < 0 && VAR2 != VAR57)
            {
                FUN2(NULL, VAR58, "", VAR52, FUN13(VAR2));
                FUN5(1);
            }
            if (VAR5->VAR59 && VAR8->VAR60)
            {
                fprintf(VAR5->VAR59, "", VAR8->VAR60);
            }
            if (VAR2 == VAR57)
            {
                break;
            }
            if (VAR5->VAR61 & VAR62)
            {
                FUN14(&VAR53);
                continue;
            }
            FUN15(&VAR53, VAR8->VAR63, VAR5->VAR64);
            VAR54 = VAR53.VAR56;
            FUN16(VAR11, &VAR53, VAR5);
            if (VAR5->VAR9->VAR41 == VAR44 && VAR65)
            {
                FUN17(VAR5, VAR54);
            }
        }
    }
}