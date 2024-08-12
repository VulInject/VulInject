FUN1(struct VAR1 *VAR2, int VAR3, void *VAR4, void *VAR5)
{
    VAR6 *VAR7 = VAR5;
    FUN2(VAR2, VAR3, VAR7, VAR7->VAR8);
    FUN3(VAR7->VAR9);
    if (VAR7->VAR8 != 0)
    {
        FUN4(VAR7);
        FUN5(VAR7->VAR10);
        VAR7->VAR10 = NULL;
        return;
    }
    VAR7->VAR3 = 0;
    if (VAR3 < 0)
    {
        FUN6("", FUN7(VAR2));
        VAR7->VAR3 = -VAR11;
    }
    FUN8(VAR7);
    FUN5(VAR7->VAR10);
    VAR7->VAR10 = NULL;
}