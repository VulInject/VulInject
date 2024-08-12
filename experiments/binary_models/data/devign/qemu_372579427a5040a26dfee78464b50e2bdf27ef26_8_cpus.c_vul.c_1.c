static void *FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    FUN2();
    FUN3();
    FUN4(VAR3->VAR4);
    FUN5(VAR3)
    {
        VAR3->VAR5 = FUN6();
        VAR3->VAR6 = true;
        VAR3->VAR7 = 1;
    }
    FUN7(&VAR8);
    while (VAR9->VAR10)
    {
        FUN8(VAR9->VAR11, &VAR12);
        FUN5(VAR3) { FUN9(VAR3); }
    }
    FUN10();
    VAR3 = VAR9;
    VAR3->VAR13 = 1;
    while (1)
    {
        FUN11();
        if (!VAR3)
        {
            VAR3 = VAR9;
        }
        while (VAR3 && !VAR3->VAR14 && !VAR3->VAR13)
        {
            FUN12(&VAR15, VAR3);
            FUN13(VAR16, (VAR3->VAR17 & VAR18) == 0);
            if (FUN14(VAR3))
            {
                int VAR19;
                VAR19 = FUN15(VAR3);
                if (VAR19 == VAR20)
                {
                    FUN16(VAR3);
                    break;
                }
            }
            else if (VAR3->VAR21 || VAR3->VAR10)
            {
                if (VAR3->VAR22)
                {
                    VAR3 = FUN17(VAR3);
                }
                break;
            }
            VAR3 = FUN17(VAR3);
        }
        FUN18(&VAR15, NULL);
        if (VAR3 && VAR3->VAR13)
        {
            FUN12(&VAR3->VAR13, 0);
        }
        FUN19();
        FUN20(FUN21(&VAR23));
        FUN22();
    }
    return NULL;
}