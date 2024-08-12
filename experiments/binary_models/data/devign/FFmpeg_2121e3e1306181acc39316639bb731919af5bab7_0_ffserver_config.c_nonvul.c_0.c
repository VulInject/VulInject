static int FUN1(VAR1 *VAR2, const char *VAR3, const char **VAR4, int VAR5)
{
    int VAR6;
    char VAR7[1024];
    if (!FUN2(VAR3, "") || !FUN2(VAR3, ""))
    {
        if (!FUN2(VAR3, ""))
            FUN3("");
        FUN4(VAR7, sizeof(VAR7), VAR4);
        FUN5(&VAR6, VAR7, 0, 1, 65535, VAR2, VAR5, "", VAR7);
        if (VAR6 < 1024)
            FUN3("", VAR6);
        VAR2->VAR8.VAR9 = FUN6(VAR6);
    }
    else if (!FUN2(VAR3, "") || !FUN2(VAR3, ""))
    {
        if (!FUN2(VAR3, ""))
            FUN3("");
        FUN4(VAR7, sizeof(VAR7), VAR4);
        if (FUN7(&VAR2->VAR8.VAR10, VAR7) != 0)
            FUN8("", VAR7);
    }
    else if (!FUN2(VAR3, ""))
    {
        FUN3("");
    }
    else if (!FUN2(VAR3, ""))
    {
        FUN4(VAR7, sizeof(VAR7), VAR4);
        FUN5(&VAR6, VAR7, 0, 1, 65535, VAR2, VAR5, "", VAR7);
        VAR2->VAR11.VAR9 = FUN6(VAR6);
    }
    else if (!FUN2(VAR3, ""))
    {
        FUN4(VAR7, sizeof(VAR7), VAR4);
        if (FUN7(&VAR2->VAR11.VAR10, VAR7) != 0)
            FUN8("", VAR7);
    }
    else if (!FUN2(VAR3, ""))
    {
        FUN4(VAR7, sizeof(VAR7), VAR4);
        FUN5(&VAR6, VAR7, 0, 1, 65535, VAR2, VAR5, "", VAR7);
        VAR2->VAR12 = VAR6;
        if (VAR2->VAR13 > VAR2->VAR12)
            FUN8("", VAR2->VAR13, VAR2->VAR12);
    }
    else if (!FUN2(VAR3, ""))
    {
        FUN4(VAR7, sizeof(VAR7), VAR4);
        FUN5(&VAR6, VAR7, 0, 1, 65535, VAR2, VAR5, "", VAR7);
        VAR2->VAR13 = VAR6;
        if (VAR2->VAR13 > VAR2->VAR12)
            FUN8("", VAR2->VAR13, VAR2->VAR12);
    }
    else if (!FUN2(VAR3, ""))
    {
        int64_t VAR14;
        char *VAR15;
        FUN4(VAR7, sizeof(VAR7), VAR4);
        VAR16 = 0;
        VAR14 = FUN9(VAR7, &VAR15, 10);
        if (VAR14 < 10 || VAR14 > 10000000 || VAR15[0] || VAR16)
            FUN8("", VAR7);
        else
            VAR2->VAR17 = VAR14;
    }
    else if (!FUN2(VAR3, ""))
    {
        if (!VAR2->VAR18)
            FUN4(VAR2->VAR19, sizeof(VAR2->VAR19), VAR4);
    }
    else if (!FUN2(VAR3, ""))
    {
        FUN8("");
    }
    else
        FUN8("", VAR3);
    return 0;
}