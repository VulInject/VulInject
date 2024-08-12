static void FUN1(VAR1 *VAR2, const void *VAR3)
{
    int64_t VAR4[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 20};
    VAR5 *VAR6 = NULL, *VAR7;
    VAR8 *VAR9 = NULL;
    VAR10 *VAR11;
    int VAR12 = 0;
    VAR11 = FUN2(VAR2, "");
    FUN3(VAR11, NULL, &VAR6, &VAR13);
    VAR7 = VAR6;
    while (VAR12 < sizeof(VAR4) / sizeof(VAR4[0]))
    {
        FUN4(VAR7);
        FUN5(VAR7->VAR4, ==, VAR4[VAR12++]);
        VAR7 = VAR7->VAR14;
    }
    FUN4(!VAR7);
    FUN6(VAR6);
    FUN7(VAR2, VAR3);
    VAR11 = FUN2(VAR2, "");
    FUN3(VAR11, NULL, &VAR6, &VAR9);
    FUN8(&VAR9);
    FUN4(!VAR6);
}