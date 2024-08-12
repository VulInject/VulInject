FUN1(struct VAR1 *VAR2, int VAR3, void *VAR4, void *VAR5)
{
    VAR6 *VAR7 = VAR5;
    FUN2(VAR2, VAR3, VAR7, VAR7->VAR8);
    if (VAR7->VAR8)
    {
        FUN3(VAR7);
        return;
    }
    VAR7->VAR3 = 0;
    if (VAR3 != 0)
    {
        FUN4("", FUN5(VAR2));
        VAR7->VAR3 = -VAR9;
    }
    FUN6(VAR10, VAR7);
}