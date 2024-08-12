static void FUN1(const char *VAR1)
{
    VAR2 *VAR3;
    struct VAR4 *VAR5;
    char VAR6[1024];
    char VAR7[1024], VAR8[1024];
    int VAR9;
    const char *VAR10;
    VAR10 = strrchr(VAR1, '');
    if (!VAR10)
    {
        VAR9 = 0;
        FUN2(VAR8, sizeof(VAR8), VAR1);
        FUN2(VAR6, sizeof(VAR6), "");
    }
    else
    {
        VAR9 = VAR10 - VAR1 + 1;
        memcpy(VAR6, VAR1, VAR9);
        if (VAR9 > sizeof(VAR6) - 1)
            VAR9 = sizeof(VAR6) - 1;
        VAR6[VAR9] = '';
        FUN2(VAR8, sizeof(VAR8), VAR10 + 1);
    }
    FUN3(VAR11, "", VAR1, VAR6, VAR8);
    VAR3 = FUN4(VAR6);
    if (!VAR3)
        return;
    for (;;)
    {
        struct stat VAR12;
        VAR5 = FUN5(VAR3);
        if (!VAR5)
            break;
        if (strcmp(VAR5->VAR13, "") == 0 || strcmp(VAR5->VAR13, "") == 0)
        {
            continue;
        }
        if (FUN6(VAR5->VAR13, VAR8, NULL))
        {
            memcpy(VAR7, VAR1, VAR9);
            if (VAR9 < sizeof(VAR7))
                FUN2(VAR7 + VAR9, sizeof(VAR7) - VAR9, VAR5->VAR13);
            FUN7(VAR7, &VAR12);
            if (FUN8(VAR12.VAR14))
                FUN9(VAR7, sizeof(VAR7), "");
            FUN10(VAR11->VAR15, VAR7);
        }
    }
    FUN11(VAR3);
}