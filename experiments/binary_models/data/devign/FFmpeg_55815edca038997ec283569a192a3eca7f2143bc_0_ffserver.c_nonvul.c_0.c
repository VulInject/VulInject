static void FUN1(void)
{
    VAR1 *VAR2, *VAR3;
    int VAR4;
    for (VAR2 = VAR5; VAR2 != NULL; VAR2 = VAR2->VAR6)
    {
        VAR3 = VAR2->VAR3;
        if (VAR3)
        {
            if (!VAR2->VAR7)
            {
                for (VAR4 = 0; VAR4 < VAR2->VAR8; VAR4++)
                    VAR2->VAR9[VAR4] = FUN2(VAR3, VAR2->VAR10[VAR4]);
            }
        }
    }
    for (VAR2 = VAR5; VAR2 != NULL; VAR2 = VAR2->VAR6)
    {
        VAR3 = VAR2->VAR3;
        if (VAR3)
        {
            if (VAR2->VAR7)
            {
                for (VAR4 = 0; VAR4 < VAR2->VAR8; VAR4++)
                    VAR2->VAR9[VAR4] = VAR4;
            }
        }
    }
    for (VAR3 = VAR11; VAR3 != NULL; VAR3 = VAR3->VAR12)
    {
        int VAR13;
        if (FUN3(VAR3->VAR14, VAR15) > 0)
        {
            VAR16 *VAR17;
            int VAR18 = 0;
            if (FUN4(&VAR17, VAR3->VAR14, NULL, VAR19, NULL) >= 0)
            {
                if (VAR17->VAR8 == VAR3->VAR8)
                {
                    VAR18 = 1;
                    for (VAR4 = 0; VAR4 < VAR17->VAR8; VAR4++)
                    {
                        VAR20 *VAR21, *VAR22;
                        VAR21 = VAR3->VAR10[VAR4];
                        VAR22 = VAR17->VAR10[VAR4];
                        if (VAR21->VAR23 != VAR22->VAR23 || VAR21->VAR24 != VAR22->VAR24)
                        {
                            FUN5("", VAR4, VAR3->VAR14);
                            VAR18 = 0;
                        }
                        else
                        {
                            VAR25 *VAR26, *VAR27;
                            VAR26 = VAR21->VAR28;
                            VAR27 = VAR22->VAR28;
                            if (FUN6(VAR29) || FUN6(VAR30))
                            {
                                FUN5("", VAR4);
                                VAR18 = 0;
                            }
                            else if (FUN6(VAR31) || FUN6(VAR32))
                            {
                                FUN5("", VAR4);
                                VAR18 = 0;
                            }
                            else if (VAR26->VAR30 == VAR33)
                            {
                                if (FUN6(VAR34.VAR35) || FUN6(VAR34.VAR36) || FUN6(VAR37) || FUN6(VAR38))
                                {
                                    FUN5("", VAR4);
                                    VAR18 = 0;
                                }
                            }
                            else if (VAR26->VAR30 == VAR39)
                            {
                                if (FUN6(VAR40) || FUN6(VAR41) || FUN6(VAR42))
                                {
                                    FUN5("", VAR4);
                                    VAR18 = 0;
                                }
                            }
                            else
                            {
                                FUN5("");
                                VAR18 = 0;
                            }
                        }
                        if (!VAR18)
                            break;
                    }
                }
                else
                    FUN5("", VAR3->VAR14, VAR17->VAR8, VAR3->VAR8);
                FUN7(VAR17);
            }
            else
                FUN5("", VAR3->VAR14);
            if (!VAR18)
            {
                if (VAR3->VAR43)
                {
                    FUN5("", VAR3->VAR14);
                    FUN8(1);
                }
                unlink(VAR3->VAR14);
            }
        }
        if (FUN3(VAR3->VAR14, VAR44) <= 0)
        {
            AVFormatContext VAR45 = {0}, *VAR17 = &VAR45;
            if (VAR3->VAR43)
            {
                FUN5("", VAR3->VAR14);
                FUN8(1);
            }
            if (FUN9(&VAR17->VAR46, VAR3->VAR14, VAR44) < 0)
            {
                FUN5("", VAR3->VAR14);
                FUN8(1);
            }
            VAR17->VAR47 = VAR3->VAR48;
            VAR17->VAR8 = VAR3->VAR8;
            for (VAR4 = 0; VAR4 < VAR17->VAR8; VAR4++)
            {
                VAR20 *VAR49;
                VAR49 = VAR3->VAR10[VAR4];
                VAR17->VAR10[VAR4] = VAR49;
            }
            FUN10(VAR17, NULL);
            if (FUN11(VAR17) < 0)
            {
                FUN5("");
                FUN8(1);
            }
            FUN12(&VAR17->VAR50);
            FUN13(VAR17->VAR46);
        }
        VAR13 = open(VAR3->VAR14, VAR51);
        if (VAR13 < 0)
        {
            FUN5("", VAR3->VAR14);
            FUN8(1);
        }
        VAR3->VAR52 = FUN14(FUN15(VAR13), VAR19);
        VAR3->VAR53 = FUN16(VAR13, 0, VAR54);
        if (VAR3->VAR55 && VAR3->VAR55 < VAR3->VAR53)
            VAR3->VAR55 = VAR3->VAR53;
        close(VAR13);
    }
}