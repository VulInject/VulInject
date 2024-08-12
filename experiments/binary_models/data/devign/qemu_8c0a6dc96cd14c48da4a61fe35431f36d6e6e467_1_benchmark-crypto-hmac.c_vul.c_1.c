static void FUN1(const void *VAR1)
{
    size_t VAR2 = (VAR3)VAR1;
    VAR4 *VAR5 = NULL;
    VAR6 *VAR7 = NULL, *VAR8 = NULL;
    size_t VAR9 = 0;
    double VAR10 = 0.0;
    struct iovec VAR11;
    VAR12 *VAR13 = NULL;
    int VAR14;
    if (!FUN2(VAR15))
    {
        return;
    }
    VAR7 = FUN3(VAR6, VAR2);
    memset(VAR7, FUN4(), VAR2);
    VAR11.VAR16 = (char *)VAR7;
    VAR11.VAR17 = VAR2;
    FUN5();
    do
    {
        VAR5 = FUN6(VAR15, (const VAR6 *)VAR18, strlen(VAR18), &VAR13);
        FUN7(VAR13 == NULL);
        FUN7(VAR5 != NULL);
        VAR14 = FUN8(VAR5, &VAR11, 1, &VAR8, &VAR9, &VAR13);
        FUN7(VAR14 == 0);
        FUN7(VAR13 == NULL);
        FUN9(VAR5);
        VAR10 += VAR2;
    } while (FUN10() < 5.0);
    VAR10 /= 1024 * 1024;
    FUN11("");
    FUN11("", VAR2);
    FUN11("", VAR10, FUN12());
    FUN11("", VAR10 / FUN12());
    FUN13(VAR8);
    FUN13(VAR7);
}