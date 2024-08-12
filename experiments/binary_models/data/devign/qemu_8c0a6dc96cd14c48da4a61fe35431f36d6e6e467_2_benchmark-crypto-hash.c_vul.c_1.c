static void FUN1(const void *VAR1)
{
    size_t VAR2 = (VAR3)VAR1;
    VAR4 *VAR5 = NULL, *VAR6 = NULL;
    size_t VAR7 = 0;
    double VAR8 = 0.0;
    struct iovec VAR9;
    int VAR10;
    VAR5 = FUN2(VAR4, VAR2);
    memset(VAR5, FUN3(), VAR2);
    VAR9.VAR11 = (char *)VAR5;
    VAR9.VAR12 = VAR2;
    FUN4();
    do
    {
        VAR10 = FUN5(VAR13, &VAR9, 1, &VAR6, &VAR7, NULL);
        FUN6(VAR10 == 0);
        VAR8 += VAR2;
    } while (FUN7() < 5.0);
    VAR8 /= 1024 * 1024;
    FUN8("");
    FUN8("", VAR2);
    FUN8("", VAR8, FUN9());
    FUN8("", VAR8 / FUN9());
    FUN10(VAR6);
    FUN10(VAR5);
}