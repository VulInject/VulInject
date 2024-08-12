static void FUN1(VAR1 *VAR2, gpointer VAR3)
{
    VAR4 *VAR5 = VAR3;
    VAR6 *VAR7 = NULL;
    if (FUN2(VAR2, &VAR7))
    {
        FUN3("", FUN4(VAR7));
        FUN5(VAR5);
        FUN6(VAR7);
    }
    else
    {
        VAR5->VAR8 = FUN7(VAR5->VAR9, VAR10 | VAR11, VAR12, VAR5, NULL);
        FUN8(VAR5);
    }
}