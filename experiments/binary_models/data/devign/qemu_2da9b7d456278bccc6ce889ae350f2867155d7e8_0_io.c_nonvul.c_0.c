void FUN1(void)
{
    bool VAR1 = true;
    VAR2 *VAR3;
    BdrvNextIterator VAR4;
    VAR5 *VAR6 = NULL, *VAR7;
    FUN2();
    for (VAR3 = FUN3(&VAR4); VAR3; VAR3 = FUN4(&VAR4))
    {
        VAR8 *VAR9 = FUN5(VAR3);
        FUN6(VAR9);
        FUN7(VAR3);
        FUN8(VAR9);
        FUN9(VAR3, true);
        FUN10(VAR9);
        if (!FUN11(VAR6, VAR9))
        {
            VAR6 = FUN12(VAR6, VAR9);
        }
    }
    while (VAR1)
    {
        VAR1 = false;
        for (VAR7 = VAR6; VAR7 != NULL; VAR7 = VAR7->VAR10)
        {
            VAR8 *VAR9 = VAR7->VAR11;
            FUN6(VAR9);
            for (VAR3 = FUN3(&VAR4); VAR3; VAR3 = FUN4(&VAR4))
            {
                if (VAR9 == FUN5(VAR3))
                {
                    VAR1 |= FUN13(VAR3, true);
                }
            }
            FUN10(VAR9);
        }
    }
    FUN14(VAR6);
}