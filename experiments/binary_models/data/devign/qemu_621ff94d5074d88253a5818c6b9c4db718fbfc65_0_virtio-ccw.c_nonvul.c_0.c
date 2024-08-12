static void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2);
    VAR7 *VAR8 = FUN3(&VAR6->VAR8);
    VAR7 *VAR9 = FUN3(VAR2);
    VAR3 *VAR10 = NULL;
    char *VAR11;
    if (VAR9->VAR12)
    {
        VAR11 = FUN4("", VAR9->VAR12);
        FUN5(FUN6(VAR8), VAR11);
        FUN7(VAR11);
    }
    FUN8(VAR8, FUN9(&VAR2->VAR13));
    FUN10(FUN11(VAR8), true, "", &VAR10);
    FUN12(VAR4, VAR10);
}