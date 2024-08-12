static int FUN1(void)
{
    VAR1 *VAR2, *VAR3;
    int VAR4, VAR5;
    for (VAR2 = VAR6.VAR7; VAR2; VAR2 = VAR2->VAR8)
    {
        VAR3 = VAR2->VAR3;
        if (!VAR3)
            continue;
        if (VAR2->VAR9)
        {
            for (VAR4 = 0; VAR4 < VAR2->VAR10; VAR4++)
                VAR2->VAR11[VAR4] = VAR4;
            continue;
        }
        for (VAR4 = 0; VAR4 < VAR2->VAR10; VAR4++)
            VAR2->VAR11[VAR4] = FUN2(VAR3, VAR2->VAR12[VAR4]);
    }
    for (VAR3 = VAR6.VAR13; VAR3; VAR3 = VAR3->VAR14)
    {
        if (FUN3(VAR3->VAR15, VAR16) > 0)
        {
            VAR17 *VAR18 = NULL;
            int VAR19 = 0;
            if (FUN4(&VAR18, VAR3->VAR15, NULL, NULL) < 0)
            {
                FUN5(""
                         "",
                         VAR3->VAR15);
                goto VAR20;
            }
            if (FUN6(VAR18->VAR21, VAR22) < 0)
            {
                FUN5("");
                FUN7(&VAR18);
                goto VAR23;
            }
            if (VAR18->VAR10 != VAR3->VAR10)
            {
                FUN5(""
                         "",
                         VAR3->VAR15, VAR18->VAR10, VAR3->VAR10);
                goto VAR20;
            }
            VAR19 = 1;
            for (VAR4 = 0; VAR4 < VAR18->VAR10; VAR4++)
            {
                VAR24 *VAR25, *VAR26;
                VAR25 = VAR3->VAR12[VAR4];
                VAR26 = VAR18->VAR12[VAR4];
                if (VAR25->VAR27 != VAR26->VAR27 || VAR25->VAR28 != VAR26->VAR28)
                {
                    FUN5("", VAR4, VAR3->VAR15);
                    VAR19 = 0;
                    break;
                }
                VAR19 = FUN8(VAR25->VAR29, VAR26->VAR29, VAR4);
                if (!VAR19)
                    break;
            }
        VAR20:
            if (VAR18)
                FUN7(&VAR18);
            if (!VAR19)
            {
                if (VAR3->VAR30)
                {
                    FUN5("", VAR3->VAR15);
                    goto VAR23;
                }
                unlink(VAR3->VAR15);
            }
        }
        if (FUN3(VAR3->VAR15, VAR31) <= 0)
        {
            VAR17 *VAR18 = FUN9();
            if (!VAR18)
            {
                FUN5("");
                goto VAR23;
            }
            if (VAR3->VAR30)
            {
                FUN5(""
                         "",
                         VAR3->VAR15);
                FUN10(VAR18);
                goto VAR23;
            }
            if (FUN11(&VAR18->VAR21, VAR3->VAR15, VAR31) < 0)
            {
                FUN5("", VAR3->VAR15);
                FUN10(VAR18);
                goto VAR23;
            }
            VAR18->VAR32 = VAR3->VAR33;
            VAR18->VAR10 = VAR3->VAR10;
            VAR18->VAR12 = VAR3->VAR12;
            if (FUN12(VAR18, NULL) < 0)
            {
                FUN5("");
                FUN13(&VAR18->VAR21);
                FUN10(VAR18);
                goto VAR23;
            }
            FUN14(&VAR18->VAR34);
            FUN13(&VAR18->VAR21);
            VAR18->VAR12 = NULL;
            VAR18->VAR10 = 0;
            FUN10(VAR18);
        }
        VAR5 = open(VAR3->VAR15, VAR35);
        if (VAR5 < 0)
        {
            FUN5("", VAR3->VAR15);
            goto VAR23;
        }
        VAR3->VAR36 = FUN15(FUN16(VAR5), VAR22);
        VAR3->VAR37 = FUN17(VAR5, 0, VAR38);
        if (VAR3->VAR39 && VAR3->VAR39 < VAR3->VAR37)
            VAR3->VAR39 = VAR3->VAR37;
        close(VAR5);
    }
    return 0;
VAR23:
    return -1;
}