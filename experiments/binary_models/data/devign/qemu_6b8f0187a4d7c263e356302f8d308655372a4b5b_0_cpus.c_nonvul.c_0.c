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
        FUN5(VAR3)
        {
            VAR13 = VAR3;
            FUN9(VAR3);
        }
    }
    FUN10();
    VAR3 = VAR9;
    VAR3->VAR14 = 1;
    while (1)
    {
        FUN11();
        FUN12();
        if (!VAR3)
        {
            VAR3 = VAR9;
        }
        while (VAR3 && !VAR3->VAR15 && !VAR3->VAR14)
        {
            FUN13(&VAR16, VAR3);
            VAR13 = VAR3;
            FUN14(VAR17, (VAR3->VAR18 & VAR19) == 0);
            if (FUN15(VAR3))
            {
                int VAR20;
                VAR20 = FUN16(VAR3);
                if (VAR20 == VAR21)
                {
                    FUN17(VAR3);
                    break;
                }
                else if (VAR20 == VAR22)
                {
                    FUN18();
                    FUN19(VAR3);
                    FUN3();
                    break;
                }
            }
            else if (VAR3->VAR23)
            {
                if (VAR3->VAR24)
                {
                    VAR3 = FUN20(VAR3);
                }
                break;
            }
            VAR3 = FUN20(VAR3);
        }
        FUN21(&VAR16, NULL);
        if (VAR3 && VAR3->VAR14)
        {
            FUN13(&VAR3->VAR14, 0);
        }
        FUN22(VAR3 ? VAR3 : FUN23(&VAR25));
        FUN24();
    }
    return NULL;
}