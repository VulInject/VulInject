void FUN1(VAR1 **VAR2)
{
    VAR1 *VAR3 = NULL;
    VAR4 *VAR5;
    VAR6 *VAR7;
    BdrvNextIterator VAR8;
    if (FUN2())
    {
        FUN3(VAR2, "");
        return;
    }
    if (FUN4())
    {
        FUN3(VAR2, "");
        return;
    }
    else if (FUN5(VAR9))
    {
        return;
    }
    for (VAR5 = FUN6(NULL); VAR5; VAR5 = FUN6(VAR5))
    {
        FUN7(VAR5);
    }
    for (VAR7 = FUN8(&VAR8); VAR7; VAR7 = FUN9(&VAR8))
    {
        FUN10(VAR7, NULL, &VAR3);
        if (VAR3)
        {
            FUN11(VAR2, VAR3);
            return;
        }
    }
    FUN12(&VAR3);
    if (VAR3)
    {
        FUN11(VAR2, VAR3);
        return;
    }
    if (FUN5(VAR10))
    {
        VAR11 = 1;
    }
    else
    {
        FUN13();
    }
}