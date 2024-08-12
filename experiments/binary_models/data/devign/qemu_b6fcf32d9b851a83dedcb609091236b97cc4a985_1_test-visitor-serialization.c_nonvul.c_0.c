static void FUN1(gconstpointer VAR1)
{
    VAR2 *VAR3 = (VAR2 *)VAR1;
    const VAR4 *VAR5 = VAR3->VAR5;
    VAR6 *VAR7 = FUN2();
    VAR6 *VAR8 = NULL;
    VAR9 *VAR10 = NULL;
    void *VAR11;
    VAR5->FUN3(VAR7, &VAR11, VAR12, &VAR10);
    VAR5->FUN4((void **)&VAR8, VAR11, VAR12, &VAR10);
    FUN5(VAR10 == NULL);
    FUN6(VAR7, VAR8);
    FUN7(VAR7);
    FUN7(VAR8);
    VAR5->FUN8(VAR11);
    FUN9(VAR3);
}