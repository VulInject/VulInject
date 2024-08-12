static void FUN1(const void *VAR1)
{
    VAR2 *VAR3;
    VAR4 *VAR5 = NULL;
    double VAR6 = 0.0;
    size_t VAR7 = (VAR8)VAR1;
    VAR9 *VAR10 = NULL, *VAR11 = NULL;
    VAR9 *VAR12 = NULL, *VAR13 = NULL;
    size_t VAR14 = FUN2(VAR15);
    size_t VAR16 = FUN3(VAR15, VAR17);
    VAR10 = FUN4(VAR9, VAR14);
    memset(VAR10, FUN5(), VAR14);
    VAR11 = FUN4(VAR9, VAR16);
    memset(VAR11, FUN5(), VAR16);
    VAR13 = FUN4(VAR9, VAR7);
    VAR12 = FUN4(VAR9, VAR7);
    memset(VAR12, FUN5(), VAR7);
    VAR3 = FUN6(VAR15, VAR17, VAR10, VAR14, &VAR5);
    FUN7(VAR3 != NULL);
    FUN7(FUN8(VAR3, VAR11, VAR16, &VAR5) == 0);
    FUN9();
    do
    {
        FUN7(FUN10(VAR3, VAR12, VAR13, VAR7, &VAR5) == 0);
        VAR6 += VAR7;
    } while (FUN11() < 5.0);
    VAR6 /= 1024 * 1024;
    FUN12("");
    FUN12("", VAR7);
    FUN12("", VAR6, FUN13());
    FUN12("", VAR6 / FUN13());
    FUN14(VAR3);
    FUN15(VAR12);
    FUN15(VAR13);
    FUN15(VAR11);
    FUN15(VAR10);
}