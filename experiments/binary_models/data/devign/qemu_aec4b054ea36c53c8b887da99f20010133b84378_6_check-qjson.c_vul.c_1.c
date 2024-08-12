static void FUN1(void)
{
    enum
    {
        VAR1 = 1024
    };
    char VAR2[2 * (VAR1 + 1) + 1];
    VAR3 *VAR4;
    VAR4 = FUN2(FUN3(VAR2, VAR1), NULL);
    FUN4(VAR4 != NULL);
    FUN5(VAR4);
    VAR4 = FUN2(FUN3(VAR2, VAR1 + 1), NULL);
    FUN4(VAR4 == NULL);
}