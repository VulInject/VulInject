static void FUN1(VAR1 *VAR2, const void *VAR3)
{
    int64_t VAR4;
    bool VAR5;
    double VAR6;
    char *VAR7;
    EnumOne VAR8;
    VAR9 *VAR10 = NULL;
    VAR11 *VAR12;
    unsigned int VAR13;
    char VAR14[10000];
    for (VAR13 = 0; VAR13 < 100; VAR13++)
    {
        unsigned int VAR15;
        VAR15 = FUN2(0, sizeof(VAR14) - 1);
        VAR14[VAR15] = '';
        if (VAR15 != 0)
        {
            for (VAR15--; VAR15 != 0; VAR15--)
            {
                VAR14[VAR15 - 1] = (char)FUN2(0, 256);
            }
        }
        VAR12 = FUN3(VAR2, VAR14);
        FUN4(VAR12, &VAR4, NULL, &VAR10);
        VAR12 = FUN3(VAR2, VAR14);
        FUN5(VAR12, &VAR5, NULL, &VAR10);
        FUN6(VAR2, NULL);
        VAR12 = FUN3(VAR2, VAR14);
        FUN7(VAR12, &VAR6, NULL, &VAR10);
        VAR12 = FUN3(VAR2, VAR14);
        FUN8(VAR12, &VAR7, NULL, &VAR10);
        FUN9(VAR7);
        VAR12 = FUN3(VAR2, VAR14);
        FUN10(VAR12, &VAR8, NULL, &VAR10);
        FUN6(VAR2, NULL);
    }
}