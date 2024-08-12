static void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 **VAR6)
{
    const char *VAR7 = FUN2(VAR2, "");
    if (VAR7 == NULL)
    {
        FUN3(VAR6, "");
        return;
    }
    VAR4->VAR8.VAR9 = FUN4(VAR10, 1);
    VAR4->VAR8.VAR9->VAR7 = FUN5(VAR7);
}