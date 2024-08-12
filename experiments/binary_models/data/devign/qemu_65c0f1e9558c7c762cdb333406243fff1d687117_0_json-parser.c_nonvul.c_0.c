VAR1 *FUN1(VAR2 *VAR3, VAR4 *VAR5, VAR6 **VAR7)
{
    VAR8 *VAR9 = FUN2(VAR3);
    VAR1 *VAR10;
    if (!VAR9)
    {
        return NULL;
    }
    VAR10 = FUN3(VAR9, VAR5);
    FUN4(VAR7, VAR9->VAR11);
    FUN5(VAR9);
    return VAR10;
}