static void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 **VAR6)
{
    const char *VAR7 = FUN2(VAR2, "");
    VAR8 *VAR9;
    if (VAR7 == NULL)
    {
        FUN3(VAR6, "");
        return;
    }
    VAR9 = VAR4->VAR10.VAR11.VAR12 = FUN4(VAR8, 1);
    FUN5(VAR2, FUN6(VAR9));
    VAR9->VAR7 = FUN7(VAR7);
}