static void FUN1(void)
{
    VAR1 *VAR2, *VAR3;
    int VAR4;
    for (VAR2 = VAR5.VAR6; VAR2; VAR2 = VAR2->VAR7)
    {
        VAR3 = VAR2->VAR3;
        if (VAR3)
        {
            if (VAR2->VAR8)
            {
                for (VAR4 = 0; VAR4 < VAR2->VAR9; VAR4++)
                    VAR2->VAR10[VAR4] = VAR4;
            }
            else
            {
                for (VAR4 = 0; VAR4 < VAR2->VAR9; VAR4++)
                    VAR2->VAR10[VAR4] = FUN2(VAR3, VAR2->VAR11[VAR4]);
            }
        }
    }
    for (VAR3 = VAR5.VAR12; VAR3; VAR3 = VAR3->VAR13)
    {
        int VAR14;
        if (FUN3(VAR3->VAR15, VAR16) > 0)
        {
            VAR17 *VAR18 = NULL;
            int VAR19 = 0;
            if (FUN4(&VAR18, VAR3->VAR15, NULL, NULL) >= 0)
            {
                FUN5(VAR18->VAR20, VAR21);
                if (VAR18->VAR9 == VAR3->VAR9)
                {
                    VAR19 = 1;
                    for (VAR4 = 0; VAR4 < VAR18->VAR9; VAR4++)
                    {
                        VAR22 *VAR23, *VAR24;
                        VAR23 = VAR3->VAR11[VAR4];
                        VAR24 = VAR18->VAR11[VAR4];
                        if (VAR23->VAR25 != VAR24->VAR25 || VAR23->VAR26 != VAR24->VAR26)
                        {
                            FUN6("", VAR4, VAR3->VAR15);
                            VAR19 = 0;
                        }
                        else
                        {
                            VAR27 *VAR28, *VAR29;
                            VAR28 = VAR23->VAR30;
                            VAR29 = VAR24->VAR30;
                            if (FUN7(VAR31) || FUN7(VAR32))
                            {
                                FUN6("", VAR4);
                                VAR19 = 0;
                            }
                            else if (FUN7(VAR33) || FUN7(VAR34))
                            {
                                FUN6("", VAR4);
                                VAR19 = 0;
                            }
                            else if (VAR28->VAR32 == VAR35)
                            {
                                if (FUN7(VAR36.VAR37) || FUN7(VAR36.VAR38) || FUN7(VAR39) || FUN7(VAR40))
                                {
                                    FUN6("", VAR4);
                                    VAR19 = 0;
                                }
                            }
                            else if (VAR28->VAR32 == VAR41)
                            {
                                if (FUN7(VAR42) || FUN7(VAR43) || FUN7(VAR44))
                                {
                                    FUN6("", VAR4);
                                    VAR19 = 0;
                                }
                            }
                            else
                            {
                                FUN6("");
                                VAR19 = 0;
                            }
                        }
                        if (!VAR19)
                            break;
                    }
                }
                else
                    FUN6("", VAR3->VAR15, VAR18->VAR9, VAR3->VAR9);
                FUN8(&VAR18);
            }
            else
                FUN6("", VAR3->VAR15);
            if (!VAR19)
            {
                if (VAR3->VAR45)
                {
                    FUN6("", VAR3->VAR15);
                    FUN9(1);
                }
                unlink(VAR3->VAR15);
            }
        }
        if (FUN3(VAR3->VAR15, VAR46) <= 0)
        {
            VAR17 *VAR18 = FUN10();
            if (!VAR18)
            {
                FUN6("");
                FUN9(1);
            }
            if (VAR3->VAR45)
            {
                FUN6("", VAR3->VAR15);
                FUN9(1);
            }
            if (FUN11(&VAR18->VAR20, VAR3->VAR15, VAR46) < 0)
            {
                FUN6("", VAR3->VAR15);
                FUN9(1);
            }
            VAR18->VAR47 = VAR3->VAR48;
            VAR18->VAR9 = VAR3->VAR9;
            VAR18->VAR11 = VAR3->VAR11;
            if (FUN12(VAR18, NULL) < 0)
            {
                FUN6("");
                FUN9(1);
            }
            FUN13(&VAR18->VAR49);
            FUN14(&VAR18->VAR20);
            VAR18->VAR11 = NULL;
            VAR18->VAR9 = 0;
            FUN15(VAR18);
        }
        VAR14 = open(VAR3->VAR15, VAR50);
        if (VAR14 < 0)
        {
            FUN6("", VAR3->VAR15);
            FUN9(1);
        }
        VAR3->VAR51 = FUN16(FUN17(VAR14), VAR21);
        VAR3->VAR52 = FUN18(VAR14, 0, VAR53);
        if (VAR3->VAR54 && VAR3->VAR54 < VAR3->VAR52)
            VAR3->VAR54 = VAR3->VAR52;
        close(VAR14);
    }
}