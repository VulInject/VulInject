int FUN1(VAR1 *VAR2, VAR3 **VAR4, VAR3 **VAR5)
{
    int VAR6;
    VAR6 = FUN2(VAR2, VAR4, VAR5);
    if (VAR6 < 0)
        return VAR6;
    VAR6 = FUN3(VAR2->VAR7->VAR8[0], VAR4);
    if (VAR6 < 0)
    {
        FUN4(VAR4);
        *VAR5 = NULL;
        return VAR6;
    }
    return 0;
}