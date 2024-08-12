static void FUN1(VAR1 *VAR2, const char *VAR3)
{
    char VAR4[VAR5 + VAR6 + 1];
    char *VAR7 = NULL, *VAR8 = NULL;
    VAR9 *VAR10 = NULL;
    FUN2(VAR4, VAR3, VAR5 + 1);
    FUN3(VAR4, VAR11, VAR5 + VAR6 + 1);
    if (FUN4(VAR12, VAR4, VAR5 + VAR6, &VAR7, &VAR10) < 0)
    {
        FUN5("", FUN6(VAR10));
        FUN7(VAR10);
        FUN8(VAR2);
        return;
    }
    VAR8 = FUN9(VAR13, VAR7);
    FUN10(VAR2, (const VAR14 *)VAR8, strlen(VAR8));
    FUN11(VAR7);
    FUN11(VAR8);
    VAR2->VAR15 = 1;
    FUN12(VAR2);
}