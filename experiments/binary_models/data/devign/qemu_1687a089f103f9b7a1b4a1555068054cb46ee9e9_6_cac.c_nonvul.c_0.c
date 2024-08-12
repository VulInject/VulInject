FUN1(VAR1 *VAR2, int VAR3)
{
    VAR4 *VAR5;
    VAR6 *VAR7;
    VAR5 = FUN2(VAR2, VAR3);
    assert(VAR5);
    VAR7 = &(VAR5->VAR8.VAR9);
    VAR7->VAR10 = NULL;
    if (VAR7->VAR11)
    {
        FUN3(VAR7->VAR11);
        VAR7->VAR11 = NULL;
    }
    VAR7->VAR12 = 0;
    VAR7->VAR13 = 0;
    return VAR14;
}