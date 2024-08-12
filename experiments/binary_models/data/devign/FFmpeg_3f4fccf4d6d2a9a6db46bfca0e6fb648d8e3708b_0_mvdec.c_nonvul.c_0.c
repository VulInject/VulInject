static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int (*VAR5)(VAR1 *VAR2, VAR3 *VAR4, const char *VAR6, int VAR7))
{
    unsigned VAR8;
    int VAR9;
    VAR10 *VAR11 = VAR2->VAR11;
    FUN2(VAR11, 4);
    VAR8 = FUN3(VAR11);
    FUN2(VAR11, 4);
    for (VAR9 = 0; VAR9 < VAR8; VAR9++)
    {
        char VAR6[17];
        int VAR7;
        if (FUN4(VAR11))
            return VAR12;
        FUN5(VAR11, VAR6, 16);
        VAR6[sizeof(VAR6) - 1] = 0;
        VAR7 = FUN3(VAR11);
        if (VAR7 < 0)
        {
            FUN6(VAR2, VAR13, "", VAR7);
            return VAR14;
        }
        if (FUN7(VAR2, VAR4, VAR6, VAR7) < 0)
        {
            FUN8(VAR2, "", VAR6);
            FUN2(VAR11, VAR7);
        }
    }
    return 0;
}