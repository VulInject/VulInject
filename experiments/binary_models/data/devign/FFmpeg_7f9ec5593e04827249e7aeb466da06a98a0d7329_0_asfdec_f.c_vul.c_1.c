static int FUN1(VAR1 *VAR2, int64_t VAR3)
{
    VAR4 *VAR5 = VAR2->VAR5;
    VAR6 *VAR7 = VAR2->VAR8;
    int VAR9, VAR10, VAR11, VAR12;
    char VAR13[1024];
    FUN2(VAR5);
    FUN2(VAR5);
    VAR10 = FUN3(VAR5);
    FUN4(VAR5);
    VAR11 = FUN4(VAR5);
    for (VAR9 = 0; VAR9 < VAR11; VAR9++)
        FUN5(VAR5);
    for (VAR9 = 0; VAR9 < VAR10; VAR9++)
    {
        int64_t VAR14;
        int VAR11;
        FUN2(VAR5);
        VAR14 = FUN2(VAR5);
        VAR14 -= VAR7->VAR15.VAR16 * 10000;
        FUN4(VAR5);
        FUN3(VAR5);
        FUN3(VAR5);
        VAR11 = FUN3(VAR5);
        if ((VAR12 = FUN6(VAR5, VAR11 * 2, VAR13, sizeof(VAR13))) < VAR11)
            FUN7(VAR5, VAR11 - VAR12);
        FUN8(VAR2, VAR9, (VAR17){1, 10000000}, VAR14, VAR18, VAR13);
    }
    return 0;
}