static void FUN1(VAR1 *VAR2, void *VAR3)
{
    VAR4 *VAR5 = VAR3;
    VAR6 *VAR7 = FUN2(VAR5);
    VAR8 *VAR9 = FUN3(VAR5->VAR10);
    gint VAR11;
    FUN4(VAR5);
    if (VAR7)
    {
        VAR11 = FUN5(VAR9, VAR7->VAR12);
        FUN6(VAR9, VAR11);
        FUN7(VAR7->VAR13);
    }