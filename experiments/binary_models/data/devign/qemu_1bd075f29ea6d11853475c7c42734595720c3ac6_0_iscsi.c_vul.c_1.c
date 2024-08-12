FUN1(struct VAR1 *VAR2, int VAR3, void *VAR4, void *VAR5)
{
    VAR6 *VAR7 = VAR5;
    if (VAR7->VAR8 != 0)
    {
        FUN2(VAR7);
        FUN3(VAR7->VAR9);
        VAR7->VAR9 = NULL;
        return;
    }
    VAR7->VAR3 = 0;
    if (VAR3 < 0)
    {
        FUN4("", FUN5(VAR2));
        VAR7->VAR3 = -VAR10;
    }
    FUN6(VAR7);
    FUN3(VAR7->VAR9);
    VAR7->VAR9 = NULL;
}