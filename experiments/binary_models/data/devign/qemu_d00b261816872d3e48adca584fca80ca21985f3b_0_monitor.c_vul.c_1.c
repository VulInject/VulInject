static void FUN1(VAR1 *VAR2, const VAR3 *VAR4)
{
    const char *VAR5 = FUN2(VAR4, "");
    int VAR6 = FUN3(VAR4, "");
    int VAR7 = FUN4(VAR4, "", -1);
    int VAR8 = FUN3(VAR4, "");
    int VAR9 = FUN4(VAR4, "", -1);
    int VAR10 = FUN3(VAR4, "");
    int VAR11 = FUN4(VAR4, "", -1);
    VAR12 *VAR13;
    VAR13 = FUN5(sizeof(*VAR13));
    VAR7 = VAR6 ? VAR7 : 44100;
    VAR9 = VAR8 ? VAR9 : 16;
    VAR11 = VAR10 ? VAR11 : 2;
    if (FUN6(VAR13, VAR5, VAR7, VAR9, VAR11))
    {
        FUN7(VAR2, "");
        FUN8(VAR13);
    }
    FUN9(&VAR14, VAR13, VAR15);
}