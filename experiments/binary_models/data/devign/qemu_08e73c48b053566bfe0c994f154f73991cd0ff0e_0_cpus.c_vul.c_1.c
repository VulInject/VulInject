static void *FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    FUN2();
    FUN3(VAR3->VAR4);
    FUN4(VAR3)
    {
        VAR3->VAR5 = FUN5();
        VAR3->VAR6 = true;
        VAR3->VAR7 = 1;
    }
    FUN6(&VAR8);
    while (VAR9->VAR10)
    {
        FUN7(VAR9->VAR11, &VAR12);
        FUN4(VAR3)
        {
            VAR13 = VAR3;
            FUN8(VAR3);
        }
    }
    FUN9();
    VAR3 = VAR9;
    VAR3->VAR14 = 1;
    while (1)
    {
        FUN10();
        if (!VAR3)
        {
            VAR3 = VAR9;
        }
        while (VAR3 && !VAR3->VAR15 && !VAR3->VAR14)
        {
            FUN11(&VAR16, VAR3);
            VAR13 = VAR3;
            FUN12(VAR17, (VAR3->VAR18 & VAR19) == 0);
            if (FUN13(VAR3))
            {
                int VAR20;
                VAR20 = FUN14(VAR3);
                if (VAR20 == VAR21)
                {
                    FUN15(VAR3);
                }
            }
            else if (VAR3->VAR22)
            {
                if (VAR3->VAR23)
                {
                    VAR3 = FUN16(VAR3);
                }
            }
            VAR3 = FUN16(VAR3);
        }
        FUN17(&VAR16, NULL);
        if (VAR3 && VAR3->VAR14)
        {
            FUN11(&VAR3->VAR14, 0);
        }
        FUN18();
        FUN19(VAR3 ? VAR3 : FUN20(&VAR24));
        FUN21();
    }
    return NULL;