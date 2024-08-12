void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4;
    VAR5 *VAR6, *VAR7;
    VAR8 *VAR9, *VAR10;
    int VAR11, VAR12;
    char VAR13[256];
    VAR6 = FUN2();
    if (!VAR6)
    {
        FUN3(VAR2, "");
        return;
    }
    FUN3(VAR2, "");
    FUN4(VAR4, &VAR14, VAR15)
    {
        VAR7 = VAR4->VAR16;
        if (FUN5(VAR7))
        {
            if (VAR6 == VAR7)
                FUN3(VAR2, "", FUN6(VAR7));
        }
    }
    FUN3(VAR2, "");
    VAR11 = FUN7(VAR6, &VAR9);
    if (VAR11 < 0)
    {
        FUN3(VAR2, "", VAR11);
        return;
    }
    FUN3(VAR2, "", FUN6(VAR6));
    FUN3(VAR2, "", FUN8(VAR13, sizeof(VAR13), NULL));
    for (VAR12 = 0; VAR12 < VAR11; VAR12++)
    {
        VAR10 = &VAR9[VAR12];
        FUN3(VAR2, "", FUN8(VAR13, sizeof(VAR13), VAR10));
    }
    FUN9(VAR9);
}