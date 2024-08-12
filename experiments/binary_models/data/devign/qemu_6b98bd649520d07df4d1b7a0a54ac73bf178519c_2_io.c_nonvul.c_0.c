void FUN1(void)
{
    bool VAR1 = true;
    VAR2 *VAR3 = NULL;
    VAR4 *VAR5 = NULL, *VAR6;
    while ((VAR3 = FUN2(VAR3)))
    {
        VAR7 *VAR8 = FUN3(VAR3);
        FUN4(VAR8);
        if (VAR3->VAR9)
        {
            FUN5(VAR3->VAR9);
        }
        FUN6(VAR3);
        FUN7(VAR3);
        FUN8(VAR3);
        FUN9(VAR8);
        if (!FUN10(VAR5, VAR8))
        {
            VAR5 = FUN11(VAR5, VAR8);
        }
    }
    while (VAR1)
    {
        VAR1 = false;
        for (VAR6 = VAR5; VAR6 != NULL; VAR6 = VAR6->VAR10)
        {
            VAR7 *VAR8 = VAR6->VAR11;
            VAR3 = NULL;
            FUN4(VAR8);
            while ((VAR3 = FUN2(VAR3)))
            {
                if (VAR8 == FUN3(VAR3))
                {
                    if (FUN12(VAR3))
                    {
                        VAR1 = true;
                        FUN13(VAR8, VAR1);
                    }
                }
            }
            VAR1 |= FUN13(VAR8, false);
            FUN9(VAR8);
        }
    }
    VAR3 = NULL;
    while ((VAR3 = FUN2(VAR3)))
    {
        VAR7 *VAR8 = FUN3(VAR3);
        FUN4(VAR8);
        FUN14(VAR3);
        FUN15(VAR3);
        if (VAR3->VAR9)
        {
            FUN16(VAR3->VAR9);
        }
        FUN9(VAR8);
    }
    FUN17(VAR5);
}