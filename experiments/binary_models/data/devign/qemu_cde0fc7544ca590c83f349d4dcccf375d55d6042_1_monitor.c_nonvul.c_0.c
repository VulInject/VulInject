static void FUN1(VAR1 *VAR2, const char *VAR3)
{
    VAR4 *VAR5;
    const VAR6 *VAR7;
    VAR5 = FUN2();
    VAR7 = FUN3(VAR2, VAR3, VAR5);
    if (!VAR7)
        goto VAR8;
    if (FUN4(VAR7))
    {
        FUN5(VAR2, VAR7, VAR5);
    }
    else if (FUN6(VAR7))
    {
        FUN7(VAR2, VAR7, VAR5);
    }
    else
    {
        VAR7->VAR9.FUN8(VAR2, VAR5);
    }
VAR8:
    FUN9(VAR5);
}