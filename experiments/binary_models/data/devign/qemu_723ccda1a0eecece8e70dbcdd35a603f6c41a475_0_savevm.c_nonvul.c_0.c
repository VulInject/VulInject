void FUN1(VAR1 *VAR2, const VAR3 *VAR4)
{
    VAR5 *VAR6, *VAR7;
    VAR8 *VAR9, *VAR10;
    int VAR11, VAR12;
    int VAR13;
    int *VAR14;
    VAR6 = FUN2();
    if (!VAR6)
    {
        FUN3(VAR2, "");
        return;
    }
    VAR11 = FUN4(VAR6, &VAR9);
    if (VAR11 < 0)
    {
        FUN3(VAR2, "", VAR11);
        return;
    }
    if (VAR11 == 0)
    {
        FUN3(VAR2, "");
        return;
    }
    VAR14 = FUN5(int, VAR11);
    VAR13 = 0;
    for (VAR12 = 0; VAR12 < VAR11; VAR12++)
    {
        if (FUN6(VAR9[VAR12].VAR15, &VAR7) == 0)
        {
            VAR14[VAR13] = VAR12;
            VAR13++;
        }
    }
    if (VAR13 > 0)
    {
        FUN7((VAR16)VAR17, VAR2, NULL);
        FUN3(VAR2, "");
        for (VAR12 = 0; VAR12 < VAR13; VAR12++)
        {
            VAR10 = &VAR9[VAR14[VAR12]];
            FUN7((VAR16)VAR17, VAR2, VAR10);
            FUN3(VAR2, "");
        }
    }
    else
    {
        FUN3(VAR2, "");
    }
    FUN8(VAR9);
    FUN8(VAR14);
}