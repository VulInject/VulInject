static void FUN1(VAR1 *VAR2)
{
    char *VAR3;
    char *VAR4;
    int VAR5;
    size_t VAR6;
    if (VAR7)
        return;
    VAR6 = strlen(VAR8);
    if (VAR6 > VAR9 - 1)
    {
        FUN2(""
                 "",
                 VAR8, VAR9);
        return;
    }
    VAR3 = FUN3(VAR8);
    if (!VAR3)
    {
        FUN2("");
        return;
    }
    VAR4 = strrchr(VAR3, '');
    if (!VAR4)
        VAR4 = VAR3;
    else
        VAR4++;
    strcpy(VAR4, "");
    for (; VAR2; VAR2 = VAR2->VAR10)
    {
        if (!VAR2->VAR11 || VAR2->VAR12)
            continue;
        VAR2->VAR13 = FUN4(0);
        VAR2->VAR12 = FUN5();
        if (VAR2->VAR12 < 0)
        {
            FUN2("", strerror(VAR14));
            FUN6(VAR3);
            FUN7(VAR15);
        }
        if (VAR2->VAR12)
            continue;
        FUN2("");
        FUN2("", VAR3);
        for (VAR5 = 1; VAR2->VAR11[VAR5] && VAR2->VAR11[VAR5][0]; VAR5++)
            FUN2("", VAR2->VAR11[VAR5]);
        FUN2("");
        for (VAR5 = 3; VAR5 < 256; VAR5++)
            close(VAR5);
        if (!VAR16.VAR17)
        {
            if (!FUN8("", "", stdin))
                FUN2("");
            if (!FUN8("", "", VAR18))
                FUN2("");
            if (!FUN8("", "", VAR19))
                FUN2("");
        }
        signal(VAR20, VAR21);
        execvp(VAR3, VAR2->VAR11);
        FUN6(VAR3);
        FUN9(1);
    }
    FUN6(VAR3);
}