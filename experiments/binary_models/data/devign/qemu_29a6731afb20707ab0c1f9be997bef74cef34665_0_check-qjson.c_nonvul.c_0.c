static void FUN1(void)
{
    VAR1 *VAR2;
    VAR3 *VAR4;
    VAR5 *VAR6;
    int VAR7 = 0x2342;
    long long VAR8 = 0x2342342343LL;
    double VAR9 = 2.323423423;
    VAR2 = FUN2("", VAR7);
    FUN3(VAR2 != NULL);
    FUN3(FUN4(VAR2) == VAR10);
    VAR4 = FUN5(VAR2);
    FUN3(FUN6(VAR4) == VAR7);
    FUN7(VAR4);
    VAR2 = FUN2("", VAR8);
    FUN3(VAR2 != NULL);
    FUN3(FUN4(VAR2) == VAR10);
    VAR4 = FUN5(VAR2);
    FUN3(FUN6(VAR4) == VAR8);
    FUN7(VAR4);
    VAR2 = FUN2("", VAR9);
    FUN3(VAR2 != NULL);
    FUN3(FUN4(VAR2) == VAR11);
    VAR6 = FUN8(VAR2);
    FUN3(FUN9(VAR6) == VAR9);
    FUN7(VAR6);
}