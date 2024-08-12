static void FUN1(gconstpointer VAR1)
{
    VAR2 *VAR3 = (VAR2 *)VAR1;
    const VAR4 *VAR5 = VAR3->VAR5;
    VAR6 *VAR7 = FUN2();
    VAR6 *VAR8 = NULL;
    void *VAR9;
    VAR5->FUN3(VAR7, &VAR9, VAR10, &VAR11);
    VAR5->FUN4((void **)&VAR8, VAR9, VAR10, &VAR11);
    FUN5(VAR7, VAR8);
    FUN6(VAR7);
    FUN6(VAR8);
    VAR5->FUN7(VAR9);
    FUN8(VAR3);
}