static void FUN1(VAR1 *VAR2, gpointer VAR3, guint VAR4, gpointer VAR5)
{
    VAR6 *VAR7 = VAR5;
    VAR8 *VAR9;
    gboolean VAR10;
    if (!FUN2(VAR7->VAR11))
    {
        return;
    }
    VAR9 = FUN3(VAR7, VAR4);
    if (!VAR9)
    {
        return;
    }
    FUN4(FUN5(VAR9->VAR12), VAR13);
    VAR10 = (VAR9->VAR14 == VAR15);
    if (!VAR10)
    {
        FUN4(FUN5(VAR7->VAR16), VAR17);
    }
    else if (VAR7->VAR18)
    {
        FUN4(FUN5(VAR7->VAR16), VAR13);
    }
    FUN6(VAR7->VAR16, VAR10);
    FUN7(VAR9);
}