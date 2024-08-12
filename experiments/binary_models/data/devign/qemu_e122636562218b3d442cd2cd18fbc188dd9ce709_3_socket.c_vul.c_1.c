static void FUN1(VAR1 *VAR2, VAR3 *VAR4, gpointer VAR5)
{
    VAR6 *VAR7 = VAR5;
    VAR8 *VAR9 = FUN2(VAR2);
    if (VAR4)
    {
        FUN3(FUN4(VAR4));
        VAR7->VAR10 = NULL;
        FUN5(VAR7, VAR4);
    }
    else
    {
        FUN6();
        FUN7(VAR7, VAR9);
    }
    FUN8(VAR2);
}