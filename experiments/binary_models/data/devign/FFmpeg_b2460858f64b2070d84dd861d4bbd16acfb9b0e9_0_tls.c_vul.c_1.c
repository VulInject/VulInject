static void FUN1(VAR1 *VAR2, const char *VAR3)
{
    VAR4 *VAR5 = VAR2->VAR6;
    char VAR7[1024], VAR8[1024];
    int VAR9, VAR10;
    int VAR11;
    const char *VAR12 = strchr(VAR3, '');
    if (!VAR12)
        return;
    if (FUN2(VAR7, sizeof(VAR7), "", VAR12))
    {
        VAR11 = FUN3(VAR5->VAR13, VAR7, VAR14);
        if (VAR11 < 0)
            FUN4(VAR2, VAR15, "", FUN5(VAR11));
        if (!FUN6(VAR5->VAR16, VAR7, NULL))
            FUN4(VAR2, VAR15, "", FUN7(FUN8(), NULL));
    }
    VAR9 = FUN2(VAR7, sizeof(VAR7), "", VAR12);
    VAR10 = FUN2(VAR8, sizeof(VAR8), "", VAR12);
    if (VAR9 && VAR10)
    {
        VAR11 = FUN9(VAR5->VAR13, VAR7, VAR8, VAR14);
        if (VAR11 < 0)
            FUN4(VAR2, VAR15, "", FUN5(VAR11));
    }
    else if (VAR9 ^ VAR10)
    {
        FUN4(VAR2, VAR15, "");
    }
    if (VAR9 && !FUN10(VAR5->VAR16, VAR7))
        FUN4(VAR2, VAR15, "", FUN7(FUN8(), NULL));
    if (VAR10 && !FUN11(VAR5->VAR16, VAR8, VAR17))
        FUN4(VAR2, VAR15, "", FUN7(FUN8(), NULL));
}